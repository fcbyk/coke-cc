<template>
  <div class="dos-box">
    <div class="title-bar">
      <span class="title">控制台</span>
      <div class="controls">
        <span class="control minimize">-</span>
        <span class="control maximize">O</span>
        <span class="control close">X</span>
      </div>
    </div>
    <div class="content">
      <pre class="output-text"><slot>Hello World!</slot></pre>
    </div>
  </div>
</template>

<style scoped>
.dos-box {
  background-color: #000000;
  color: #00ff00;
  font-family: Consolas, Monaco, monospace;
  border: 2px solid #3c3c3c;
  border-radius: 3px;
  box-shadow: 0 0 10px rgba(0, 255, 0, 0.2);
  width: 100%;
  max-width: 800px;
  margin: 20px auto;
}

.title-bar {
  background-color: #3a3a3a;
  padding: 5px 10px;
  display: flex;
  justify-content: space-between;
  align-items: center;
  border-bottom: 1px solid #2c2c2c;
}

.title {
  color: #cccccc;
  font-size: 0.9em;
}

.controls {
  display: flex;
  gap: 12px;
}

.control {
  font-size: 0.8em;
  cursor: default;
  opacity: 0.8;
}

.close {
  color: #ff4444;
}

.content {
  padding: 15px;
  overflow-y: auto;
  max-height: 300px;
  min-height: 100px;
}

.output-text {
  margin: 0;
  white-space: pre-wrap;
  word-break: break-all;
  line-height: 1.4;
}

/* 滚动条样式 */
.content::-webkit-scrollbar {
  width: 10px;
}

.content::-webkit-scrollbar-track {
  background: #1a1a1a;
}

.content::-webkit-scrollbar-thumb {
  background: #3c3c3c;
  border-radius: 5px;
}

.content::-webkit-scrollbar-thumb:hover {
  background: #4c4c4c;
}
</style>