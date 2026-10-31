// SPDX-License-Identifier: AGPL-3.0-only
// Regression test for the packaged backend's stale-close fix. prepare_backend.py
// copies it into pkg/lobby of inada-s/zdxsv 35ffbdad9257eca5043bb4977d26cc07468b5045
// and uses that package's test helpers (flow_test.go).

package lobby

import (
	"encoding/binary"
	"testing"
	"time"

	"zdxsv/pkg/battle/battlerpc"
	"zdxsv/pkg/db/dbtest"
	. "zdxsv/pkg/lobby/message"
)

func staleU16(v uint16) []byte {
	b := make([]byte, 2)
	binary.BigEndian.PutUint16(b, v)
	return b
}

func staleLobbyCount(c *testClient, lobbyID uint16) uint16 {
	r := c.ask(0x6303, staleU16(lobbyID)).Reader()
	r.Read16()
	return r.Read16()
}

// The same pilot logs in again and enters Lobby 02 before its old connection
// closes. The old close must keep the newer session, and the newer session must
// still be matched with an opponent.
func TestStaleCloseKeepsNewerLogin(t *testing.T) {
	dbtest.Use(t)
	addr := startLobby(t, battlerpc.NewBattleRpc())
	ac, other := registerAccount(t), registerAccount(t)
	old := dialLobby(t, addr)
	user, _, _ := old.login(ac, "******", "stale")
	old.ask(0x6305, staleU16(2))
	fresh := dialLobby(t, addr)
	if got, _, _ := fresh.login(ac, user, "stale"); got != user {
		t.Fatalf("relogin user %q, want %q", got, user)
	}
	fresh.ask(0x6305, staleU16(2))
	opponent := dialLobby(t, addr)
	opponent.login(other, "******", "opponent")
	opponent.ask(0x6305, staleU16(2))

	old.conn.Close()
	time.Sleep(300 * time.Millisecond)
	if n := staleLobbyCount(opponent, 2); n != 2 {
		t.Fatalf("lobby 2 users after the old close: %d, want 2", n)
	}
	fresh.ask(0x640E, []byte{1})
	opponent.ask(0x640E, []byte{2})
	fresh.expect(0x6910, CategoryNotice)
	opponent.expect(0x6910, CategoryNotice)
}

// The old connection is the only one in a lobby when it closes: the lobby must
// drop it, and the newer session can still enter and be matched.
func TestStaleCloseLeavesNoGhost(t *testing.T) {
	dbtest.Use(t)
	addr := startLobby(t, battlerpc.NewBattleRpc())
	ac, other := registerAccount(t), registerAccount(t)
	old := dialLobby(t, addr)
	user, _, _ := old.login(ac, "******", "stale")
	old.ask(0x6305, staleU16(2))
	fresh := dialLobby(t, addr)
	fresh.login(ac, user, "stale")
	opponent := dialLobby(t, addr)
	opponent.login(other, "******", "opponent")

	old.conn.Close()
	time.Sleep(300 * time.Millisecond)
	if n := staleLobbyCount(opponent, 2); n != 0 {
		t.Fatalf("lobby 2 users after the old close: %d, want 0", n)
	}
	fresh.ask(0x6305, staleU16(2))
	opponent.ask(0x6305, staleU16(2))
	fresh.ask(0x640E, []byte{1})
	opponent.ask(0x640E, []byte{2})
	fresh.expect(0x6910, CategoryNotice)
	opponent.expect(0x6910, CategoryNotice)
}
