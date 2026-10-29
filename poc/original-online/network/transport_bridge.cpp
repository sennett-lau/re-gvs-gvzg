#include "transport_bridge.h"
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
// The emulator executes on a pthread. Only bounded submit/poll runs on main;
// network I/O remains asynchronous and never calls guest code from a Promise.
static uint32_t oo_open(const char* host, uint32_t length, uint32_t port, uint32_t timeout) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.open($0,$1,$2,$3) : 0; }, host,length,port,timeout);
}
static uint32_t oo_write(uint32_t handle,const uint8_t* data,uint32_t length) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.write($0,$1,$2) : 0; }, handle,data,length);
}
static uint32_t oo_read(uint32_t handle,uint32_t length,uint32_t timeout) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.read($0,$1,$2) : 0; }, handle,length,timeout);
}
static uint32_t oo_close(uint32_t handle) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.close($0) : 0; }, handle);
}
static uint32_t oo_shutdown(uint32_t handle) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.shutdown($0) : 0; },handle);
}
static uint32_t oo_dns(const uint8_t* data,uint32_t length) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.dns($0,$1) : 0; },data,length);
}
static int oo_discard(uint32_t ticket) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.discard($0) : 0; },ticket);
}
static uint32_t oo_available(uint32_t handle) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.available($0) : 0; },handle);
}
static uint32_t oo_stream_state(uint32_t handle) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.streamState($0) : (12<<8); },handle);
}
static uint32_t oo_error() {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.lastError : 12; });
}
static int oo_cancel(uint32_t ticket) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.cancel($0) : 0; }, ticket);
}
static int oo_poll(uint32_t ticket,void* result,uint8_t* data,uint32_t capacity) {
    return MAIN_THREAD_EM_ASM_INT({ return Module.originalOnlineBridge ? Module.originalOnlineBridge.poll($0,$1,$2,$3) : -2; }, ticket,result,data,capacity);
}
static void oo_reset() { MAIN_THREAD_EM_ASM({ if(Module.originalOnlineBridge) Module.originalOnlineBridge.reset(); }); }
#else
// A native build has no browser transport; never turn absence into success.
static uint32_t oo_open(const char*,uint32_t,uint32_t,uint32_t){return 0;}
static uint32_t oo_write(uint32_t,const uint8_t*,uint32_t){return 0;}
static uint32_t oo_read(uint32_t,uint32_t,uint32_t){return 0;}
static uint32_t oo_close(uint32_t){return 0;}
static uint32_t oo_shutdown(uint32_t){return 0;}
static uint32_t oo_dns(const uint8_t*,uint32_t){return 0;}
static int oo_discard(uint32_t){return 0;}
static uint32_t oo_available(uint32_t){return 0;}
static uint32_t oo_stream_state(uint32_t){return 12<<8;}
static uint32_t oo_error(){return 12;}
static int oo_cancel(uint32_t){return 0;}
static int oo_poll(uint32_t,void*,uint8_t*,uint32_t){return -2;}
static void oo_reset(){}
#endif
namespace original_online {
uint32_t open(const char* h,uint32_t n,uint32_t p,uint32_t t){return oo_open(h,n,p,t);}
uint32_t write(uint32_t h,const uint8_t* b,uint32_t n){return oo_write(h,b,n);}
uint32_t read(uint32_t h,uint32_t n,uint32_t t){return oo_read(h,n,t);}
uint32_t close(uint32_t h){return oo_close(h);}
uint32_t shutdown(uint32_t h){return oo_shutdown(h);}
uint32_t dns(const uint8_t* b,uint32_t n){return oo_dns(b,n);}
uint32_t last_error(){return oo_error();}
int cancel(uint32_t t){return oo_cancel(t);}
int discard(uint32_t t){return oo_discard(t);}
uint32_t available(uint32_t h){return oo_available(h);}
uint32_t stream_state(uint32_t h){return oo_stream_state(h);}
int poll(uint32_t t,Result* r,uint8_t* d,uint32_t n){return oo_poll(t,r,d,n);}
void reset(){oo_reset();}
}
