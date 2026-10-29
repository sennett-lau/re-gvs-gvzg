// Experimental, fingerprint-gated AVETCP primitive adapter. No mode4 dependency.
#include "native_transport.hpp"
#include "transport_bridge.h"
#include "kernel.hpp"
#include "sha256.hpp"
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <deque>
#include <map>
#include <stdexcept>
#include <set>
#include <vector>

namespace ps2::iop::original_online {
namespace {
namespace host = ::original_online;
std::uint32_t base = 0, generation = 0;
std::set<std::uint32_t> verified_modules;
std::uint64_t next_poll = 0;
struct Completion {
    std::uint32_t entry, callback, result, gp, epoch; int priority;
    std::uint32_t destination=0;std::vector<std::uint8_t> data;bool eof=false;
    std::uint32_t action=0;
};
struct Pending { std::uint32_t ticket=0, destination=0, length=0, callback=0, gp=0,epoch=0; int priority=0; };
struct Socket {
    std::uint32_t slot=0, open=0, host=0, serial=0;
    Pending send, recv;
    std::deque<Completion> done;
    int helper=0;
    std::uint32_t send_epoch=0,recv_epoch=0;
    Pending context;
    std::uint32_t shutdown_ticket=0;
    bool shutdown_started=false,eof_queued=false,drop_queued=false,cleanup_queued=false;
};
std::map<int,Socket> sockets;
struct CompletionGuard { int handle;std::uint32_t serial,entry,epoch;Completion event;bool entered=false; };
std::map<int,CompletionGuard> completion_helpers;
std::vector<int> retired_threads;
std::uint32_t next_serial=1;
std::uint32_t control_stub=0;
std::uint32_t rst_stub=0;
std::uint32_t reset_entry() {
    if(!rst_stub){
        rst_stub=kernel::alloc(128);if(!rst_stub)throw std::runtime_error("Online reset trampoline allocation failed");
        // Construct precisely the frame consumed by original8BB0, then enter
        // original7D00 with an RST indication. Event notifications, -6 callbacks,
        // cleanup and optional retained descriptor are executed by original code.
        const std::uint32_t words[]={0x27bdff78,0xafbf0084,0xafbe0080,0xafb7007c,0xafb60078,0xafb50074,
          0xafb40070,0xafb3006c,0xafb20068,0xafb10064,0xafb00060,0x00808021,0x24130004,
          0x08000000u|(((base+0x7d00)>>2)&0x03ffffffu),0};
        std::memcpy(ram_ptr(rst_stub),words,sizeof(words));
    }
    return rst_stub-base;
}
std::uint32_t control_entry() {
    if(!control_stub){control_stub=kernel::alloc(8);if(!control_stub)throw std::runtime_error("Online control stub allocation failed");set_ram32(control_stub,0x03e00008);set_ram32(control_stub+4,0);}
    return control_stub-base;
}
std::map<std::uint32_t,std::uint32_t> trampolines;
std::uint32_t guarded_trampoline(std::uint32_t entry) {
    auto found=trampolines.find(entry);if(found!=trampolines.end())return found->second;
    const auto address=kernel::alloc(128);if(!address)throw std::runtime_error("Online completion trampoline allocation failed");
    const auto jal=[](std::uint32_t pc){return 0x0c000000u|((pc>>2)&0x03ffffffu);};
    // Preserve all callback arguments and result across the original inner guard.
    // Its WaitSema/SignalSema imports run normally and may reschedule this thread.
    const std::uint32_t words[]={0x27bdffd8,0xafbf0024,0xafa40010,0xafa50014,0xafa60018,0xafa7001c,
      jal(base+0x12490),0,0x8fa40010,0x8fa50014,0x8fa60018,0x8fa7001c,
      jal(base+entry),0,0xafa20020,jal(base+0x124b8),0,0x8fa20020,0x8fbf0024,0x27bd0028,0x03e00008,0};
    std::memcpy(ram_ptr(address),words,sizeof(words));trampolines[entry]=address;return address;
}
struct Dns {
    std::uint32_t ticket=0,workspace=0,serial=0,source_ip=0,gp=0,metadata=0;
    int priority=0,phase=0,helper=0;
    std::vector<std::uint8_t> bytes;
};
std::map<int,Dns> dns_requests;
struct DnsGuard { int id; std::uint32_t serial; };
std::map<int,DnsGuard> dns_helpers;
bool span(std::uint32_t p, std::uint32_t n) { p=phys(p); return p < kRamSize && n <= kRamSize-p; }
std::uint16_t u16(std::uint32_t p) { std::uint16_t n; std::memcpy(&n,ram_ptr(p),2); return n; }
void put16(std::uint32_t p, std::uint16_t n) { std::memcpy(ram_ptr(p),&n,2); }
[[noreturn]] void unsupported(const char* what, std::uint32_t detail=0) {
    std::fprintf(stderr,"[original-online-network] unsupported %s detail=%u base=%08x guest_cycles=%llu\n",what,detail,base,(unsigned long long)kernel::now());
    throw std::runtime_error(std::string("original Online transport boundary: ")+what);
}
void trace(const char* event, int handle, std::uint32_t value=0) {
    std::fprintf(stderr,"[original-online-network] %s handle=%d value=%u generation=%u guest_cycles=%llu\n",event,handle,value,generation,(unsigned long long)kernel::now());
}
bool ret(Cpu& c,int value) { c.r[2]=static_cast<std::uint32_t>(value); c.pc=c.r[31];c.npc=c.pc+4;c.r[0]=0;return true; }
int slot_handle(std::uint32_t p) {
    if(!base || !span(base+0x16180,4))return -1;
    const auto start=ram32(base+0x16180); const auto limit=*ram_ptr(base+0x1619b);
    if(p<start || (p-start)%380)return -1;
    const auto h=(p-start)/380;
    return h<limit && span(p,380) ? static_cast<int>(h) : -1;
}
void forget(int h,bool release=true) {
    auto it=sockets.find(h); if(it==sockets.end())return;
    auto& s=it->second;
    for(auto ticket:{s.open,s.send.ticket,s.recv.ticket,s.shutdown_ticket})if(ticket)host::discard(ticket);
    if(s.host){const auto ticket=host::close(s.host);if(ticket)host::discard(ticket);}
    const auto slot=s.slot;const auto context=s.context;
    trace(release?"descriptor-release":"connection-cleanup-retains-descriptor",h);sockets.erase(it);
    if(!release){Socket retained;retained.slot=slot;retained.context=context;retained.serial=next_serial++;sockets.emplace(h,std::move(retained));}
}
void forget_dns(int id) {
    auto it=dns_requests.find(id);if(it==dns_requests.end())return;
    if(it->second.ticket)host::discard(it->second.ticket);
    if(it->second.metadata && !it->second.helper)kernel::free(it->second.metadata);
    // A queued helper owns its metadata until on_exit. Its entry guard rejects
    // callbacks after release/retry, before original guest code can touch RAM.
    dns_requests.erase(it);
}
Pending pending(const Cpu& c,std::uint32_t callback) {
    auto* t=kernel::current();if(!t || kernel::in_interrupt())unsupported("primitive outside schedulable thread");
    Pending p;p.callback=callback;p.gp=c.r[28];p.priority=t->priority;return p;
}
void completed(Socket& s, Pending& p, bool receive, int result,std::vector<std::uint8_t> data={},bool eof=false) {
    Completion event{receive?0x10bc0u:0x105ecu,p.callback,static_cast<std::uint32_t>(result),p.gp,p.epoch,p.priority,p.destination,std::move(data),eof};
    s.done.push_back(std::move(event));
    p={};
}
void control(Socket& s,std::uint32_t action,std::uint32_t reason=0) {
    Completion event{action==3?0xc428u:action==4?reset_entry():action==5?0xad44u:control_entry(),reason,0,s.context.gp,0,s.context.priority,0,{},false,action};
    s.done.push_back(std::move(event));
}
void peer_fin(Socket& s) {
    const auto state=static_cast<std::int16_t>(u16(s.slot+314));
    if(state==3 || state==4)put16(s.slot+314,5);
    else if(state==6)put16(s.slot+314,7);
    else if(state==9)put16(s.slot+314,10);
}
int native_error(const host::Result& result) {
    // Only mappings established by original c428/RST and SYN_SENT refusal paths.
    if(result.host_error==2 || result.host_error==3)return -6;
    unsupported("unmapped host error",result.host_error);
}
}

void reset() {
    host::reset();base=0;++generation;next_poll=0;sockets.clear();retired_threads.clear();dns_requests.clear();dns_helpers.clear();completion_helpers.clear();trampolines.clear();verified_modules.clear();control_stub=0;rst_stub=0;
}

bool verify_module(const std::vector<std::uint8_t>& data,const std::string& path) {
    std::string name=path;for(auto& ch:name)ch=std::tolower(static_cast<unsigned char>(ch));
    bool match=name.find("avetcp")!=std::string::npos;
    // Match the export name too: an archive member may have a generic path.
    for(std::size_t i=0;!match && i+20<=data.size();++i)
        match=data[i]==0 && data[i+1]==0 && data[i+2]==0xc0 && data[i+3]==0x41 && std::memcmp(data.data()+i+12,"avetcp\0",7)==0;
    if(!match)return false;
    const auto hash=::original_online::sha256(data.data(),data.size());
    if(hash!="aa6c1f4f0f765b6f85e7dce91ddb9bb092f1a053e43b2bae78d88e1b024bbdb1")unsupported("whole AVETCP IRX fingerprint mismatch");
    return true;
}
void authorize_module(std::uint32_t address,bool verified){if(verified)verified_modules.insert(address);}

void library(const std::string& name,std::uint32_t table) {
    if(name!="avetcp")return;
    if(!span(table,40))unsupported("AVETCP export table outside RAM");
    const auto entry=ram32(table+36);
    if(entry<0x8d4 || !span(entry-0x8d4,0x18860))unsupported("AVETCP module outside RAM");
    const auto candidate=entry-0x8d4;
    if(!verified_modules.count(candidate))unsupported("AVETCP library has no verified original input");
    // These words have no relocation fields. Full source IRX fingerprints are
    // additionally enforced on the raw input in load_module_buffer before relocation.
    const std::uint32_t signatures[][2]={
      {0x8dc,0x27bdffd0},{0xce88,0x27bdffe0},{0xcee4,0xa602013a},
      {0xb3d4,0x27bdff90},{0xbf5c,0x94440138},{0xc038,0x00409021},
      {0xd9c8,0x27bdffd8},{0xdcd8,0x27bdffd8},{0xad44,0x27bdffe8},
      {0x105ec,0x27bdffe8},{0x10bc0,0x27bdffe8},{0x5c4,0x27a50010},
      {0xdecc,0x27bdffd0},{0xd39c,0x27bdffe8},{0x13ac,0x24020003},
      {0x139bc,0x00042080},{0x137cc,0x27bdffe0},{0x1379c,0x00042080},
      {0x7d00,0x32620004},{0x7d98,0xa600013a},{0x8bb4,0x8fbf0084},{0x8be0,0x27bd0088}};
    for(const auto& pair:signatures)if(ram32(candidate+pair[0])!=pair[1])unsupported("original instruction signature mismatch",pair[0]);
    if(base && base!=candidate)unsupported("AVETCP replaced without reset");
    base=candidate;trace("avetcp-registered",-1,base);
}

bool intercept(Cpu& c) {
    // Runtime stubs may be allocated below the relocated module. Admit only
    // their exact owned PCs; the helper thread/serial/epoch guards still apply.
    const bool owned_stub=(control_stub && c.pc==control_stub) || (rst_stub && c.pc==rst_stub);
    if(!base || (c.pc<base && !owned_stub))return false;
    const auto offset=c.pc-base;
    if(offset==0x105ec || offset==0x10bc0 || offset==0xc428 || offset==0xad44 || c.pc==control_stub || c.pc==rst_stub){
        if(auto* thread=kernel::current()){
            auto guard=completion_helpers.find(thread->id);
            if(guard!=completion_helpers.end() && guard->second.entry==offset){
                auto& g=guard->second;if(g.entered)return false;auto found=sockets.find(g.handle);
                if(found==sockets.end() || found->second.serial!=g.serial)return ret(c,0);
                const auto epoch=offset==0x105ec?found->second.send_epoch:found->second.recv_epoch;
                if(!g.event.action && epoch!=g.epoch){trace("stale-completion-suppressed",g.handle);return ret(c,0);}
                if(!g.event.data.empty()){
                    if(!span(g.event.destination,g.event.data.size()))unsupported("guarded receive destination");
                    std::memcpy(ram_ptr(g.event.destination),g.event.data.data(),g.event.data.size());
                }
                if(g.event.eof || g.event.action==2)peer_fin(found->second);
                if(g.event.action==1)put16(found->second.slot+314,4);
                if(g.event.action==4){
                    const auto state=u16(found->second.slot+314);
                    if(state<3 || state>10)unsupported("RST block requires established/closing state",state);
                }
                g.entered=true;
            }
        }
        if(offset!=0xad44)return false;
    }
    if(offset==0x1379c){forget_dns(static_cast<int>(c.r[4]));return false;}
    if(offset==0x137cc){
        auto* thread=kernel::current();
        if(thread){
            auto guard=dns_helpers.find(thread->id);
            if(guard!=dns_helpers.end()){
                auto request=dns_requests.find(guard->second.id);
                if(request==dns_requests.end() || request->second.serial!=guard->second.serial)return ret(c,1);
                if(!span(request->second.workspace,0xc24) || ram32(base+0x16fa0+guard->second.id*4)!=request->second.workspace)return ret(c,1);
                if(c.r[4]!=0){
                    const auto destination=ram32(request->second.metadata+20);
                    if(destination!=request->second.workspace+14 || !span(destination,request->second.bytes.size()) || ram32(request->second.workspace+4)!=1)return ret(c,1);
                    std::memcpy(ram_ptr(destination),request->second.bytes.data(),request->second.bytes.size());
                }
            }
        }
        return false;
    }
    if(offset==0x139bc){
        const int id=static_cast<int>(c.r[4]);
        if(u16(base+0x16fa4)!=1 || id!=0)unsupported("DNS ticket table variant",id);
        const auto workspace=ram32(base+0x16fa0);
        if(!workspace)return ret(c,0); // Original helper also rejects no workspace.
        if(!span(workspace,0xc24) || !span(c.r[29]+16,4))unsupported("DNS workspace span");
        const auto length=ram32(c.r[29]+16);
        if((c.r[6]&65535)!=0x3500 || length<12 || length>2048 || !span(c.r[7],length))unsupported("DNS request boundary",length);
        auto p=pending(c,0);forget_dns(id);
        Dns d;d.workspace=workspace;d.serial=next_serial++;d.source_ip=c.r[5];d.gp=p.gp;d.priority=p.priority;
        d.ticket=host::dns(ram_ptr(c.r[7]),length);
        if(!d.ticket)unsupported("DNS submission",host::last_error());
        dns_requests.emplace(id,std::move(d));trace("dns-datagram-queued",id,length);
        // Acceptance of the bounded outgoing datagram queue, not a DNS answer.
        // Original workspace, retries, deadlines and parser remain untouched.
        return ret(c,1);
    }
    // API trace is observational: original dispatch, guards and session logic run.
    if(offset==0x8d4){trace("api",static_cast<int>(c.r[4]),c.r[5]);return false;}
    if(offset==0xb3d4){
        const int h=slot_handle(c.r[4]);if(h<0)return false;
        auto it=sockets.find(h);
        if(it!=sockets.end() && c.r[31]==base+0xcf5c && !it->second.host && !it->second.open){sockets.erase(it);it=sockets.end();}
        if(it==sockets.end()){
            if(c.r[31]!=base+0xcf5c)return false;
            const auto slot=c.r[4];if(u16(slot+314)!=2 || u16(slot+312)!=1)unsupported("active open slot ownership");
            Socket s;s.slot=slot;s.serial=next_serial++;s.context=pending(c,0);
            const auto* ip=ram_ptr(slot+344);char address[16];
            std::snprintf(address,sizeof(address),"%u.%u.%u.%u",ip[0],ip[1],ip[2],ip[3]);
            const auto* port=ram_ptr(slot+326);
            // Zero host timeout: the original state2 guest timer remains active.
            s.open=host::open(address,std::strlen(address),(port[0]<<8)|port[1],0);
            if(!s.open)unsupported("host open submission",host::last_error());
            sockets.emplace(h,std::move(s));trace("active-open-submitted",h);return ret(c,0);
        }
        const auto state=static_cast<std::int16_t>(u16(it->second.slot+314));
        if(state==6 || state==8){
            auto& s=it->second;
            if(!s.shutdown_started){
                if(!s.host)unsupported("FIN before host handshake");
                s.shutdown_ticket=host::shutdown(s.host);
                if(!s.shutdown_ticket)unsupported("host write-half close submission",host::last_error());
                s.shutdown_started=true;trace("write-half-close-submitted",h);
            }
        }else if(state!=0 && state!=2 && state!=4 && state!=5 && state!=7 && state!=9 && state!=10)unsupported("owned TCP packet state",state);
        return ret(c,0); // Suppress packet emission only for this owned socket.
    }
    if(offset==0xbf5c){
        const int h=slot_handle(c.r[2]);auto it=sockets.find(h);
        if(it!=sockets.end() && (u16(it->second.slot+314)==4 || u16(it->second.slot+314)==5)){
            // Skip the per-socket packet timer body; other sockets and the global
            // clock still run. SYN state2 retains original timeout c088/c428.
            c.r[2]=c.r[18]+1;c.pc=base+0xc038;c.npc=c.pc+4;return true;
        }
        return false;
    }
    if(offset==0xa7cc){
        const int h=slot_handle(c.r[4]);auto it=sockets.find(h);
        // The original receive length is signed16. Advertise only bytes that a
        // single native receive can represent, avoiding status halfword wrap.
        if(it!=sockets.end())return ret(c,it->second.host ? static_cast<int>(std::min<std::uint32_t>(host::available(it->second.host),32767)) : 0);
        return false;
    }
    if(offset==0xad44){const int h=slot_handle(c.r[4]);if(h>=0)forget(h,(*ram_ptr(c.r[4]+319)&128)!=0);return false;}
    const int h=static_cast<std::int16_t>(c.r[4]);auto it=sockets.find(h);
    if(it==sockets.end())return false;
    auto& s=it->second;
    if(offset==0xdecc){
        const auto mask=c.r[5]&0xffff;if(mask&~7u)return false;
        if(mask&1){if(s.send.ticket)host::discard(s.send.ticket);s.send={};++s.send_epoch;}
        if(mask&2){if(s.recv.ticket)host::discard(s.recv.ticket);s.recv={};++s.recv_epoch;}
        for(auto event=s.done.begin();event!=s.done.end();){
            if((event->entry==0x105ec && (mask&1)) || (event->entry==0x10bc0 && (mask&2)))event=s.done.erase(event);
            else ++event;
        }
        // Original cancellation helper performs the verified -14 completions.
        return false;
    }
    if(offset==0xd9c8){
        if(c.r[31]!=base+0x104b0 || (c.r[7]&255))unsupported("send variant/flags",c.r[7]);
        if(s.send.ticket || !s.done.empty() || s.helper)unsupported("overlapping send completion");
        auto p=pending(c,c.r[6]);const auto v=c.r[5];
        if(!span(v,8))unsupported("send descriptor span");
        const auto count=ram32(v),total=ram32(v+4);
        if(count>4 || total>32767)unsupported("send vector size",total);
        std::vector<std::uint8_t> data;
        for(std::uint32_t i=0;i<count;++i){
            const auto item=v+8+12*i;
            if(!span(item,12) || *ram_ptr(item+8)!=3)unsupported("send descriptor type");
            const auto n=u16(item); const auto ptr=ram32(item+4);
            if(n>32767 || !span(ptr,n))unsupported("send data span");
            data.insert(data.end(),ram_ptr(ptr),ram_ptr(ptr)+n);
        }
        if(data.size()!=total || !total)unsupported("send vector total",total);
        if(!s.host)unsupported("send before host handshake");
        p.length=total;p.epoch=++s.send_epoch;p.ticket=host::write(s.host,data.data(),total);
        if(!p.ticket)unsupported("host send submission",host::last_error());
        set_ram32(s.slot+208,p.callback);s.send=p;trace("send-submitted",h,total);return ret(c,0);
    }
    if(offset==0xdcd8){
        if(c.r[31]!=base+0x10a44)unsupported("receive variant");
        if(s.recv.ticket)unsupported("overlapping receive");
        auto p=pending(c,c.r[7]);const auto desc=c.r[5];const int n=static_cast<std::int16_t>(c.r[6]);
        if(n<=0 || !span(desc,8) || *ram_ptr(desc+4)!=3)unsupported("receive descriptor");
        p.destination=ram32(desc);p.length=n;
        if(!span(p.destination,p.length))unsupported("receive output span");
        if(!s.host)unsupported("receive before host handshake");
        p.epoch=++s.recv_epoch;p.ticket=host::read(s.host,p.length,0);if(!p.ticket)unsupported("host receive submission",host::last_error());
        set_ram32(s.slot+212,p.callback);s.recv=p;trace("receive-submitted",h,n);return ret(c,0);
    }
    return false;
}

void pump() {
    if(!base || kernel::in_interrupt() || kernel::now()<next_poll)return;
    next_poll=kernel::now()+kernel::usec_to_cycles(1000);
    for(auto it=retired_threads.begin();it!=retired_threads.end();){
        if(kernel::delete_thread(*it))it=retired_threads.erase(it);else ++it;
    }
    for(auto& [id,d]:dns_requests){
        if(d.ticket){
            host::Result result{};std::vector<std::uint8_t> data(2048);
            const int status=host::poll(d.ticket,&result,data.data(),data.size());
            if(status==-4)unsupported("oversized DNS response");
            if(status==1){
                d.ticket=0;
                if(!result.ok){trace("dns-host-failure-original-retry-pending",id,result.host_error);continue;}
                data.resize(result.bytes);d.bytes=std::move(data);d.phase=1;
                d.metadata=kernel::alloc(32);if(!d.metadata)unsupported("DNS metadata allocation");
                std::memset(ram_ptr(d.metadata),0,32);
                put16(d.metadata,u16(d.workspace+2));put16(d.metadata+8,d.bytes.size());
                set_ram32(d.metadata+12,d.source_ip);put16(d.metadata+16,0x3500);
            }
        }
        if(d.helper || (d.phase!=1 && d.phase!=2))continue;
        const int tid=kernel::create_thread(guarded_trampoline(0x137cc),0x4000,d.priority,d.gp,0x02000000,0);
        auto* t=kernel::thread(tid);if(!t || !t->stack)unsupported("DNS callback thread allocation");
        const auto gen=generation,serial=d.serial,metadata=d.metadata;const int phase=d.phase;d.helper=tid;
        dns_helpers[tid]={id,serial};
        t->on_exit=[gen,serial,id,tid,metadata,phase]{
            if(gen!=generation)return;
            dns_helpers.erase(tid);retired_threads.push_back(tid);
            auto it=dns_requests.find(id);
            if(it==dns_requests.end() || it->second.serial!=serial){kernel::free(metadata);return;}
            auto& request=it->second;request.helper=0;
            if(phase==1 && g_cpu.r[2]==0){
                request.phase=2;
            }else{kernel::free(metadata);dns_requests.erase(it);}
        };
        kernel::start_thread(tid,d.phase==1?0:1,d.metadata);
        trace("original-dns-callback-scheduled",id,d.phase);
    }
    for(auto& [h,s]:sockets){
        host::Result r{};std::vector<std::uint8_t> bytes(32767);
        if(s.open && host::poll(s.open,&r,nullptr,0)==1){
            s.open=0;
            if(!r.ok){
                if(r.host_error!=2)unsupported("unmapped host connect failure",r.host_error);
                control(s,3,1);s.drop_queued=true;trace("original-connect-drop-queued",h,r.host_error);
            }else{s.host=r.handle;control(s,1);trace("host-handshake-complete",h);}
        }
        if(s.host){
            const auto state=host::stream_state(s.host);
            if((state&1) && !s.eof_queued){control(s,2);s.eof_queued=true;}
            const auto error=state>>8;
            if(error && !s.drop_queued){
                if(error!=2 && error!=3)unsupported("unmapped stream failure",error);
                control(s,error==3?4:3,1);s.drop_queued=true;
            }
        }
        if(s.shutdown_ticket && host::poll(s.shutdown_ticket,&r,nullptr,0)==1){
            s.shutdown_ticket=0;if(!r.ok)unsupported("host write-half close failed",r.host_error);
            trace("host-write-half-close-accepted",h);
            // Do not invent a TCP ACK: original FIN states and close timers stay.
        }
        if(s.host && s.shutdown_started && !s.shutdown_ticket && s.eof_queued && !s.cleanup_queued && !s.drop_queued && !s.send.ticket && !s.recv.ticket && s.done.empty() && !s.helper && (*ram_ptr(s.slot+319)&128)){
            // The application requested full close and both host halves ended.
            // Native descriptor cleanup is safe; TCP TIME_WAIT belongs to the OS.
            // This is a socket lifecycle projection, not an invented packet ACK.
            control(s,5);s.cleanup_queued=true;
        }
        if(s.send.ticket && host::poll(s.send.ticket,&r,nullptr,0)==1){
            const int result=r.ok?static_cast<int>(r.bytes):native_error(r);
            if(r.ok && r.bytes!=s.send.length)unsupported("partial acknowledged send",r.bytes);
            completed(s,s.send,false,result);trace("send-complete",h,result);
        }
        if(s.recv.ticket && host::poll(s.recv.ticket,&r,bytes.data(),bytes.size())==1){
            if(r.ok){
                if(r.bytes>s.recv.length || !span(s.recv.destination,r.bytes))unsupported("receive completion span");
                bytes.resize(r.bytes);
            }
            const int result=r.ok?static_cast<int>(r.bytes):native_error(r);
            completed(s,s.recv,true,result,r.ok?std::move(bytes):std::vector<std::uint8_t>{},r.eof);trace("receive-complete",h,result);
        }
        if(!s.helper && !s.done.empty()){
            const auto event=s.done.front();s.done.pop_front();
            const int tid=kernel::create_thread(guarded_trampoline(event.entry),0x4000,event.priority,event.gp,0x02000000,0);
            auto* t=kernel::thread(tid);if(!t || !t->stack)unsupported("completion thread allocation");
            const auto gen=generation,serial=s.serial;s.helper=tid;
            completion_helpers[tid]={h,serial,event.entry,event.epoch,event,false};
            t->on_exit=[gen,serial,h,tid]{
                if(gen!=generation)return;
                completion_helpers.erase(tid);
                auto found=sockets.find(h);
                if(found!=sockets.end() && found->second.serial==serial)found->second.helper=0;
                retired_threads.push_back(tid);
            };
            kernel::start_thread(tid,(event.action==3 || event.action==4 || event.action==5)?s.slot:static_cast<std::uint32_t>(h),event.callback);
            t->context.r[6]=event.result;t->context.r[7]=0;
            trace("original-completion-scheduled",h,event.entry);
        }
    }
}
}
