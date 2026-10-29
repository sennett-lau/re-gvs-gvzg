// Synthetic upstream PS2-dialect TLS client through the unchanged JS byte path.
// No original game, DNAS success patch, certificate bypass in the game, or mode4.
import assert from 'node:assert/strict';
import net from 'node:net';
import {once} from 'node:events';
import {spawn} from 'node:child_process';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import path from 'node:path';
import {NativeByteStream} from './transport.mjs';
const [binary,state,output]=process.argv.slice(2);
if(!binary||!state||!output)throw new Error('usage: node dnas_gateway_probe.mjs ZDXSV PRIVATE_RUN NEW_OUTPUT');
await mkdir(output,{recursive:false});const conf=JSON.parse(await readFile(`${state}/gateway.json`));
const result={started_at:new Date().toISOString(),native_client_connected:false,kind:'upstream synthetic SSLv2-hello/TLS1.0 client over actual JS/WebSocket/TCP adapter',connections:0,errors:[]};
const sockets=new Set(),streams=new Set();
const server=net.createServer({allowHalfOpen:true},async socket=>{
  sockets.add(socket);socket.on('close',()=>sockets.delete(socket));socket.on('error',()=>{});
  let stream;
  try{
    stream=await NativeByteStream.connect(`ws://${conf.listen}/tcp/dnas`,conf.token);streams.add(stream);++result.connections;
    const send=(async()=>{for await(const data of socket)await stream.write(data);})();
    const receive=(async()=>{for(;;){const data=await stream.read(65536,{timeoutMs:10000});if(!data.length){socket.end();break;}if(!socket.write(data))await once(socket,'drain');}})();
    await Promise.race([send,receive]);
  }catch(error){if(!socket.destroyed)result.errors.push({code:error.code,message:error.message});}
  finally{stream?.close();streams.delete(stream);socket.destroy();}
});
server.listen(0,'127.0.0.1');await once(server,'listening');
const command=[path.resolve(binary),'-profile=0','dnascheck',`127.0.0.1:${server.address().port}`];
result.command=command;let stdout='',stderr='';
try{
  const child=spawn(command[0],command.slice(1),{stdio:['ignore','pipe','pipe']});
  child.stdout.on('data',data=>stdout+=data);child.stderr.on('data',data=>stderr+=data);
  const timeout=setTimeout(()=>child.kill('SIGTERM'),30000);
  const [code,signal]=await once(child,'exit');clearTimeout(timeout);result.exit_code=code;result.signal=signal;
  assert.equal(code,0);assert.ok(result.connections>=3);assert.equal(result.errors.length,0);result.success=true;
}catch(error){result.success=false;result.error=error.message;process.exitCode=1;}
finally{
  for(const socket of sockets)socket.destroy();for(const stream of streams)stream.close();server.close();
  result.finished_at=new Date().toISOString();await writeFile(`${output}/client.log`,stdout+stderr);await writeFile(`${output}/result.json`,JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));
}
