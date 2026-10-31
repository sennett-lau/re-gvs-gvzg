// A private byte-stream adapter. This does not implement AVE/INET or guest RPCs.
package main

import (
    "crypto/subtle"
    "encoding/binary"
    "encoding/json"
    "errors"
    "flag"
    "fmt"
    "io"
    "log"
    "net"
    "net/http"
    "os"
    "strings"
    "sync"
    "sync/atomic"
    "syscall"
    "time"

    "golang.org/x/net/websocket"
)

const maxFrame = 64 * 1024

type config struct {
    Listen string `json:"listen"`
    // Optional additional loopback listeners by label, for example one per
    // device tunnel, so the passive connection log can attribute traffic.
    Listeners map[string]string `json:"listeners"`
    Token string `json:"token"`
    Origins []string `json:"origins"`
    Endpoints map[string]string `json:"endpoints"`
    UDP map[string]string `json:"udp"`
}

func loopbackAddress(addr string) bool {
    host, port, err := net.SplitHostPort(addr)
    return err == nil && port != "" && net.ParseIP(host) != nil && net.ParseIP(host).IsLoopback()
}

// Inter-message gap buckets in milliseconds; the last bucket is open-ended.
var gapBounds = []int64{20, 50, 100, 200, 500, 1000}

// direction counts one direction of a connection without parsing its bytes.
type direction struct {
    bytes, frames, maxGap int64
    last time.Time
    gaps [7]int64
}

func (d *direction) add(n int, now time.Time) {
    d.bytes += int64(n)
    d.frames++
    if !d.last.IsZero() {
        gap := now.Sub(d.last).Milliseconds()
        if gap > d.maxGap { d.maxGap = gap }
        i := 0
        for i < len(gapBounds) && gap >= gapBounds[i] { i++ }
        d.gaps[i]++
    }
    d.last = now
}

func (d *direction) String() string {
    return fmt.Sprintf("bytes=%d frames=%d max_gap_ms=%d gaps=%v", d.bytes, d.frames, d.maxGap, d.gaps)
}

func errorCode(err error) string {
    switch {
    case errors.Is(err, syscall.ECONNREFUSED): return "ECONNREFUSED"
    case errors.Is(err, syscall.ECONNRESET): return "ECONNRESET"
    case errors.Is(err, syscall.EPIPE): return "EPIPE"
    }
    if e, ok := err.(net.Error); ok && e.Timeout() { return "ETIMEDOUT" }
    return "EIO"
}

func main() {
    file := flag.String("config", "", "private JSON config (loopback destinations only)")
    flag.Parse()
    var conf config
    raw, err := os.ReadFile(*file)
    if err != nil { log.Fatal(err) }
    if err = json.Unmarshal(raw, &conf); err != nil { log.Fatal(err) }
    if !loopbackAddress(conf.Listen) || len(conf.Token) < 32 { log.Fatal("invalid listen address or capability") }
    for label, addr := range conf.Listeners {
        if label == "" || strings.ContainsAny(label, " =") || !loopbackAddress(addr) || addr == conf.Listen { log.Fatal("invalid listener") }
    }
    for name, addr := range conf.UDP {
        if name == "" || strings.ContainsAny(name, "/?#") || !loopbackAddress(addr) { log.Fatal("invalid UDP endpoint") }
    }
    for name, addr := range conf.Endpoints {
        if name == "" || strings.ContainsAny(name, "/?#") || !loopbackAddress(addr) { log.Fatal("invalid endpoint") }
    }
    mux := http.NewServeMux()
    target := func(path string) (string, string, bool) {
        if strings.HasPrefix(path, "/tcp/") { addr, ok := conf.Endpoints[strings.TrimPrefix(path, "/tcp/")]; return "tcp4", addr, ok }
        if strings.HasPrefix(path, "/udp/") { addr, ok := conf.UDP[strings.TrimPrefix(path, "/udp/")]; return "udp4", addr, ok }
        return "", "", false
    }
    var serial uint64
    listenerLabel := func(r *http.Request) string {
        if addr, ok := r.Context().Value(http.LocalAddrContextKey).(net.Addr); ok {
            for label, listen := range conf.Listeners { if listen == addr.String() { return label } }
        }
        return "default"
    }
    handler := websocket.Server{
        Handshake: func(c *websocket.Config, r *http.Request) error {
            if !strings.HasPrefix(r.Host, "127.0.0.1:") || r.URL.RawQuery != "" { return fmt.Errorf("invalid host or query") }
            if _, _, ok := target(r.URL.Path); !ok { return fmt.Errorf("unknown endpoint") }
            // Browsers always supply Origin; token-protected local native tests may omit it.
            if origin := r.Header.Get("Origin"); origin != "" {
                allowed := false
                for _, candidate := range conf.Origins { if candidate == origin { allowed = true } }
                if !allowed { return fmt.Errorf("origin denied") }
            }
            if len(c.Protocol) != 1 || subtle.ConstantTimeCompare([]byte(c.Protocol[0]), []byte(conf.Token)) != 1 { return fmt.Errorf("capability denied") }
            return nil
        },
        Handler: func(ws *websocket.Conn) {
            defer ws.Close()
            ws.MaxPayloadBytes = maxFrame + 4
            var mu sync.Mutex
            control := func(event, code string, id uint32, n int) error {
                mu.Lock(); defer mu.Unlock()
                ws.SetWriteDeadline(time.Now().Add(10 * time.Second))
                return websocket.JSON.Send(ws, map[string]interface{}{"event": event, "code": code, "id": id, "bytes": n})
            }
            path := ws.Request().URL.Path
            network, address, _ := target(path)
            // Passive record only: counts and timing, never payload bytes or the capability.
            connID, opened := atomic.AddUint64(&serial, 1), time.Now()
            label := listenerLabel(ws.Request())
            var up, down direction
            var statsMu sync.Mutex
            reason, service := "", "-"
            // The first cause wins; closing one side later fails the other.
            setReason := func(r string) { statsMu.Lock(); if reason == "" { reason = r }; statsMu.Unlock() }
            log.Printf("conn %d open listener=%s path=%s", connID, label, path)
            defer func() {
                statsMu.Lock(); defer statsMu.Unlock()
                if reason == "" { reason = "gateway-control" }
                log.Printf("conn %d close listener=%s path=%s duration_ms=%d reason=%s up[%v] down[%v] service=%s", connID, label, path, time.Since(opened).Milliseconds(), reason, &up, &down, service)
            }()
            conn, err := net.DialTimeout(network, address, 5*time.Second)
            if err != nil { setReason("dial-" + errorCode(err)); control("error", errorCode(err), 0, 0); return }
            defer conn.Close()
            // The service logs this address as its peer, which joins the two logs.
            statsMu.Lock(); service = conn.LocalAddr().String(); statsMu.Unlock()
            log.Printf("conn %d dial listener=%s path=%s service=%s", connID, label, path, service)
            if err := control("open", "", 0, 0); err != nil { return }
            // Preserve TCP order and partial reads; never parse or synthesize game packets.
            go func() {
                buf := make([]byte, maxFrame)
                for {
                    n, readErr := conn.Read(buf)
                    if n > 0 || (network == "udp4" && readErr == nil) {
                        statsMu.Lock(); down.add(n, time.Now()); statsMu.Unlock()
                        mu.Lock()
                        ws.SetWriteDeadline(time.Now().Add(10 * time.Second))
                        err := websocket.Message.Send(ws, buf[:n])
                        mu.Unlock()
                        if err != nil { setReason("browser-send-failed"); ws.Close(); conn.Close(); return }
                    }
                    if readErr != nil {
                        if readErr == io.EOF { setReason("service-eof") } else { setReason("service-" + errorCode(readErr)) }
                        if readErr == io.EOF { control("eof", "", 0, 0) } else { control("error", errorCode(readErr), 0, 0) }
                        // Keep the write half usable after peer EOF, until browser close.
                        return
                    }
                }
            }()
            binaryOnly := websocket.Codec{Unmarshal: func(data []byte, kind byte, target interface{}) error {
                if kind != websocket.BinaryFrame { return fmt.Errorf("binary data required") }
                *target.(*[]byte) = data
                return nil
            }}
            var lastID uint32
            for {
                var frame []byte
                if err := binaryOnly.Receive(ws, &frame); err != nil {
                    if err != io.EOF { setReason("browser-error"); control("error", "EPROTO", 0, 0) } else { setReason("browser-close") }
                    return
                }
                if len(frame) < 4 || len(frame) > maxFrame+4 { setReason("browser-frame-size"); control("error", "EPROTO", 0, 0); return }
                id := binary.BigEndian.Uint32(frame[:4])
                if id <= lastID { setReason("browser-frame-order"); control("error", "EPROTO", 0, 0); return }
                lastID = id
                // A header-only TCP frame means write-half close. UDP retains
                // genuine zero-byte datagrams. This acknowledgment means the OS
                // accepted CloseWrite, not that a remote TCP ACK was observed.
                if network == "tcp4" && len(frame) == 4 {
                    if err := conn.(*net.TCPConn).CloseWrite(); err != nil { control("error", errorCode(err), id, 0); return }
                    if err := control("sent", "", id, 0); err != nil { return }
                    continue
                }
                conn.SetWriteDeadline(time.Now().Add(10 * time.Second))
                n, err := conn.Write(frame[4:])
                statsMu.Lock(); up.add(n, time.Now()); statsMu.Unlock()
                if err != nil { setReason("write-" + errorCode(err)); control("error", errorCode(err), id, n); return }
                if err := control("sent", "", id, n); err != nil { return }
            }
        },
    }
    mux.Handle("/tcp/", handler)
    mux.Handle("/udp/", handler)
    for label, addr := range conf.Listeners {
        server := &http.Server{Addr: addr, Handler: mux, ReadHeaderTimeout: 5*time.Second}
        log.Printf("original online byte gateway listener %s on %s", label, addr)
        go func() { log.Fatal(server.ListenAndServe()) }()
    }
    server := &http.Server{Addr: conf.Listen, Handler: mux, ReadHeaderTimeout: 5*time.Second}
    log.Printf("original online byte gateway listening on %s", conf.Listen)
    log.Fatal(server.ListenAndServe())
}
