<script setup>
import { ref } from 'vue'

const isOOP = ref(false)
</script>

<template>

  <div class="switch-container">
    <span :class="{ active: !isOOP }">函数式</span>
    <label class="switch">
      <input type="checkbox" v-model="isOOP">
      <span class="slider"></span>
    </label>
    <span :class="{ active: isOOP }">面向对象</span>
  </div>

  <slot v-if="isOOP" name="class" />
  <slot v-else name="functional" />
</template>

<style scoped>
.switch-container {
  display: flex;
  align-items: center;
  justify-content: start;
  gap: 12px;
  padding: 0 16px;
  padding-top: 20px;
  border-top: 1px solid var(--vp-c-divider);
  margin-top: 20px;
}

.switch-container span {
  font-size: 14px;
  color: var(--vp-c-text-3);
  transition: color 0.25s;
}

.switch-container span.active {
  color: var(--vp-c-brand);
  font-weight: 600;
}

/* Switch styles */
.switch {
  position: relative;
  display: inline-block;
  width: 50px;
  height: 24px;
}

.switch input {
  opacity: 0;
  width: 0;
  height: 0;
}

.slider {
  position: absolute;
  cursor: pointer;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background-color: var(--vp-c-divider);
  transition: .4s;
  border-radius: 24px;
}

.slider:before {
  position: absolute;
  content: "";
  height: 16px;
  width: 16px;
  left: 4px;
  bottom: 4px;
  background-color: white;
  transition: .4s;
  border-radius: 50%;
}



input:checked + .slider:before {
  transform: translateX(26px);
}
</style>