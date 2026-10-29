#include "transport_bridge.h"
#include <emscripten/threading.h>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unistd.h>

static original_online::Result wait(unsigned ticket, unsigned char* data=nullptr,unsigned capacity=0) {
    assert(ticket);original_online::Result result{};
    for(int i=0;i<10000;++i){
        const int status=original_online::poll(ticket,&result,data,capacity);
        assert(status>=0);if(status==1)return result;usleep(1000);
    }
    assert(false && "real threaded bridge completion timeout");return result;
}
int main(int argc,char** argv) {
    assert(argc==2);assert(!emscripten_is_main_runtime_thread());
    const char host[]="127.0.0.1";
    const auto opened=wait(original_online::open(host,std::strlen(host),std::atoi(argv[1]),5000));
    assert(opened.ok && opened.handle);
    unsigned char bytes[2048]{};
    const auto received=wait(original_online::read(opened.handle,12,5000),bytes,sizeof(bytes));
    assert(received.ok && received.bytes==12 && bytes[0]==0x18 && bytes[2]==0x61 && bytes[3]==0x01);
    assert(wait(original_online::close(opened.handle)).ok);
    // Original wire DNS data, carried unchanged over the real private UDP service.
    const unsigned char query[]={0x45,0x67,1,0,0,1,0,0,0,0,0,0,6,'c','a','1','2','0','2',5,'m','m','c','p','6',0,0,1,0,1};
    const auto dns=wait(original_online::dns(query,sizeof(query)),bytes,sizeof(bytes));
    assert(dns.ok && dns.bytes>sizeof(query) && bytes[0]==0x45 && bytes[1]==0x67 && (bytes[2]&128));
    original_online::reset();
    std::puts("THREADED_BRIDGE_OK: pthread -> main Module -> private TCP greeting and UDP DNS -> pthread buffers");
}
