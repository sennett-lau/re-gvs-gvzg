#pragma once
#include "iop.hpp"
namespace ps2::iop::original_online {
void library(const std::string& name, std::uint32_t table);
bool verify_module(const std::vector<std::uint8_t>& bytes,const std::string& path);
void authorize_module(std::uint32_t base,bool verified);
void reset();
void pump();
bool intercept(Cpu& cpu);
}
