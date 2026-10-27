#pragma once
#include <cstdint>
// configure: browser main thread, after Module.netplayStep is installed.
// begin/step: EE worker only; step once per simulation tick, before guest input.
void gundam_netplay_configure();
void gundam_netplay_begin();
void gundam_netplay_step();
bool gundam_netplay_enabled();
std::int64_t gundam_netplay_rtc_seconds();
