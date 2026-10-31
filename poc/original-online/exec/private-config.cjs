// Loopback (local backend or SSH tunnel) or a private tailnet address in 100.64.0.0/10,
// the same rule as the network adapter.
function privateHost(hostname) {
  if(hostname==='127.0.0.1')return true;
  const octets=hostname.split('.').map(Number);
  return octets.length===4&&octets.every(n=>Number.isInteger(n)&&n>=0&&n<=255)&&octets[0]===100&&octets[1]>=64&&octets[1]<=127;
}
// Accept the network owner's server config or its explicit client projection.
// Errors deliberately exclude JSON contents and credentials.
function parseConfig(text) {
  let raw;
  try { raw=JSON.parse(text.replace(/^\uFEFF/,'')); } catch { throw Error('Private network configuration is not valid JSON'); }
  if(!raw||typeof raw!=='object')throw Error('Private network configuration is missing');
  let gateway;
  try {gateway=new URL(raw.gatewayURL || ('ws://'+raw.listen+'/'));}catch{throw Error('Private gateway address is invalid');}
  if(gateway.protocol!=='ws:'||!privateHost(gateway.hostname)||gateway.pathname!=='/'||gateway.search||gateway.hash||gateway.username||gateway.password)
    throw Error('Private gateway must be an uncredentialed loopback or tailnet WebSocket URL');
  if(typeof raw.token!=='string'||!raw.token||raw.token.length>4096)throw Error('Private gateway token is missing or invalid');
  if(!raw.endpoints||['lobby','battle'].some(name=>typeof raw.endpoints[name]!=='string'||!raw.endpoints[name]))
    throw Error('Private native endpoint mapping is missing');
  return {gatewayURL:gateway.href,token:raw.token,endpoints:{...raw.endpoints}};
}
module.exports={parseConfig,privateHost};
