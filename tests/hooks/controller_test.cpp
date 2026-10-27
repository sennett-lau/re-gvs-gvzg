// CPU-only controller test. No game instructions, graphics, audio device or
// emulator runtime are executed. Actual mode4 gameplay acceptance is separate.
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize];
alignas(16) std::uint8_t g_spr[kScratchpadSize];
bool g_watch_on=false;
std::uint32_t g_watch_base=0,g_watch_end=0;
std::uint64_t test_frame=0,test_cycles=0;
void watch_hit(std::uint32_t,std::uint32_t,const char*) { std::abort(); }
std::uint8_t slow_ld8(std::uint32_t) { std::abort(); }
std::uint16_t slow_ld16(std::uint32_t) { std::abort(); }
std::uint32_t slow_ld32(std::uint32_t) { std::abort(); }
void slow_st8(std::uint32_t,std::uint8_t) { std::abort(); }
std::uint64_t now() { return test_cycles; }
std::uint64_t frame_count() { return test_frame; }
void set_pad_buttons(std::uint16_t,int) { std::abort(); }
void set_pad_axis(int,std::uint8_t,int) { std::abort(); }
}
static unsigned resets=0;
void research_reset_interpolation() { ++resets; }
void research_camera_end() {}
std::uint64_t research_interpolated_models() { return 0; }
std::uint64_t research_interpolated_cameras() { return 0; }
#include CONTROLLER

static constexpr unsigned C=0x839110,B=0x838FB0;
static void scene(unsigned mode,unsigned stage,unsigned init=1,unsigned phase=2,unsigned pause=0) {
    ps2::st32(0x6D7A8C,C);ps2::st32(0x6D7A88,B);ps2::st32(0x6D7A90,0x843D30);
    ps2::st8(C,mode);ps2::st8(C+1,1);ps2::st8(C+2,stage);
    ps2::st8(C+4,init);ps2::st8(C+5,phase);ps2::st8(C+0x38,1);ps2::st8(C+0x39,pause);
    ps2::st8(C+0x4C,mode==4?1:0);ps2::st8(B+0x0C,1);
}
int main(int argc,char **argv) {
    const std::string test=argc>1?argv[1]:"legacy";
    if(test=="predicates") {
#ifdef CANDIDATE
        unsigned cases=0;
        for(unsigned mode=0;mode<12;++mode)for(unsigned state=0;state<4;++state)
        for(unsigned stage=0;stage<12;++stage)for(unsigned init=0;init<3;++init)
        for(unsigned phase=0;phase<4;++phase)for(unsigned mask=0;mask<4;++mask)
        for(unsigned pause=0;pause<2;++pause) {
            scene(mode,stage,init,phase,pause);ps2::st8(C+1,state);ps2::st8(C+0x38,mask);
            const bool expected=((mode==3&&stage==7)||(mode==4&&stage==3))&&state==1&&init==1&&phase==2&&mask==1&&pause==0;
            assert(read_scene().eligible==expected);++cases;
        }
        scene(4,3);
        const auto key=read_scene().key;
        for(auto address:{B+0x29,B+0x2A}) {
            for(unsigned value:{1u,2u,255u}) {ps2::st8(address,value);assert(!read_scene().eligible);assert(read_scene().key!=key);++cases;}
            ps2::st8(address,0);
        }
        for(auto camera:{0u,0x843EF0u,0x8440B0u,0x100u}) {ps2::st32(0x6D7A90,camera);assert(!read_scene().eligible);++cases;}
        ps2::st32(0x6D7A90,0x843D30);ps2::st32(0x6D7A88,0x1FFFFFF);assert(!read_scene().eligible);++cases;
        ps2::st32(0x6D7A8C,0);assert(read_scene().snapshot==gundam_scene::invalid);++cases;
        gundam_scene::Fields fields{};
        unsigned bounds=0;
        for(unsigned i=0;i<fields.size();++i) {
            for(unsigned v=0;v<(1u<<gundam_scene::widths[i]);++v) {
                fields[i]=v;const auto packed=gundam_scene::pack(fields);
                assert(packed!=gundam_scene::invalid);
                assert(((packed>>gundam_scene::shifts[i])&((1u<<gundam_scene::widths[i])-1))==v);
                assert(std::uint64_t(gundam_scene::exported(packed))==packed);++bounds;
            }
            fields[i]=1u<<gundam_scene::widths[i];assert(gundam_scene::exported(gundam_scene::pack(fields))==-1);++bounds;fields[i]=0;
        }
        for(unsigned i=0;i<fields.size();++i)fields[i]=(1u<<gundam_scene::widths[i])-1;
        assert(gundam_scene::pack(fields)==(1ull<<48)-1);
        assert(gundam_scene::exported(gundam_scene::invalid)==-1);
        std::cout<<"{\"predicateCases\":"<<cases<<",\"snapshotBoundaryCases\":"<<bounds+2<<",\"failures\":0}\n";
#endif
        return 0;
    }
    const bool versus=test=="versus";
    const unsigned battle_mode=versus?4:3,battle_stage=versus?3:7;
    research_web_begin();
    for(unsigned frame=0;frame<2200;++frame) {
        // Same source controller sees menu, loading, countdown, battle, pause,
        // resume, rate changes, result, then menu. No guest simulation is faked.
        if(frame==0)scene(2,0,0,0);
        if(frame==120)scene(battle_mode,versus?0:1,0,0);
        if(frame==180)scene(battle_mode,versus?2:6,0,0);
        if(frame==240)scene(battle_mode,battle_stage,0,0);
        if(frame==270)scene(battle_mode,battle_stage,1,1);
        if(frame==300)scene(battle_mode,battle_stage);
        if(frame==777)scene(battle_mode,battle_stage,1,2,1);
        if(frame==811)scene(battle_mode,battle_stage);
        if(frame==1000)ps2web_request_fps(80);
        if(frame==1200)ps2web_request_fps(72);
        if(frame==1400)ps2web_request_fps(120);
        if(frame==1777)scene(battle_mode,battle_stage,1,2,1);
        if(frame==1811)scene(battle_mode,battle_stage);
        if(frame==2000)scene(battle_mode,versus?4:8,0,0);
        if(frame==2100)scene(2,0,0,0);
        ps2::test_cycles+=research_adaptive_frame_cycles();++ps2::test_frame;
        research_web_vblank();research_mode_complete();research_render_complete();
        std::cout<<frame<<','<<ps2::test_cycles<<','<<resets;
        // Omit only the expected differing mode identifier and new diagnostic.
        for(int stat=0;stat<19;++stat)if(stat!=16)std::cout<<','<<ps2web_experiment_stat(stat);
        std::cout<<','<<research_interpolation_enabled()<<','<<research_render_only()<<'\n';
    }
    return 0;
}
