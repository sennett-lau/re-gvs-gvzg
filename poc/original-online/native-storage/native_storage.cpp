#include "native_storage.hpp"

#include "kernel.hpp"

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <initializer_list>
#include <optional>
#include <string>

namespace ps2::iop::native_storage {

namespace {

// Contracts follow the original IOPRP 2.80 IOMAN ("IO/File_Manager", library ioman 1.04): files are
// {mode, unit, device, privdata} records indexed by descriptor, a record is free while its device
// word is zero, and the driver operation is called directly by the thread that called ioman.
constexpr std::int32_t kCrossDevice = -18, kBadFd = -9, kInvalid = -22, kTooMany = -24, kNotExtended = -48;
constexpr std::uint32_t kFiles = 32, kDevices = 16, kFrame = 48, kMagic = 0x4E53494Fu;
constexpr std::uint32_t kReadable = 1, kWritable = 2, kDirectory = 8, kExtended = 0x10000000u;

enum Operation : std::uint32_t {
    kInit, kDeinit, kFormat, kOpen, kClose, kRead, kWrite, kLseek, kIoctl, kRemove, kMkdir, kRmdir, kDopen, kDclose,
    kDread, kGetstat, kChstat, kRename, kChdir, kSync, kMount, kUmount, kLseek64, kDevctl, kSymlink, kReadlink, kIoctl2
};
const char *const kNames[] = {"init", "deinit", "format", "open", "close", "read", "write", "lseek", "ioctl",
                              "remove", "mkdir", "rmdir", "dopen", "dclose", "dread", "getstat", "chstat", "rename",
                              "chdir", "sync", "mount", "umount", "lseek64", "devctl", "symlink", "readlink", "ioctl2"};

enum Finish : std::uint32_t { kAdded = 1, kDeleted, kOpened, kClosed, kValue, kPathStatus, kPathValue };

std::uint32_t g_files = 0, g_devices = 0, g_continue = 0;

std::uint32_t arg(const Cpu &c, int i) { return i < 4 ? c.r[4 + i] : ram32(c.r[29] + 16u + static_cast<std::uint32_t>(i - 4) * 4u); }
std::uint32_t record(std::uint32_t fd) { return g_files + fd * 16u; }
bool open_fd(std::uint32_t fd) { return fd < kFiles && ram32(record(fd) + 8); }
std::uint32_t function(std::uint32_t device, Operation op) { return ram32(ram32(device + 16) + op * 4u); }
std::uint32_t busy_word() { return g_devices + kDevices * 4u; }
std::uint32_t pending_word() { return g_devices + kDevices * 4u + 4u; }

std::uint32_t lookup(const std::string &name) {
    for (std::uint32_t i = 0; i < kDevices; ++i) {
        const std::uint32_t device = ram32(g_devices + i * 4u);
        if (device && ram_string(ram32(device)) == name) return device;
    }
    return 0;
}

struct Target {
    std::uint32_t device, unit, name;
};

// Original find_device: skip spaces, split at the colon, and read trailing decimal digits as the unit.
std::optional<Target> resolve(std::uint32_t path) {
    while (*ram_ptr(path) == ' ') ++path;
    std::string prefix;
    std::uint32_t at = path;
    for (;; ++at) {
        const char ch = static_cast<char>(*ram_ptr(at));
        if (!ch || prefix.size() > 255) return std::nullopt;
        if (ch == ':') break;
        prefix += ch;
    }
    std::size_t digits = prefix.size();
    while (digits && std::isdigit(static_cast<unsigned char>(prefix[digits - 1]))) --digits;
    const std::uint32_t unit = digits < prefix.size() ? static_cast<std::uint32_t>(std::strtoul(prefix.c_str() + digits, nullptr, 10)) : 0;
    prefix.resize(digits);
    const std::uint32_t device = lookup(prefix);
    if (!device) return std::nullopt;
    return Target{device, unit, at + 1};
}

// Descriptors 0-2 stay with the runtime's terminal handling; disc and ROM files share the namespace.
std::int32_t claim(const Target &t) {
    for (std::uint32_t fd = 3; fd < kFiles; ++fd) {
        if (ram32(record(fd) + 8) || io::host_fd_in_use(static_cast<int>(fd))) continue;
        set_ram32(record(fd) + 4, t.unit);
        set_ram32(record(fd) + 8, t.device);
        return static_cast<std::int32_t>(fd);
    }
    std::fprintf(stderr, "[native-storage] out of file descriptors\n");
    return kTooMany;
}

void release(std::uint32_t fd) {
    set_ram32(record(fd), 0);
    set_ram32(record(fd) + 8, 0);
}

bool thread_context(Cpu &c, const char *what) {
    if (!kernel::in_interrupt()) return true;
    std::fprintf(stderr, "[native-storage] %s from interrupt context is unsupported\n", what);
    c.r[2] = static_cast<std::uint32_t>(-1);
    return false;
}

// Continue in the driver as if ioman had called it: the frame below the caller's stack holds the
// argument home area, up to three stack arguments and the state needed when the driver returns.
void call(Cpu &c, std::uint32_t device, Operation op, Finish finish, std::uint32_t context, std::initializer_list<std::uint32_t> args) {
    const std::uint32_t sp = c.r[29] - kFrame;
    std::uint32_t i = 0;
    for (const std::uint32_t value : args) {
        if (i < 4) c.r[4 + i] = value;
        else set_ram32(sp + 16u + (i - 4u) * 4u, value);
        ++i;
    }
    set_ram32(sp + 28, op);
    set_ram32(sp + 32, c.pc);
    set_ram32(sp + 36, finish);
    set_ram32(sp + 40, context);
    set_ram32(sp + 44, sp ^ kMagic);
    const std::uint32_t target = function(device, op);
    set_ram32(pending_word(), ram32(pending_word()) + 1);
    c.r[29] = sp;
    c.r[31] = g_continue;
    c.pc = target;
    c.npc = target + 4;
}

void insert(std::uint32_t device) {
    for (std::uint32_t i = kDevices - 1; i > 0; --i) set_ram32(g_devices + i * 4u, ram32(g_devices + (i - 1) * 4u));
    set_ram32(g_devices, device);
}

void remove(std::uint32_t device) {
    std::uint32_t out = 0;
    for (std::uint32_t i = 0; i < kDevices; ++i) {
        const std::uint32_t d = ram32(g_devices + i * 4u);
        if (d && d != device) set_ram32(g_devices + 4u * out++, d);
    }
    while (out < kDevices) set_ram32(g_devices + 4u * out++, 0);
}

std::int32_t complete(Operation op, Finish finish, std::uint32_t context, std::int32_t result) {
    std::int32_t value = result;
    switch (finish) {
    case kAdded:
        set_ram32(busy_word(), 0);
        value = result < 0 ? -1 : 0;
        if (!value) insert(context);
        std::fprintf(stderr, "[native-storage] AddDrv %s init -> %d, AddDrv -> %d\n", ram_string(ram32(context)).c_str(), result, value);
        return value;
    case kDeleted:
        set_ram32(busy_word(), 0);
        value = result < 0 ? -1 : 0;
        if (!value) remove(context);
        std::fprintf(stderr, "[native-storage] DelDrv %s deinit -> %d, DelDrv -> %d\n", ram_string(ram32(context)).c_str(), result, value);
        return value;
    case kOpened:
        if (result < 0) set_ram32(record(context) + 8, 0);
        else value = static_cast<std::int32_t>(context);
        break;
    case kClosed:
        release(context);
        if (result >= 0) value = static_cast<std::int32_t>(context);
        break;
    case kPathStatus:
        release(context);
        if (result >= 0) value = 0;
        break;
    case kPathValue:
        release(context);
        break;
    case kValue:
        break;
    }
    std::fprintf(stderr, "[native-storage] %s fd %u driver -> %d, ioman -> %d\n", kNames[op], context, result, value);
    return value;
}

void resume(Cpu &c) {
    const std::uint32_t sp = c.r[29];
    if (ram32(sp + 44) != (sp ^ kMagic)) {
        std::fprintf(stderr, "[native-storage] driver returned with an unexpected stack 0x%08X\n", sp);
        kernel::fault("native storage frame");
        return;
    }
    set_ram32(sp + 44, 0);
    set_ram32(pending_word(), ram32(pending_word()) - 1);
    const auto op = static_cast<Operation>(ram32(sp + 28));
    const std::uint32_t ra = ram32(sp + 32), context = ram32(sp + 40);
    const auto finish = static_cast<Finish>(ram32(sp + 36));
    c.r[29] = sp + kFrame;
    c.r[31] = ra;
    c.pc = ra;
    c.npc = ra + 4;
    c.r[2] = static_cast<std::uint32_t>(complete(op, finish, context, static_cast<std::int32_t>(c.r[2])));
}

bool fail(Cpu &c, std::int32_t error) {
    c.r[2] = static_cast<std::uint32_t>(error);
    return true;
}

void add_driver(Cpu &c) {
    const std::uint32_t device = arg(c, 0);
    const std::string name = ram_string(ram32(device));
    std::uint32_t count = 0;
    while (count < kDevices && ram32(g_devices + count * 4u)) ++count;
    if (ram32(busy_word()) || lookup(name) || count == kDevices) {
        std::fprintf(stderr, "[native-storage] AddDrv %s refused (busy %u, registered %u)\n", name.c_str(), ram32(busy_word()), count);
        fail(c, -1);
        return;
    }
    if (!thread_context(c, "AddDrv")) return;
    std::fprintf(stderr, "[native-storage] AddDrv %s type 0x%08X \"%s\"\n", name.c_str(), ram32(device + 4), ram_string(ram32(device + 12)).c_str());
    set_ram32(busy_word(), 1);
    call(c, device, kInit, kAdded, device, {device});
}

void delete_driver(Cpu &c) {
    const std::string name = ram_string(arg(c, 0));
    const std::uint32_t device = ram32(busy_word()) ? 0 : lookup(name);
    if (!device) {
        std::fprintf(stderr, "[native-storage] DelDrv %s -> -1\n", name.c_str());
        fail(c, -1);
        return;
    }
    if (!thread_context(c, "DelDrv")) return;
    set_ram32(busy_word(), 1);
    call(c, device, kDeinit, kDeleted, device, {device});
}

// Descriptor operations; false leaves the descriptor to the runtime's disc and terminal files.
bool descriptor(std::uint32_t index, Cpu &c) {
    const std::uint32_t fd = arg(c, 0);
    if (!open_fd(fd)) return false;
    if (!thread_context(c, "ioman descriptor call")) return true;
    const std::uint32_t f = record(fd), mode = ram32(f), device = ram32(f + 8);
    switch (index) {
    case 5:
    case 14:
        call(c, device, mode & kDirectory ? kDclose : kClose, kClosed, fd, {f});
        break;
    case 6:
        if (!(mode & kReadable)) return fail(c, kBadFd);
        call(c, device, kRead, kValue, fd, {f, arg(c, 1), arg(c, 2)});
        break;
    case 7:
        if (!(mode & kWritable)) return fail(c, kBadFd);
        call(c, device, kWrite, kValue, fd, {f, arg(c, 1), arg(c, 2)});
        break;
    case 8: {
        const auto whence = static_cast<std::int32_t>(arg(c, 2));
        if (whence < 0 || whence > 2) {
            std::fprintf(stderr, "[native-storage] invalid lseek arg %d\n", whence);
            return fail(c, kInvalid);
        }
        call(c, device, kLseek, kValue, fd, {f, arg(c, 1), arg(c, 2)});
        break;
    }
    case 9:
        call(c, device, kIoctl, kValue, fd, {f, arg(c, 1), arg(c, 2)});
        break;
    case 15:
        if (!(mode & kDirectory)) return fail(c, kBadFd);
        call(c, device, kDread, kValue, fd, {f, arg(c, 1)});
        break;
    }
    return true;
}

// Pathname operations; false leaves names without a guest driver to the runtime's existing devices.
bool pathname(std::uint32_t index, Cpu &c) {
    const auto target = resolve(arg(c, 0));
    if (!target) return false;
    std::fprintf(stderr, "[native-storage] ioman #%u %s\n", index, ram_string(arg(c, 0)).c_str());
    if (!thread_context(c, "ioman pathname call")) return true;
    const std::int32_t claimed = claim(*target);
    if (claimed < 0) return fail(c, claimed);
    const auto fd = static_cast<std::uint32_t>(claimed);
    const std::uint32_t f = record(fd), device = target->device, name = target->name;
    const bool extended = (ram32(device + 4) & 0xF0000000u) == kExtended;
    if ((index == 25 || index == 27 || index == 31) && !extended) {
        release(fd);
        return fail(c, kNotExtended);
    }
    switch (index) {
    case 4:
        set_ram32(f, arg(c, 1));
        call(c, device, kOpen, kOpened, fd, {f, name, arg(c, 1), arg(c, 2)});
        break;
    case 13:
        set_ram32(f, kDirectory);
        call(c, device, kDopen, kOpened, fd, {f, name});
        break;
    case 10:
        call(c, device, kRemove, kPathStatus, fd, {f, name});
        break;
    case 11:
        call(c, device, kMkdir, kPathStatus, fd, {f, name, arg(c, 1)});
        break;
    case 12:
        call(c, device, kRmdir, kPathStatus, fd, {f, name});
        break;
    case 16:
        call(c, device, kGetstat, kPathStatus, fd, {f, name, arg(c, 1)});
        break;
    case 17:
        call(c, device, kChstat, kPathStatus, fd, {f, name, arg(c, 1), arg(c, 2)});
        break;
    case 25: {
        std::uint32_t renamed = arg(c, 1);
        bool colon = false;
        for (std::uint32_t at = renamed; *ram_ptr(at) && !colon; ++at) colon = *ram_ptr(at) == ':';
        if (colon) {
            const auto other = resolve(renamed);
            if (!other || other->device != device || other->unit != target->unit) {
                release(fd);
                return fail(c, kCrossDevice);
            }
            renamed = other->name;
        }
        call(c, device, kRename, kPathStatus, fd, {f, name, renamed});
        break;
    }
    case 27:
        call(c, device, kSync, kPathStatus, fd, {f, name, arg(c, 1)});
        break;
    case 31:
        call(c, device, kDevctl, kPathValue, fd, {f, name, arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), arg(c, 5)});
        break;
    }
    return true;
}

bool dispatch(std::uint32_t index, Cpu &c) {
    if (!g_continue) return false;
    switch (index) {
    case 20: add_driver(c); return true;
    case 21: delete_driver(c); return true;
    case 5: case 6: case 7: case 8: case 9: case 14: case 15: return descriptor(index, c);
    case 4: case 10: case 11: case 12: case 13: case 16: case 17: case 25: case 27: case 31: return pathname(index, c);
    default: return false;
    }
}

}

void reset() {
    g_files = kernel::kernel_alloc(kFiles * 16u);
    g_devices = kernel::kernel_alloc(kDevices * 4u + 8u);
    g_continue = kernel::hle_stub(resume);
}

bool reserved(int fd) { return g_files && fd >= 0 && open_fd(static_cast<std::uint32_t>(fd)); }

std::function<void(Cpu &)> wrap(std::uint32_t index, std::function<void(Cpu &)> host) {
    return [index, host = std::move(host)](Cpu &c) {
        if (!dispatch(index, c)) host(c);
    };
}

}

// A driver such as MCMAN may still cache card data while a descriptor is open for writing or an
// operation is unfinished, so the image is only offered once neither is the case.
extern "C" int ps2exec_checkpoint_card() {
    using namespace ps2::iop;
    using namespace ps2::iop::native_storage;
    std::uint32_t writers = 0, readers = 0;
    for (std::uint32_t fd = 0; g_files && fd < kFiles; ++fd) {
        if (!open_fd(fd)) continue;
        if (ram32(record(fd)) & kWritable) ++writers;
        else ++readers;
    }
    const std::uint32_t pending = g_devices ? ram32(pending_word()) + ram32(busy_word()) : 0;
    std::fprintf(stderr, "[native-storage] checkpoint: %u writable and %u other driver descriptors open, %u driver calls pending\n", writers, readers, pending);
    if (writers || pending) return -1;
    return sio2::checkpoint_cards();
}
