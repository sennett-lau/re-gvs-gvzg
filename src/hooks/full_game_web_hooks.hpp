#pragma once
#include <cstddef>
#include <cstdint>
void research_web_begin();
void research_web_vblank();
void research_web_audio(std::size_t frames);
unsigned research_web_video_hz();
std::uint64_t research_adaptive_frame_cycles();
