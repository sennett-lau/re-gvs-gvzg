#pragma once
#include "ps2/cpu.hpp"
bool research_render_only();
void research_mode_complete();
void research_render_complete();
bool research_interpolation_enabled();
std::uint64_t research_pose_epoch();
void research_model_copy(ps2::Cpu &c);
std::uint64_t research_interpolated_models();
void research_camera_begin();
void research_camera_end();
std::uint64_t research_interpolated_cameras();
std::uint32_t research_attachment_source(std::uint32_t entity, unsigned offset);
