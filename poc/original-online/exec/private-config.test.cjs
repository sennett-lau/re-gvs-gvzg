const {test}=require('node:test'),assert=require('node:assert/strict');
const {parseConfig}=require('./private-config.cjs');
const fields={token:'synthetic-secret-for-test',endpoints:{lobby:'127.0.0.1:18800',battle:'127.0.0.1:18810'}};
test('server and explicit client schemas preserve the exact private route',()=>{
  const server=parseConfig(JSON.stringify({...fields,listen:'127.0.0.1:18820',udp:{dns:'127.0.0.1:18853'}}));
  const client=parseConfig('\uFEFF'+JSON.stringify({...fields,gatewayURL:'ws://127.0.0.1:18820/'}));
  assert.deepEqual(server,client);assert.deepEqual(client,{...fields,gatewayURL:'ws://127.0.0.1:18820/'});
});
test('a tailnet gateway address is accepted; other hosts are not',()=>{
  // Synthetic addresses only; never copy a device's private network identity.
  const gatewayURL='ws://'+[100,64,0,1].join('.')+':18830/';
  assert.equal(parseConfig(JSON.stringify({...fields,gatewayURL})).gatewayURL,gatewayURL);
  for(const host of ['100.63.0.1','100.128.0.1',[10,0,0,1].join('.'),[192,168,0,1].join('.'),'localhost'])
    assert.throws(()=>parseConfig(JSON.stringify({...fields,gatewayURL:'ws://'+host+':18830/'})),/loopback or tailnet/);
});
test('invalid config fails without echoing credential contents',()=>{
  for(const text of [JSON.stringify({...fields,gatewayURL:'ws://example.com/'}),JSON.stringify({...fields,gatewayURL:'ws://127.0.0.1:18820/?key='+fields.token}),
    JSON.stringify({...fields,gatewayURL:'ws://user:pass@127.0.0.1/'}),'{"token":"'+fields.token+'",BROKEN',JSON.stringify({...fields,listen:'not valid'}),
    JSON.stringify({listen:'127.0.0.1:18820',token:fields.token})]){
    assert.throws(()=>parseConfig(text),error=>!error.message.includes(fields.token));
  }
});
