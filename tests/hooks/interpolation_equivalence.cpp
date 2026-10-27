#include "ps2/cpu.hpp"
#include "ps2/memory.hpp"
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
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
    constexpr unsigned model=0x8AFDA0,entity=0x839330,descriptor=0x500000;
    ps2::Cpu cpu{};cpu.r[16].w[0]=model;cpu.r[17].w[0]=entity;
    std::array<std::uint8_t,0x65D0> reference{},canonical{};
    for(unsigned frame=0;frame<300;++frame){
        epoch=frame/2;alpha=(frame%2)*0.5f;
        enabled=frame<120||frame>=140;
        if(frame==120||frame==140){reference_reset_interpolation();candidate_reset_interpolation();}
        const unsigned count=frame<180?27:24;
        const unsigned desc=descriptor+(frame>=220?16:0);
        cpu.r[17].w[0]=entity+(frame>=260?0x2200:0);
        std::memset(ps2::g_ram+model,0,canonical.size());
        ps2::st32(model+0x65BC,desc);ps2::st8(desc+7,count);
        float position[4]={float(frame),140,float(frame*3),1};
        float angles[3]={0,float(frame)*0.01f,0};
        std::memcpy(ps2::g_ram+model+0x220,position,sizeof position);
        std::memcpy(ps2::g_ram+model+0x200,angles,sizeof angles);
        for(unsigned bone=0;bone<count;++bone){
            const float angle=float(frame+bone)*0.017f;
            float matrix[16]={std::cos(angle),0,-std::sin(angle),0,0,1,0,0,
                std::sin(angle),0,std::cos(angle),0,float(frame+bone),float(bone),float(frame*2),1};
            std::memcpy(ps2::g_ram+model+0x300+bone*0x240,matrix,sizeof matrix);
        }
        // Even on the same epoch the graphics source is freshly copied. Its
        // changed values must be ignored equally by both history algorithms.
        std::memcpy(canonical.data(),ps2::g_ram+model,canonical.size());
        reference_model_copy(cpu);
        std::memcpy(reference.data(),ps2::g_ram+model,reference.size());
        std::memcpy(ps2::g_ram+model,canonical.data(),canonical.size());
        candidate_model_copy(cpu);
        if(std::memcmp(reference.data(),ps2::g_ram+model,reference.size())){
            std::fprintf(stderr,"different model bytes at frame%u\n",frame);return 1;
        }
    }
    std::puts("300/300 complete graphics-model images byte-identical; includes same-epoch refresh, scene reset, disabled mode, changed bone count, descriptor and entity.");
}
