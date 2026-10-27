#include "ps2/cpu.hpp"
#include "ps2/memory.hpp"
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <new>
static std::size_t allocation_calls=0,allocation_bytes=0;
static bool count_allocations=false;
void* operator new(std::size_t size){if(count_allocations){++allocation_calls;allocation_bytes+=size;}if(void *p=std::malloc(size))return p;throw std::bad_alloc();}
void operator delete(void*p)noexcept{std::free(p);}
void operator delete(void*p,std::size_t)noexcept{std::free(p);}
namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize];
alignas(16) std::uint8_t g_spr[kScratchpadSize];
bool g_watch_on=false;
std::uint32_t g_watch_base=0,g_watch_end=0;
void watch_hit(std::uint32_t,std::uint32_t,const char*){std::abort();}
std::uint8_t slow_ld8(std::uint32_t){std::abort();}
}
static bool enabled=true;
static std::uint64_t epoch=0;
static float alpha=0;
bool research_interpolation_enabled(){return enabled;}
std::uint64_t research_pose_epoch(){return epoch;}
float research_render_alpha(){return alpha;}
void reference_model_copy(ps2::Cpu&);
void candidate_model_copy(ps2::Cpu&);
void reference_reset_interpolation();
void candidate_reset_interpolation();
int main(){
    constexpr unsigned model=0x8AFDA0,entity=0x839330,descriptor=0x500000,count=27,repetitions=1000;
    ps2::Cpu cpu{};cpu.r[16].w[0]=model;cpu.r[17].w[0]=entity;
    ps2::st32(model+0x65BC,descriptor);ps2::st8(descriptor+7,count);
    float position[4]={10,140,30,1};std::memcpy(ps2::g_ram+model+0x220,position,sizeof position);
    const float matrix[16]={1,0,0,0,0,1,0,0,0,0,1,0,10,140,30,1};
    for(unsigned bone=0;bone<count;++bone)std::memcpy(ps2::g_ram+model+0x300+bone*0x240,matrix,sizeof matrix);
    std::puts("version,case,models,bones_per_model,allocation_calls,allocation_bytes");
    for(unsigned version=0;version<2;++version){
        auto copy=version?candidate_model_copy:reference_model_copy;
        auto reset=version?candidate_reset_interpolation:reference_reset_interpolation;
        for(unsigned scenario=0;scenario<3;++scenario){
            reset();epoch=0;alpha=0;copy(cpu);epoch=1;copy(cpu);epoch=2;copy(cpu);
            allocation_calls=0;allocation_bytes=0;count_allocations=true;
            for(unsigned i=0;i<repetitions;++i){
                if(scenario==0)reset();
                if(scenario!=2)++epoch;
                alpha=scenario==2?0.5f:0;copy(cpu);
            }
            count_allocations=false;
            std::printf("%s,%s,%u,%u,%zu,%zu\n",version?"candidate":"reference",
                scenario==0?"scene_initialization":scenario==1?"new_epoch":"same_epoch_extra",
                repetitions,count,allocation_calls,allocation_bytes);
        }
    }
}
