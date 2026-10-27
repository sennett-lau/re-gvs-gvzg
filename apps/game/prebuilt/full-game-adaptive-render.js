/* Full-game adaptation: menus/loading retain their mode-safe native60Hz cap.
 * Only a verified native scene can receive automatic render-budget decisions. */
(function(root) {
  'use strict';
  function attach(Module,{mode,initialHz,onStatus=()=>{},now=()=>performance.now()}={}) {
    const policy=root.PS2AdaptiveRenderPolicy.create({initialHz,automatic:mode==='auto'});
    let previous=null,latest=null,lastDecision=null,timer=null,lastHz=60,lastScene=null,lastCapable=null;
    const samples=[],changes=[];
    function resetWindow(){previous=null;policy.resetWindow();}
    function sample(){
      if(!Module.running || Module.failed || document.hidden || !Module._ps2web_experiment_stat){resetWindow();return;}
      const stat=Module._ps2web_experiment_stat;
      const current={wallMs:now(),guestSeconds:stat(9),videoFrame:stat(6),videoHz:stat(8),
        simulationTicks:stat(0),audioProducedFrames:stat(7),requestedHz:stat(10),phaseAlpha:stat(11),
        rateChanges:stat(12),phaseTick:stat(13),phaseCycles:stat(14),adaptiveCapable:stat(15)===1,
        gameMode:stat(16),sceneGeneration:stat(17),modeCapHz:stat(18),
        audioQueuedMs:Module._ps2web_audio_queued_ms(),gpuMs:Module._ps2web_gpu_ms(),emuIdleMs:Module._ps2web_idle_ms(0)};
      if(!current.videoFrame || current.guestSeconds<=0)return;
      if(lastScene!==current.sceneGeneration || lastCapable!==current.adaptiveCapable){
        changes.push({kind:'scene',wallMs:current.wallMs,sceneGeneration:current.sceneGeneration,
          gameMode:current.gameMode,adaptiveCapable:current.adaptiveCapable,videoHz:current.videoHz});
        lastScene=current.sceneGeneration;lastCapable=current.adaptiveCapable;resetWindow();
        const wanted=policy.snapshot().targetHz;
        if(current.adaptiveCapable && current.requestedHz!==wanted){
          if(Module._ps2web_request_fps(wanted)!==1)throw Error('Runtime rejected the retained rendering target');
        }
      }
      let audioActive=false;
      if(Module._ps2web_audio_ring && Module.HEAPU8){
        const ring=new Int32Array(Module.HEAPU8.buffer,Module._ps2web_audio_ring(),4);
        audioActive=Atomics.load(ring,3)!==0;
      }
      if(previous){
        const spanMs=current.wallMs-previous.wallMs;
        latest={...current,spanMs,audioActive,visible:true,appliedHz:current.videoHz,
          guestRate:(current.guestSeconds-previous.guestSeconds)*1000/spanMs,
          observedVideoHz:(current.videoFrame-previous.videoFrame)*1000/spanMs,
          simulationRate:(current.simulationTicks-previous.simulationTicks)*1000/spanMs,
          audioFramesPerWallSecond:(current.audioProducedFrames-previous.audioProducedFrames)*1000/spanMs,
          renderBusyPercent:(current.gpuMs-previous.gpuMs)*100/spanMs,
          emuIdlePercent:(current.emuIdleMs-previous.emuIdleMs)*100/spanMs};
        if(current.adaptiveCapable){
          lastDecision=policy.observe(latest);
          if(lastDecision.changed){
            if(Module._ps2web_request_fps(lastDecision.targetHz)!==1)throw Error('Runtime rejected rendering-rate request');
            changes.push({kind:'requested',wallMs:current.wallMs,from:current.videoHz,to:lastDecision.targetHz,
              reason:lastDecision.reason,sceneGeneration:current.sceneGeneration,phaseTick:current.phaseTick,phaseAlpha:current.phaseAlpha});
          }
        }else{
          policy.resetWindow();
          lastDecision={targetHz:policy.snapshot().targetHz,simulationHz:60,changed:false,status:'mode-60',
            reason:'This scene retains its original60-Hz timing; the battle rendering target is preserved'};
        }
        if(current.videoHz!==lastHz)changes.push({kind:'applied',wallMs:current.wallMs,from:lastHz,to:current.videoHz,
          sceneGeneration:current.sceneGeneration,phaseTick:current.phaseTick,phaseCycles:current.phaseCycles,phaseAlpha:current.phaseAlpha});
        lastHz=current.videoHz;
        samples.push({...latest,decision:lastDecision});
        if(samples.length>180)samples.shift();
        onStatus({mode,currentHz:current.videoHz,targetHz:policy.snapshot().targetHz,guestRate:latest.guestRate,
          decision:lastDecision,adaptiveCapable:current.adaptiveCapable,gameMode:current.gameMode,sceneGeneration:current.sceneGeneration});
      }
      if(changes.length>120)changes.splice(0,changes.length-120);
      previous=current;
    }
    timer=setInterval(()=>{try{sample();}catch(error){if(Module.printErr)Module.printErr('[full-game adaptive] '+String(error));clearInterval(timer);timer=null;}},1000);
    return {resetWindow,sample,snapshot:()=>({mode,initialHz,policy:policy.snapshot(),latest,decision:lastDecision,samples:samples.slice(),changes:changes.slice()}),
      summary:()=>({mode,currentHz:latest?latest.videoHz:60,policy:policy.snapshot(),latest,decision:lastDecision}),
      dispose(){if(timer!==null)clearInterval(timer);timer=null;}};
  }
  root.PS2FullGameAdaptiveRender={attach};
})(globalThis);
