<script setup>
import { ref, watch } from 'vue'

const props = defineProps(['password'])

const password = ref('')
const isAuthenticated = ref(false)
let correctPassword = 'coke'
const errorMessage = ref('')

if (props.password) {
  correctPassword = props.password
}

const checkPassword = () => {
  if (password.value === correctPassword) {
    isAuthenticated.value = true
  } else {
    errorMessage.value = '密码错误，请重试。'
  }
}

watch(password, () => {
  errorMessage.value = '';
});
</script>

<template>
  <div v-if="isAuthenticated">
    <slot></slot>
  </div>
  <div v-else>
    <div class="custom-prompt">
      <p class="prompt-message">输入密码才能查看参考答案噢</p>
      <p>
        <input v-model="password" class="password-input" @keydown.enter="checkPassword"
          placeholder="点击此处输入密码" />
        <button @click="checkPassword">验证</button>
      </p>
      <p v-if="errorMessage" class="error-message">{{ errorMessage }}</p>
    </div>
  </div>
</template>

<style scoped>
.custom-prompt {
  padding: 1rem;
  background-color: var(--vp-c-bg-alt);
  border-radius: 8px;
  font-size: 1rem;
  margin: 1rem 0;
}

.password-input {
  border-bottom: 1px var(--vp-c-text-1) solid;
  margin-right: 1rem;
}

.error-message {
  color: rgb(187, 6, 6);
}
</style>