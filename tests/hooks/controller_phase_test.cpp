// Tiny CPU-only phase/snapshot harness. No PS2 runtime, GPU or audio device.
#define main reused_controller_main
#include "controller_test.cpp"
#undef main

int main(int argc,char **argv) {
    const std::string test=argc>1?argv[1]:"fixed120";
    scene(4,3);
    research_web_begin();
    assert(ps2web_experiment_stat(20)==-1);
    for(std::uint32_t value:{0u,1u,0x7fffffffu,0x80000000u,0xfffffffeu,0xffffffffu}) {
        ps2::st32(C+0x58,value);research_mode_complete();
        assert(ps2web_experiment_stat(20)==double(value));
        ps2::st32(C+0x58,12345);
        assert(ps2web_experiment_stat(20)==double(value)); // Snapshot, not live RAM.
    }
    ps2::st32(0x6D7A8C,0);research_mode_complete();assert(ps2web_experiment_stat(20)==-1);
    scene(4,3);research_web_begin();
    std::uint32_t initial=0xfffffff0u,counter=initial;
    ps2::st32(C+0x58,counter);
    unsigned requested=120;
    if(test.starts_with("fixed"))requested=std::stoul(test.substr(5));
    ps2web_request_fps(requested);
    std::uint64_t canonical=0;
    for(unsigned frame=0;frame<1200;++frame) {
        if(test=="dynamic") {
            if(frame==37)ps2web_request_fps(80);
            if(frame==151)ps2web_request_fps(120);
            if(frame==299)ps2web_request_fps(72);
            if(frame==401)scene(4,3,1,2,1);
            if(frame==461)scene(4,3);
            if(frame==599)ps2web_request_fps(60);
            if(frame==731)ps2web_request_fps(119);
            if(frame==907)scene(2,0,0,0);
            if(frame==1033)scene(3,7);
        } else if(test=="variable") {
            // Deterministic rate jitter, plus eligibility and retained-phase edges.
            ps2web_request_fps(60+(frame*37u)%61u);
            if(frame%127==0)scene(4,3,1,2,1);
            if(frame%127==3)scene(4,3);
        }
        const auto elapsed=research_adaptive_frame_cycles();
        ps2::test_cycles+=elapsed;++ps2::test_frame;
        research_web_vblank(); // Frozen system.cpp invokes this BEFORE INTC2.
        const bool extra=research_render_only();
        if(!extra){++canonical;++counter;}
        ps2::st32(C+0x58,counter); // Stub of exactly the guarded original IRQ store.
        research_mode_complete();research_render_complete();
        assert(ps2web_experiment_stat(20)==double(counter));
        assert(std::uint32_t(counter-initial)==canonical);
        assert(canonical==phase.tick+1);
        std::cout<<frame<<','<<elapsed<<','<<phase.cycles<<','<<phase.tick<<','
            <<extra<<','<<phase.hz<<','<<counter<<','<<ps2web_experiment_stat(20)<<'\n';
    }
}
