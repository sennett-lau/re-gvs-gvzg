import {cardCopy} from './session.mjs';

export class CardStore {
  constructor(clientId) {
    if (!/^[a-zA-Z0-9_-]{1,80}$/.test(clientId)) throw new Error('explicit isolated clientId required');
    this.clientId = clientId;
  }
  async open() {
    this.db = await new Promise((resolve, reject) => {
      const request = indexedDB.open('original-exec-cards-v1', 1);
      request.onupgradeneeded = () => request.result.createObjectStore('cards');
      request.onsuccess = () => resolve(request.result);
      request.onerror = () => reject(request.error);
      request.onblocked = () => reject(new Error('card database upgrade blocked'));
    });
  }
  transaction(mode, value) {
    return new Promise((resolve, reject) => {
      const tx = this.db.transaction('cards', mode, {durability: 'strict'});
      const table = tx.objectStore('cards');
      const request = mode === 'readonly' ? table.get(this.clientId) : table.put(cardCopy(value), this.clientId);
      tx.oncomplete = () => resolve(request.result);
      tx.onerror = () => reject(tx.error || request.error);
      tx.onabort = () => reject(tx.error || new Error('card transaction aborted'));
    });
  }
  async load() { return cardCopy(await this.transaction('readonly')); }
  async commit(bytes) { await this.transaction('readwrite', bytes); }
  close() { this.db?.close(); }
}

// The lock must cover import, all game/helper documents and final disposal.
// A second same-origin tab never becomes another writer to the same card.
export async function withCardLock(clientId, run) {
  if (!navigator.locks) throw new Error('Web Locks required for exclusive card ownership');
  return navigator.locks.request('original-exec-card:' + clientId, {mode: 'exclusive', ifAvailable: true}, async lock => {
    if (!lock) throw new Error('this client card already has an active writer');
    const store = new CardStore(clientId);
    try { await store.open(); return await run(store); }
    finally { store.close(); }
  });
}
