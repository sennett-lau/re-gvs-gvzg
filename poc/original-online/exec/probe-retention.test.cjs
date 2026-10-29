const test=require('node:test'),assert=require('node:assert/strict'),fs=require('node:fs'),os=require('node:os'),path=require('node:path');
const {StateRetention}=require('./probe-retention.cjs');
test('immutable state evidence retains transitions and exposes its bound',()=>{
  const dir=fs.mkdtempSync(path.join(os.tmpdir(),'exec-retention-'));
  try{
    const png=path.join(dir,'live.png'),json=path.join(dir,'live.json'),r=new StateRetention(dir,'A',3);
    const s={image:'game',generation:1,state:'running',sample:{scene:{mode:7}},lastState:{state_word:33}};
    const save=()=>{fs.writeFileSync(png,'synthetic-png-'+s.lastState.state_word);fs.writeFileSync(json,JSON.stringify(s));return r.retain(png,json,s);};
    assert.equal(save().name,'A-state-001');assert.equal(save(),null);
    s.lastState.state_word=3873;assert.equal(save().name,'A-state-002');
    s.generation=2;assert.equal(save().name,'A-state-003');
    s.sample.scene.mode=1;assert.deepEqual(save(),{limited:true,limit:3});assert.equal(r.limited,true);
    assert.equal(fs.readFileSync(path.join(dir,'A-state-001.png'),'utf8'),'synthetic-png-33');
    assert.equal(JSON.parse(fs.readFileSync(path.join(dir,'A-state-002.json'))).generation,1);
    assert.equal(fs.existsSync(path.join(dir,'A-state-004.png')),false);
  }finally{fs.rmSync(dir,{recursive:true,force:true});}
});
test('retention rejects invalid bounds and never overwrites previous evidence',()=>{
  assert.throws(()=>new StateRetention('/tmp','../A'));assert.throws(()=>new StateRetention('/tmp','A',0));
  const dir=fs.mkdtempSync(path.join(os.tmpdir(),'exec-retention-'));
  try{const png=path.join(dir,'live.png'),json=path.join(dir,'live.json');fs.writeFileSync(png,'a');fs.writeFileSync(json,'{}');
    fs.writeFileSync(path.join(dir,'A-state-001.png'),'prior');
    assert.throws(()=>new StateRetention(dir,'A').retain(png,json,{}),{code:'EEXIST'});
    assert.equal(fs.readFileSync(path.join(dir,'A-state-001.png'),'utf8'),'prior');
  }finally{fs.rmSync(dir,{recursive:true,force:true});}
});
