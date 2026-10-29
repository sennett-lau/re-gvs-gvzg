// Bounded immutable copies of already captured evidence; no browser or guest access.
const fs = require('node:fs'), path = require('node:path');
class StateRetention {
  constructor(directory,label,limit=96) {
    if(!/^[A-B]$/.test(label)||!Number.isSafeInteger(limit)||limit<1||limit>256)throw Error('Invalid state retention bounds');
    this.directory=directory;this.label=label;this.limit=limit;this.count=0;this.key=null;this.limited=false;
  }
  retain(png,json,snapshot) {
    const key=JSON.stringify([snapshot.image,snapshot.generation,snapshot.state,snapshot.sample?.scene?.mode,
      snapshot.lastState?.state_word]);
    if(key===this.key)return null;
    this.key=key;
    if(this.count===this.limit){this.limited=true;return {limited:true,limit:this.limit};}
    const name=this.label+'-state-'+String(++this.count).padStart(3,'0');
    fs.copyFileSync(png,path.join(this.directory,name+'.png'),fs.constants.COPYFILE_EXCL);
    fs.copyFileSync(json,path.join(this.directory,name+'.json'),fs.constants.COPYFILE_EXCL);
    return {name,key,count:this.count};
  }
}
module.exports={StateRetention};
