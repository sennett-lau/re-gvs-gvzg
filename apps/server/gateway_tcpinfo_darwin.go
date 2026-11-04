//go:build darwin

package main

import (
    "fmt"
    "net"

    "golang.org/x/sys/unix"
)

// tcpInfo reads the kernel's statistics for one accepted TCP connection.
func tcpInfo(conn *net.TCPConn) string {
    raw, err := conn.SyscallConn()
    if err != nil { return "" }
    var info *unix.TCPConnectionInfo
    var infoErr error
    if err := raw.Control(func(fd uintptr) {
        info, infoErr = unix.GetsockoptTCPConnectionInfo(int(fd), unix.IPPROTO_TCP, unix.TCP_CONNECTION_INFO)
    }); err != nil || infoErr != nil { return "" }
    return fmt.Sprintf("srtt_ms=%d rttvar_ms=%d rto_ms=%d tx_bytes=%d rx_bytes=%d retx_bytes=%d retx_packets=%d ooo_bytes=%d",
        info.Srtt, info.Rttvar, info.Rto, info.Txbytes, info.Rxbytes, info.Txretransmitbytes, info.Txretransmitpackets, info.Rxoutoforderbytes)
}
