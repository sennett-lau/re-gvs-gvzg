// Accept the network owner's server config or its explicit client projection.
// Errors deliberately exclude JSON contents and credentials.
function parseConfig(text) {
  let raw;
  try { raw=JSON.parse(text.replace(/^\uFEFF/,'')); } catch { throw Error('Private network configuration is not valid JSON'); }
  if(!raw||typeof raw!=='object')throw Error('Private network configuration is missing');
  let gateway;
  try {gateway=new URL(raw.gatewayURL || ('ws://'+raw.listen+'/'));}catch{throw Error('Private gateway address is invalid');}
  if(gateway.protocol!=='ws:'||gateway.hostname!=='127.0.0.1'||gateway.pathname!=='/'||gateway.search||gateway.hash||gateway.username||gateway.password)
    throw Error('Private gateway must be an uncredentialed loopback WebSocket URL');
  if(typeof raw.token!=='string'||!raw.token||raw.token.length>4096)throw Error('Private gateway token is missing or invalid');
  if(!raw.endpoints||['lobby','battle'].some(name=>typeof raw.endpoints[name]!=='string'||!raw.endpoints[name]))
    throw Error('Private native endpoint mapping is missing');
  return {gatewayURL:gateway.href,token:raw.token,endpoints:{...raw.endpoints}};
}
module.exports={parseConfig};
