// SPDX-License-Identifier: AGPL-3.0-only
// Test for the packaged backend's explicit battle read deadline. prepare_backend.py
// copies it into pkg/battle of inada-s/zdxsv 35ffbdad9257eca5043bb4977d26cc07468b5045.

package battle

import (
	"testing"
	"time"
)

func TestReadTimeoutSetting(t *testing.T) {
	for value, want := range map[string]time.Duration{
		"": 10 * time.Second, "65s": 65 * time.Second, "1m30s": 90 * time.Second,
		"0s": 10 * time.Second, "-5s": 10 * time.Second, "ten": 10 * time.Second,
	} {
		if got := readTimeoutFrom(value); got != want {
			t.Errorf("readTimeoutFrom(%q) = %v, want %v", value, got, want)
		}
	}
}
