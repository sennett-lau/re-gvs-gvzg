import {IMAGES} from './session.mjs';

export function documentFactory({container, urls, discUrl, discSize, onExec, onFailure, emit = () => {}, timeoutMs = 120000}) {
  return async (image, generation) => {
    const url = new URL(urls[image], location.href);
    if (url.origin !== location.origin) throw new Error('exec documents must use the same isolated origin');
    const token = crypto.randomUUID(); url.searchParams.set('execToken', token);
    const iframe = document.createElement('iframe');
    iframe.allow = 'autoplay'; iframe.style.cssText = 'border:0;width:100%;height:100%';
    const waiters = new Map(), backlog = new Map();
    let failure = null, closed = false;
    const wait = type => {
      if (failure) return Promise.reject(failure);
      if (backlog.has(type)) { const value = backlog.get(type); backlog.delete(type); return Promise.resolve(value); }
      return new Promise((resolve, reject) => {
        const timer = setTimeout(() => { waiters.delete(type); reject(new Error(type + ' timeout')); }, timeoutMs);
        waiters.set(type, {resolve: value => {clearTimeout(timer); resolve(value);}, reject: error => {clearTimeout(timer); reject(error);}});
      });
    };
    const receive = event => {
      const data = event.data;
      if (closed || event.source !== iframe.contentWindow || event.origin !== url.origin || data?.originalExec !== 1 || data.token !== token) return;
      emit({utc: new Date().toISOString(), kind: 'document-message', image, generation, type: data.type,
        ...(data.type === 'sample' ? {sample: data.sample} : {}), ...(data.type === 'startup' ? {record: data.record} : {})});
      if (data.type === 'startup' || data.type === 'sample') return;
      if (data.type === 'exec') { Promise.resolve(onExec(data.record, data.card, generation)).catch(error => onFailure(error)); return; }
      if (data.type === 'failure') {
        failure = new Error(data.error); for (const waiter of waiters.values()) waiter.reject(failure); waiters.clear();
        onFailure(failure); return;
      }
      const waiter = waiters.get(data.type);
      if (waiter) { waiters.delete(data.type); waiter.resolve(data); }
      else backlog.set(data.type, data);
    };
    addEventListener('message', receive);
    const send = (type, data = {}) => iframe.contentWindow.postMessage({originalExec: 1, token, type, ...data}, url.origin);
    iframe.src = url.href; container.append(iframe);
    try {
      const ready = await wait('ready');
      if (ready.image !== image || ready.imageSha256 !== IMAGES[image].sha256) throw new Error('prepared document identity mismatch');
    } catch (error) { closed = true; iframe.remove(); removeEventListener('message', receive); throw error; }
    return {
      async start(data) { const receipt = wait('started'); send('start', {...data, discUrl, discSize}); return (await receipt).receipt; },
      async stop() {
        // A prior failure must not prevent best-effort worker termination.
        failure = null; const receipt = wait('stopped'); send('stop'); await receipt;
      },
      async dispose() {
        closed = true; iframe.remove(); removeEventListener('message', receive);
        for (const waiter of waiters.values()) waiter.reject(new Error('document disposed')); waiters.clear();
      },
    };
  };
}
