// Instruction harness: original relocated AVETCP helpers, real IOP interpreter,
// deterministic host transport and scheduler substitutes. This is not a game run.
#include "native_transport.hpp"
#include "transport_bridge.h"
#include <chrono>
#include <thread>
#include "kernel.hpp"
#include "sha256.hpp"
#include <cassert>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
using U=std::uint32_t;
namespace test {
constexpr U base=0x10000,slot=0x50000,stack=0x1d0000,exit_pc=0x1ff000;
std::map<int,ps2::iop::kernel::Thread> threads;
int current=1,next_thread=2,wakes=0,guard_depth=0;
bool switched=false;
bool low_stubs=false;
U stub_allocation=0x4000,control_address=0;
U clock=0,allocation=0x120000,next_ticket=1,last_ticket=0,stream_status=0;
struct Request {original_online::Result result{};std::vector<std::uint8_t> data;bool done=false;};
std::map<U,Request> requests;std::vector<std::uint8_t> written;
U submit(){last_ticket=next_ticket++;requests[last_ticket]={};return last_ticket;}
void ready(U ticket,U bytes=0,U handle=0,std::vector<std::uint8_t> data={}){
 auto& p=requests.at(ticket);p.done=true;p.result.ok=1;p.result.bytes=bytes;p.result.handle=handle;p.data=std::move(data);
}
void tick(){clock+=1000;ps2::iop::original_online::pump();}
void put16(U p,std::uint16_t v){std::memcpy(ps2::iop::ram_ptr(p),&v,2);}
U get16(U p){std::uint16_t v;std::memcpy(&v,ps2::iop::ram_ptr(p),2);return v;}
}
namespace original_online {
U open(const char*,U,U,U){return test::submit();}
U write(U,const std::uint8_t* bytes,U n){test::written.assign(bytes,bytes+n);return test::submit();}
U read(U,U,U){return test::submit();}
U close(U){auto t=test::submit();test::ready(t);return t;}
U shutdown(U){return test::submit();}
U dns(const std::uint8_t* bytes,U n){test::written.assign(bytes,bytes+n);return test::submit();}
U last_error(){return 0;}
int cancel(U t){return test::requests.erase(t)!=0;}
int discard(U t){return cancel(t);}
U available(U){return 3;}
U stream_state(U){return test::stream_status;}
void reset(){test::requests.clear();}
int poll(U t,Result* out,std::uint8_t* data,U capacity){
 auto p=test::requests.find(t);if(p==test::requests.end())return -1;if(!p->second.done)return 0;
 if(p->second.data.size()>capacity)return -4;*out=p->second.result;
 if(!p->second.data.empty())std::memcpy(data,p->second.data.data(),p->second.data.size());
 test::requests.erase(p);return 1;
}
}
namespace ps2::iop {
std::uint8_t read8(U p){assert(phys(p)<kRamSize);return *ram_ptr(p);}
std::uint16_t read16(U p){return test::get16(p);}
U read32(U p){return ram32(p);}
void write8(U p,std::uint8_t n){*ram_ptr(p)=n;}
void write16(U p,std::uint16_t n){test::put16(p,n);}
void write32(U p,U n){set_ram32(p,n);}
void call_hle(Cpu& c,U id){
 if(id==1){assert(test::guard_depth==1);++test::wakes;if(test::threads.count(c.r[4]))test::threads.at(c.r[4]).status=kernel::kReady;c.r[2]=0;return;}
 if(id==5){c.r[2]=test::current;return;}
 if(id==6){assert(test::guard_depth==0);auto* t=kernel::current();t->status=kernel::kWait;t->context=c;test::switched=true;return;}
 if(id==3){assert(test::guard_depth==0);++test::guard_depth;c.r[2]=0;return;}
 if(id==4){assert(test::guard_depth==1);--test::guard_depth;c.r[2]=0;return;}
 assert(id==2);auto* t=kernel::current();t->context=c;t->status=kernel::kDormant;
 auto exit=std::move(t->on_exit);if(exit)exit();test::switched=true;
}
namespace kernel {
Thread* current(){return &test::threads.at(test::current);}
Thread* thread(int id){auto it=test::threads.find(id);return it==test::threads.end()?nullptr:&it->second;}
std::uint64_t now(){return test::clock;}
std::uint64_t usec_to_cycles(std::uint64_t n){return n;}
bool in_interrupt(){return false;}
bool switch_pending(){return test::switched;}
U alloc(U n,int,U){
 U p;
 if(test::low_stubs && n<=128){p=test::stub_allocation;test::stub_allocation+=256;assert(test::stub_allocation<test::base);}
 else{p=test::allocation;test::allocation+=(n+255)&~255u;assert(test::allocation<0x1c0000);}
 if(n==8 && !test::control_address)test::control_address=p;
 return p;
}
void free(U){}
int create_thread(U entry,U size,int priority,U gp,U attr,U option){
 Thread t;t.id=test::next_thread++;t.entry=entry;t.stack=alloc(size,0,0);t.stack_size=size;t.priority=priority;t.gp=gp;t.attr=attr;t.option=option;
 test::threads[t.id]=t;return t.id;
}
void start_thread(int id,U a0,U a1){auto* t=thread(id);t->context={};t->context.pc=t->entry;t->context.npc=t->entry+4;t->context.r[4]=a0;t->context.r[5]=a1;t->context.r[28]=t->gp;t->context.r[29]=t->stack+t->stack_size-16;t->context.r[31]=test::exit_pc;t->status=kReady;}
bool delete_thread(int id){if(id==test::current)return false;return test::threads.erase(id)!=0;}
void fault(const char* why){throw std::runtime_error(why);}
U fetch_special(U){throw std::runtime_error("unexpected special instruction");}
void syscall(Cpu&,U){throw std::runtime_error("unexpected syscall");}
void set_status(Cpu& c,U n){c.status=n;}
}
}
using namespace ps2::iop;
namespace native = ps2::iop::original_online;
namespace ps2::iop { void execute(Cpu&,std::int64_t&); }
static Cpu call(U entry,U a0=0,U a1=0,U a2=0,U a3=0,U ra=0x1000){
 Cpu c{};c.pc=test::base+entry;c.npc=c.pc+4;c.r[4]=a0;c.r[5]=a1;c.r[6]=a2;c.r[7]=a3;c.r[28]=0xabc0;c.r[29]=test::stack;c.r[31]=ra;return c;
}
static int helper(){for(auto& [id,t]:test::threads)if(id!=1 && t.status==kernel::kReady)return id;throw std::runtime_error("helper not queued");}
static void run_helper(int tid){
 test::current=tid;test::switched=false;g_cpu=test::threads.at(tid).context;
 std::int64_t budget=10000;execute(g_cpu,budget);assert(test::switched);test::current=1;
}
extern "C" unsigned original_online_idle_events();
int main(int argc,char** argv){
 // Optional flags: --low-stubs, --idle-check (adapter composed with the idle diagnostic).
 bool idle_check=false;
 for(int i=3;i<argc;++i){const std::string flag=argv[i];if(flag=="--low-stubs")test::low_stubs=true;else if(flag=="--idle-check")idle_check=true;else assert(false);}
 assert(argc>=3);
 std::ifstream file(argv[1],std::ios::binary);std::vector<std::uint8_t> image((std::istreambuf_iterator<char>(file)),{});assert(image.size()>0x18860);std::memcpy(ram_ptr(test::base),image.data(),image.size());
 test::threads[1].id=1;test::threads[1].priority=32;
 set_ram32(test::exit_pc,(kHleOpcode<<26)|2);
 // Only an OS import is bound to the harness; helper instructions are original.
 set_ram32(test::base+0x14f4c,(kHleOpcode<<26)|1);
 set_ram32(test::base+0x14f2c,(kHleOpcode<<26)|5);set_ram32(test::base+0x14f44,(kHleOpcode<<26)|6);
 set_ram32(test::base+0x14fa8,(kHleOpcode<<26)|3);set_ram32(test::base+0x14fa0,(kHleOpcode<<26)|4);
 U table=0;for(U p=test::base;p<test::base+image.size()-40;p+=4)if(ram32(p)==0x41c00000 && std::memcmp(ram_ptr(p+12),"avetcp",6)==0){table=p;break;}assert(table);
 std::ifstream raw_file(argv[2],std::ios::binary);std::vector<std::uint8_t> raw((std::istreambuf_iterator<char>(raw_file)),{});
 assert(::original_online::sha256(reinterpret_cast<const std::uint8_t*>(""),0)=="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");
 assert(native::verify_module(raw,"AVETCP.IRX"));
 auto changed=raw;changed.back()^=1;bool rejected=false;try{native::verify_module(changed,"AVETCP.IRX");}catch(const std::runtime_error&){rejected=true;}assert(rejected);
 native::authorize_module(test::base,true);native::library("avetcp",table);
 set_ram32(test::base+0x16180,test::slot);*ram_ptr(test::base+0x1619b)=2;
 test::put16(test::slot+312,1);test::put16(test::slot+314,2);set_ram32(test::slot+344,0x0100007f);test::put16(test::slot+326,0xe047);
 auto c=call(0xb3d4,test::slot,0,0,0,test::base+0xcf5c);assert(native::intercept(c));auto opening=test::last_ticket;assert(test::get16(test::slot+314)==2);
 auto timer=call(0xbf5c);timer.r[2]=test::slot;assert(!native::intercept(timer));
 test::ready(opening,0,91);test::tick();assert(test::get16(test::slot+314)==2);
 assert(test::control_address && (test::control_address<test::base)==test::low_stubs);
 // Neither a nearby PC nor the exact stub in an unrelated thread owns this completion.
 for(U pc:{U(0x100),test::control_address+4,test::control_address}){
  auto stray=call(0);stray.pc=pc;stray.npc=pc+4;
  assert(!native::intercept(stray));assert(test::get16(test::slot+314)==2);
 }
 run_helper(helper());assert(test::get16(test::slot+314)==4);test::tick();
 timer=call(0xbf5c);timer.r[2]=test::slot;timer.r[18]=0;assert(native::intercept(timer));assert(timer.pc==test::base+0xc038 && timer.r[2]==1);
 auto available=call(0xa7cc,test::slot);assert(native::intercept(available)&&available.r[2]==3);
 // Original 4118 creates this stack descriptor and wait record.
 U vector=0x70000,payload=0x71000;set_ram32(vector,1);set_ram32(vector+4,3);test::put16(vector+8,3);set_ram32(vector+12,payload);*ram_ptr(vector+16)=3;std::memcpy(ram_ptr(payload),"abc",3);
 set_ram32(test::base+0x18838,0x123);test::put16(test::base+0x18830,0xffff);
 c=call(0xd9c8,0,vector,0,0,test::base+0x104b0);assert(native::intercept(c));assert(test::written==std::vector<std::uint8_t>({'a','b','c'}));test::ready(test::last_ticket,3);test::tick();run_helper(helper());assert(test::get16(test::base+0x18830)==0 && test::get16(test::base+0x18832)==3 && test::wakes==1);
 test::tick();
 // Completion queued first, original cancellation wins before helper entry.
 c=call(0xd9c8,0,vector,0,0,test::base+0x104b0);assert(native::intercept(c));test::ready(test::last_ticket,3);test::tick();int stale=helper();test::put16(test::base+0x18832,0x5555);
 c=call(0xdecc,0,1,0,0,test::exit_pc);test::guard_depth=1;test::switched=false;g_cpu=c;{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::switched && test::get16(test::base+0x18832)==0xfff2 && test::wakes==2);test::guard_depth=0;
 run_helper(stale);assert(test::get16(test::base+0x18832)==0xfff2 && test::wakes==2);
 test::tick();
 // Original receive completion updates its wait record, with raw EOF=0.
 U desc=0x72000,out=0x73000;set_ram32(desc,out);*ram_ptr(desc+4)=3;set_ram32(test::base+0x17ea8,0x123);test::put16(test::base+0x17ea0,0xffff);
 c=call(0xdcd8,0,desc,3,0,test::base+0x10a44);assert(native::intercept(c));test::ready(test::last_ticket,3,0,{'x','y','z'});test::tick();run_helper(helper());assert(std::memcmp(ram_ptr(out),"xyz",3)==0 && test::get16(test::base+0x17ea2)==3 && test::wakes==3);test::tick();
 // Execute the original blocking4118 body through SleepThread, wakeup and return.
 U envelope=0x74000;std::memset(ram_ptr(envelope),0,44);*ram_ptr(envelope+9)=1;test::put16(envelope+12,3);set_ram32(envelope+16,payload);set_ram32(test::base+0x288b0+4,1);
 test::guard_depth=1;test::switched=false;g_cpu=call(0x102e4,envelope,0,0,0,test::exit_pc);{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::threads[1].status==kernel::kWait && test::guard_depth==0);
 test::ready(test::last_ticket,3);test::tick();run_helper(helper());assert(test::threads[1].status==kernel::kReady);
 test::switched=false;g_cpu=test::threads[1].context;{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::switched && g_cpu.r[2]==3 && ram32(test::base+0x18838)==0xffffffff && test::guard_depth==1);test::guard_depth=0;test::tick();
 // Original blocked caller also resumes after actualDECC writes -14.
 test::guard_depth=1;test::switched=false;g_cpu=call(0x102e4,envelope,0,0,0,test::exit_pc);{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::threads[1].status==kernel::kWait);
 int cancel_thread=kernel::create_thread(test::base+0xdecc,0x4000,32,0xabc0,0,0);kernel::start_thread(cancel_thread,0,1);test::guard_depth=1;run_helper(cancel_thread);test::guard_depth=0;assert(test::threads[1].status==kernel::kReady);
 test::switched=false;g_cpu=test::threads[1].context;{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::switched && static_cast<std::int32_t>(g_cpu.r[2])==-14 && ram32(test::base+0x18838)==0xffffffff);test::guard_depth=0;test::tick();
 // DNS delivery executes original137CC/13670 for both callback phases.
 U workspace=0x80000;set_ram32(test::base+0x16fa0,workspace);test::put16(test::base+0x16fa4,1);test::put16(workspace+2,7);set_ram32(workspace+4,1);set_ram32(workspace+8,0x0100007f);test::put16(workspace+12,0x3500);set_ram32(test::stack+16,12);
 c=call(0x139bc,0,0x0100007f,0x3500,payload);assert(native::intercept(c)&&c.r[2]==1);test::ready(test::last_ticket,12,0,std::vector<std::uint8_t>(12,0x42));test::tick();run_helper(helper());assert(ram32(workspace+4)==1 && *ram_ptr(workspace+14)==0);test::tick();run_helper(helper());assert(ram32(workspace+4)==2 && ram32(workspace+0x810)==12 && *ram_ptr(workspace+14)==0x42 && test::guard_depth==0);
 // OriginalD634 retains receive half and changes established state to6.
 test::put16(test::slot+314,4);*ram_ptr(test::slot+318)=0;*ram_ptr(test::slot+319)=0;
 test::guard_depth=1;test::switched=false;g_cpu=call(0xd634,0,1,0,0,test::exit_pc);{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::switched && g_cpu.r[2]==0 && test::get16(test::slot+314)==6 && (*ram_ptr(test::slot+318)&8) && !(*ram_ptr(test::slot+319)&128));test::guard_depth=0;
 test::ready(test::last_ticket);test::tick();assert(test::get16(test::slot+314)==6);
 available=call(0xa7cc,test::slot);assert(native::intercept(available)&&available.r[2]==3);
 // No fake remoteACK is inserted by accepting the OS write-half close.
 // Execute the original establishedRST block, retaining an allocated descriptor.
 test::put16(test::base+0x16194,1);*ram_ptr(test::slot+322)=19;test::stream_status=3u<<8;
 test::tick();run_helper(helper());assert(test::get16(test::slot+314)==0xffff && test::get16(test::slot+312)==1 && *ram_ptr(test::slot+322)==19);
 assert(test::get16(test::base+0x17ea2)==0xfffa);test::stream_status=0;test::tick();
 // Reconnect the retained descriptor through the verified active-open boundary.
 if(idle_check)test::put16(test::slot+326,0xbb01); // port 443 in network byte order
 test::put16(test::slot+314,2);c=call(0xb3d4,test::slot,0,0,0,test::base+0xcf5c);assert(native::intercept(c));test::ready(test::last_ticket,0,92);test::tick();run_helper(helper());assert(test::get16(test::slot+314)==4);test::tick();
 if(idle_check){
  // A connected HTTPS handle with no upstream send is reported once, after 10 s of host time.
  assert(original_online_idle_events()==0);
  std::this_thread::sleep_for(std::chrono::milliseconds(10200));test::tick();assert(original_online_idle_events()==1);
  test::tick();assert(original_online_idle_events()==1);
 }
 // Full close waits for queued receive completion before releasing descriptor.
 c=call(0xdcd8,0,desc,3,0,test::base+0x10a44);assert(native::intercept(c));auto final_read=test::last_ticket;
 test::guard_depth=1;test::switched=false;g_cpu=call(0xd39c,0,0,0,0,test::exit_pc);{std::int64_t budget=10000;execute(g_cpu,budget);}assert(test::switched && g_cpu.r[2]==0 && test::get16(test::slot+314)==6 && (*ram_ptr(test::slot+319)&128));test::guard_depth=0;
 test::ready(test::last_ticket);test::ready(final_read,3,0,{'e','n','d'});test::stream_status=1;test::tick();run_helper(helper());assert(test::get16(test::slot+312)==1);
 test::tick();run_helper(helper());assert(std::memcmp(ram_ptr(out),"end",3)==0 && test::get16(test::slot+312)==1);
 test::tick();run_helper(helper());assert(test::get16(test::slot+312)==0);test::stream_status=0;
 native::reset();assert(test::requests.empty());
 std::cout<<"NATIVE_CONTRACT_OK: original helpers105ec/10bc0/137cc, real IOP interpreter; synthetic host/scheduler, not game execution; stubs="<<(test::low_stubs?"below-module":"above-module")<<"\n";
}
