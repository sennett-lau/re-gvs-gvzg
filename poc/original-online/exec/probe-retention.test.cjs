const test=require('node:test'),assert=require('node:assert/strict'),fs=require('node:fs'),os=require('node:os'),path=require('node:path');
const {StateRetention}=require('./probe-retention.cjs');
test('immutable state evidence retains transitions and exposes its bound',()=>{
  const dir=fs.mkdtempSync(path.join(os.tmpdir(),'exec-retention-'));
  try{
    const png=path.join(dir,'live.png'),json=path.join(dir,'live.json'),r=new StateRetention(dir,'A',4);
    const s={image:'game',generation:1,state:'running',sample:{scene:{mode:7}},lastState:{state_word:33}};
    const save=()=>{fs.writeFileSync(png,'synthetic-png-'+s.lastState.state_word);fs.writeFileSync(json,JSON.stringify(s));return r.retain(png,json,s);};
    assert.equal(save().name,'A-state-001');assert.equal(save().name,'A-state-002');assert.equal(save(),null);
    s.lastState.state_word=3873;assert.equal(save().name,'A-state-003');
    s.generation=2;assert.equal(save().name,'A-state-004');
    s.sample.scene.mode=1;assert.deepEqual(save(),{limited:true,limit:4});assert.equal(r.limited,true);
    assert.equal(fs.readFileSync(path.join(dir,'A-state-001.png'),'utf8'),'synthetic-png-33');
    assert.equal(JSON.parse(fs.readFileSync(path.join(dir,'A-state-003.json'))).generation,1);
    assert.equal(fs.existsSync(path.join(dir,'A-state-005.png')),false);
  }finally{fs.rmSync(dir,{recursive:true,force:true});}
});
test('next periodic sample preserves content that appears after the state transition',()=>{
  const dir=fs.mkdtempSync(path.join(os.tmpdir(),'exec-retention-'));
  try{
    const png=path.join(dir,'live.png'),json=path.join(dir,'live.json'),r=new StateRetention(dir,'A');
    const s={image:'game',generation:1,state:'running',lastState:{state_word:25633}};
    fs.writeFileSync(json,JSON.stringify(s));fs.writeFileSync(png,'synthetic transition background');
    assert.equal(r.retain(png,json,s).phase,'state-change');
    fs.writeFileSync(png,'synthetic later error text');
    assert.equal(r.retain(png,json,s).phase,'next-periodic-sample');
    assert.equal(r.retain(png,json,s),null);
    assert.equal(fs.readFileSync(path.join(dir,'A-state-001.png'),'utf8'),'synthetic transition background');
    assert.equal(fs.readFileSync(path.join(dir,'A-state-002.png'),'utf8'),'synthetic later error text');
  }finally{fs.rmSync(dir,{recursive:true,force:true});}
});
test('retention rejects invalid bounds and never overwrites previous evidence',()=>{
  assert.throws(()=>new StateRetention('/tmp','../A'));assert.throws(()=>new StateRetention('/tmp','A',0));
  // A reopened client keeps its role and gets its own file prefix.
  assert.doesNotThrow(()=>new StateRetention('/tmp','B2'));for(const label of ['B1','C','B10','AB'])assert.throws(()=>new StateRetention('/tmp',label));
  const dir=fs.mkdtempSync(path.join(os.tmpdir(),'exec-retention-'));
  try{const png=path.join(dir,'live.png'),json=path.join(dir,'live.json');fs.writeFileSync(png,'a');fs.writeFileSync(json,'{}');
    fs.writeFileSync(path.join(dir,'A-state-001.png'),'prior');
    assert.throws(()=>new StateRetention(dir,'A').retain(png,json,{}),{code:'EEXIST'});
    assert.equal(fs.readFileSync(path.join(dir,'A-state-001.png'),'utf8'),'prior');
  }finally{fs.rmSync(dir,{recursive:true,force:true});}
});
