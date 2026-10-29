#pragma once

#include <cstdint>

namespace ps2::iop::kernel {

// Version from the module's .iopmod header, as the original modload reports in ModuleStatus.
std::uint16_t module_version(int id);

}
