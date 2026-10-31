//go:build !darwin

package main

import "net"

// tcpInfo is only implemented for the macOS connection-info socket option.
func tcpInfo(conn *net.TCPConn) string { return "" }
