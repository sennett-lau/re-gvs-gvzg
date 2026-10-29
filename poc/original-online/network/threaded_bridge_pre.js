// Node-only small bridge smoke. Credentials are loaded privately on main and are
// neither embedded into the WASM nor transferred into worker JS contexts.
if (require('node:worker_threads').isMainThread) {
  Module['preRun'] = [function () {
    addRunDependency('original-online-smoke-adapter');
    const config=JSON.parse(require('node:fs').readFileSync(process.env.ORIGINAL_ONLINE_SMOKE_CONFIG,'utf8'));
    import(process.env.ORIGINAL_ONLINE_HOST_MODULE).then(({installOriginalOnlineBridge}) => {
      installOriginalOnlineBridge(Module,{gatewayURL:`ws://${config.listen}/`,token:config.token,endpoints:config.endpoints});
      removeRunDependency('original-online-smoke-adapter');
    }).catch(error=>{console.error(error);process.exit(1);});
  }];
}
