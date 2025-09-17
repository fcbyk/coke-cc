<template>
  <div class="clear-cache">
    <span v-if="!loading"  @click="clearCache" class="clear-cache-btn">
      <p>点击此处清除本站点所有缓存，更新内容</p>
    </span>
    <span v-else>清除中...</span>
    <div v-if="message" class="message" :class="{ success: isSuccess, error: !isSuccess }">
      {{ message }}
    </div>
  </div>
</template>

<script setup>
import { ref } from 'vue';

const loading = ref(false);
const message = ref('');
const isSuccess = ref(false);
const currentHost = ref(window.location.hostname);
const currentOrigin = ref(window.location.origin);

const isCurrentSiteKey = (key) => {
  return key.includes(currentHost.value) || 
         key.startsWith('vuex') || 
         key.startsWith('_auth') ||
         !key.includes('.');
};

const isCurrentSiteDB = (dbName) => {
  return dbName.includes(currentHost.value) || 
         dbName.startsWith('vuex') || 
         dbName.startsWith('_auth') ||
         !dbName.includes('.');
};

const clearLocalStorage = () => {
  Object.keys(localStorage).forEach(key => {
    if (isCurrentSiteKey(key)) {
      localStorage.removeItem(key);
    }
  });
};

const clearSessionStorage = () => {
  Object.keys(sessionStorage).forEach(key => {
    if (isCurrentSiteKey(key)) {
      sessionStorage.removeItem(key);
    }
  });
};

const clearIndexedDB = async () => {
  if (!window.indexedDB) return;
  
  try {
    const databases = indexedDB.databases ? await indexedDB.databases() : [];
    
    for (const db of databases) {
      if (isCurrentSiteDB(db.name)) {
        await new Promise((resolve, reject) => {
          const request = indexedDB.deleteDatabase(db.name);
          request.onsuccess = resolve;
          request.onerror = reject;
        });
      }
    }
  } catch (error) {
    console.error('清除IndexedDB时出错:', error);
    throw error;
  }
};

const clearCookies = () => {
  const cookies = document.cookie.split(';');
  
  for (let i = 0; i < cookies.length; i++) {
    const cookie = cookies[i].trim();
    const eqPos = cookie.indexOf('=');
    const name = eqPos > -1 ? cookie.substr(0, eqPos) : cookie;
    
    document.cookie = `${name}=;expires=Thu, 01 Jan 1970 00:00:00 GMT;path=/;domain=${currentHost.value}`;
  }
};

const clearServiceWorkerCache = async () => {
  if (!navigator.serviceWorker) return;
  
  try {
    const registrations = await navigator.serviceWorker.getRegistrations();
    for (const reg of registrations) {
      if (reg.scope.includes(currentHost.value)) {
        await reg.unregister();
        const cacheNames = await caches.keys();
        for (const cacheName of cacheNames) {
          if (cacheName.includes(currentHost.value)) {
            await caches.delete(cacheName);
          }
        }
      }
    }
  } catch (error) {
    console.error('清除Service Worker缓存失败:', error);
    throw error;
  }
};

const clearBrowserCache = async () => {
  try {
    // 方法1：通过fetch API强制获取新版本
    const urlsToRefresh = [
      '/',
      '/index.html',
    ];
    
    await Promise.all(urlsToRefresh.map(url => {
      return fetch(`${currentOrigin.value}${url}`, {
        cache: 'reload',
        headers: { 'Cache-Control': 'no-cache' }
      }).catch(() => {}); // 忽略404错误
    }));
    
    // 方法2：通过修改URL参数强制刷新
    const links = document.querySelectorAll('link[rel="stylesheet"], script[src]');
    links.forEach(el => {
      if (el.href && el.href.startsWith(currentOrigin.value)) {
        el.href = el.href.split('?')[0] + '?v=' + Date.now();
      } else if (el.src && el.src.startsWith(currentOrigin.value)) {
        el.src = el.src.split('?')[0] + '?v=' + Date.now();
      }
    });
    
  } catch (error) {
    console.error('清除浏览器缓存失败:', error);
    throw error;
  }
};

const clearCache = async () => {
  loading.value = true;
  message.value = '';
  isSuccess.value = false;
  
  try {
    // 清除存储类缓存
    clearLocalStorage();
    clearSessionStorage();
    await clearIndexedDB();
    clearCookies();
    
    // 清除静态资源缓存
    await clearServiceWorkerCache();
    await clearBrowserCache();
    
    message.value = '本站所有缓存已成功清除！';
    isSuccess.value = true;
  } catch (error) {
    message.value = `清除缓存时出错: ${error.message}`;
    isSuccess.value = false;
  } finally {
    loading.value = false;
    setTimeout(() => message.value = '', 3000);
  }
};
</script>

<style scoped>
.clear-cache-btn {
  cursor: pointer;
  font-size: 18px;
  font-weight: bold;
  color: #3a9e40; /* 更深的绿色 */
  text-decoration: underline;
  transition: all 0.2s ease; /* 平滑过渡 */
}

.clear-cache-btn:hover {
  color: #5bc961;
  text-decoration: none; /* 悬停时取消下划线 */
}

.success {  
  color: #2e7d32;
}

.error {
  color: #c62828;
}
</style>