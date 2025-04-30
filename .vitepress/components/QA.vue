<script setup>
import { ref, computed } from 'vue'
import { useData } from 'vitepress'

const { isDark } = useData()

const props = defineProps({
  question: {
    type: String,
    required: true
  },
  level: {
    type: String,
    default: ''
  }
})

const isRevealed = ref(false)

const toggleReveal = () => {
  isRevealed.value = !isRevealed.value
}

const badgeClass = computed(() => {
  const classes = ['question-badge']
  if (props.level) {
    classes.push(`level-${props.level}`)
  }
  if (isDark.value) {
    classes.push('dark-mode')
  }
  return classes
})
</script>

<template>
  <div class="qa-container">
    <div 
      class="qa-question" 
      :class="{ 'is-open': isRevealed, [`level-${level}`]: level, 'dark-mode': isDark }" 
    >
      <div class="qa-header" @click="toggleReveal">
        <div :class="badgeClass">问</div>
        <h3 class="question-title">{{ question }}</h3>
        <div 
          class="toggle-icon" 
          :class="{ 'is-open': isRevealed, 'dark-mode': isDark }"
          :title="isRevealed ? '收起' : '展开'"
        >
          {{ isRevealed ? '−' : '+' }}
        </div>
      </div>
      <div v-show="isRevealed" class="qa-answer">
        <div class="answer-content">
          <slot></slot>
        </div>
      </div>
    </div>
  </div>
</template>

<style scoped>
.qa-container {
  margin: 1.5rem 0;
}

.qa-question {
  position: relative;
  border: 1px solid rgba(var(--vp-c-brand-rgb), 0.25);
  border-radius: 8px;
  box-shadow: 0 2px 8px rgba(0, 0, 0, 0.08), 0 0 1px rgba(0, 0, 0, 0.1);
  transition: all 0.2s;
  overflow: hidden;
}

.qa-question.dark-mode {
  border-color: rgba(var(--vp-c-brand-rgb), 0.3);
  box-shadow: 0 2px 10px rgba(0, 0, 0, 0.2), 0 0 2px rgba(0, 0, 0, 0.3);
}

.qa-question.is-open {
  box-shadow: 0 4px 12px rgba(0, 0, 0, 0.12), 0 0 2px rgba(0, 0, 0, 0.15);
  border-color: rgba(var(--vp-c-brand-rgb), 0.4);
}

.qa-question.is-open.dark-mode {
  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.25), 0 0 3px rgba(0, 0, 0, 0.4);
  border-color: rgba(var(--vp-c-brand-rgb), 0.5);
}

.qa-header {
  padding: 1rem;
  display: flex;
  align-items: center;
  background: linear-gradient(to right, rgba(var(--vp-c-brand-rgb), 0.1), rgba(var(--vp-c-brand-rgb), 0.04));
  cursor: pointer;
  border-bottom: 1px solid transparent;
  transition: background-color 0.2s;
}

.dark-mode .qa-header {
  background: linear-gradient(to right, 
    rgba(var(--vp-c-brand-rgb), 0.15), 
    rgba(var(--vp-c-brand-rgb), 0.05)
  );
}

.qa-question.is-open .qa-header {
  border-bottom-color: rgba(var(--vp-c-brand-rgb), 0.2);
}

.qa-header:hover {
  background: linear-gradient(to right, rgba(var(--vp-c-brand-rgb), 0.15), rgba(var(--vp-c-brand-rgb), 0.06));
}

.dark-mode .qa-header:hover {
  background: linear-gradient(to right, 
    rgba(var(--vp-c-brand-rgb), 0.2), 
    rgba(var(--vp-c-brand-rgb), 0.08)
  );
}

.question-badge {
  display: flex;
  align-items: center;
  justify-content: center;
  min-width: 26px;
  height: 26px;
  border-radius: 4px;
  background-color: var(--vp-c-brand);
  color: white;
  font-size: 0.75rem;
  font-weight: bold;
  margin-right: 12px;
  box-shadow: 0 2px 4px rgba(var(--vp-c-brand-rgb), 0.4), 0 0 1px rgba(0, 0, 0, 0.1);
}

.question-badge.dark-mode {
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.3), 0 0 2px rgba(var(--vp-c-brand-rgb), 0.6);
  background-color: rgba(var(--vp-c-brand-rgb), 0.85);
}

.question-badge.level-easy {
  background-color: #4caf50;
  box-shadow: 0 2px 4px rgba(76, 175, 80, 0.4), 0 0 1px rgba(0, 0, 0, 0.1);
}

.question-badge.level-easy.dark-mode {
  background-color: rgba(76, 175, 80, 0.85);
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.3), 0 0 2px rgba(76, 175, 80, 0.6);
}

.question-badge.level-medium {
  background-color: #ff9800;
  box-shadow: 0 2px 4px rgba(255, 152, 0, 0.4), 0 0 1px rgba(0, 0, 0, 0.1);
}

.question-badge.level-medium.dark-mode {
  background-color: rgba(255, 152, 0, 0.85);
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.3), 0 0 2px rgba(255, 152, 0, 0.6);
}

.question-badge.level-hard {
  background-color: #f44336;
  box-shadow: 0 2px 4px rgba(244, 67, 54, 0.4), 0 0 1px rgba(0, 0, 0, 0.1);
}

.question-badge.level-hard.dark-mode {
  background-color: rgba(244, 67, 54, 0.85);
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.3), 0 0 2px rgba(244, 67, 54, 0.6);
}

.question-badge.level-tip {
  background-color: var(--vp-c-brand);
}

.question-badge.level-tip.dark-mode {
  background-color: rgba(var(--vp-c-brand-rgb), 0.85);
}

.question-title {
  margin: 0;
  font-size: 1rem;
  font-weight: 500;
  color: var(--vp-c-text-1);
  flex: 1;
}

.toggle-icon {
  width: 26px;
  height: 26px;
  display: flex;
  align-items: center;
  justify-content: center;
  border-radius: 50%;
  font-size: 1.2rem;
  font-weight: bold;
  color: var(--vp-c-brand);
  background-color: rgba(var(--vp-c-brand-rgb), 0.1);
  transition: transform 0.2s;
  margin-left: 12px;
  border: 1px solid rgba(var(--vp-c-brand-rgb), 0.2);
}

.toggle-icon.dark-mode {
  background-color: rgba(var(--vp-c-brand-rgb), 0.15);
  border-color: rgba(var(--vp-c-brand-rgb), 0.3);
  color: rgba(var(--vp-c-brand-rgb), 0.9);
}

.toggle-icon:hover {
  background-color: rgba(var(--vp-c-brand-rgb), 0.2);
}

.toggle-icon.dark-mode:hover {
  background-color: rgba(var(--vp-c-brand-rgb), 0.25);
}

.toggle-icon.is-open {
  transform: rotate(180deg);
}

.qa-answer {
  background-color: var(--vp-c-bg);
}

.answer-content {
  padding: 1.25rem;
  border-top: 1px solid rgba(var(--vp-c-brand-rgb), 0.15);
}

.dark-mode .answer-content {
  border-top-color: rgba(var(--vp-c-brand-rgb), 0.25);
}

.level-easy {
  border-color: rgba(76, 175, 80, 0.4);
}

.level-easy.dark-mode {
  border-color: rgba(76, 175, 80, 0.5);
}

.level-easy.is-open {
  border-color: rgba(76, 175, 80, 0.6);
  box-shadow: 0 4px 12px rgba(76, 175, 80, 0.1), 0 0 2px rgba(76, 175, 80, 0.2);
}

.level-easy.is-open.dark-mode {
  border-color: rgba(76, 175, 80, 0.7);
  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.25), 0 0 3px rgba(76, 175, 80, 0.3);
}

.level-easy .qa-header {
  background: linear-gradient(to right, rgba(76, 175, 80, 0.1), rgba(76, 175, 80, 0.04));
}

.level-easy.dark-mode .qa-header {
  background: linear-gradient(to right, rgba(76, 175, 80, 0.15), rgba(76, 175, 80, 0.05));
}

.level-easy .qa-header:hover {
  background: linear-gradient(to right, rgba(76, 175, 80, 0.15), rgba(76, 175, 80, 0.06));
}

.level-easy.dark-mode .qa-header:hover {
  background: linear-gradient(to right, rgba(76, 175, 80, 0.2), rgba(76, 175, 80, 0.08));
}

.level-easy .toggle-icon {
  color: #4caf50;
  background-color: rgba(76, 175, 80, 0.1);
  border-color: rgba(76, 175, 80, 0.3);
}

.level-easy .toggle-icon.dark-mode {
  background-color: rgba(76, 175, 80, 0.15);
  border-color: rgba(76, 175, 80, 0.4);
  color: rgba(76, 175, 80, 0.9);
}

.level-easy .qa-question.is-open .qa-header {
  border-bottom-color: rgba(76, 175, 80, 0.2);
}

.level-easy.dark-mode .qa-question.is-open .qa-header {
  border-bottom-color: rgba(76, 175, 80, 0.3);
}

.level-easy .answer-content {
  border-top-color: rgba(76, 175, 80, 0.15);
}

.level-easy.dark-mode .answer-content {
  border-top-color: rgba(76, 175, 80, 0.25);
}

.level-medium {
  border-color: rgba(255, 152, 0, 0.4);
}

.level-medium.dark-mode {
  border-color: rgba(255, 152, 0, 0.5);
}

.level-medium.is-open {
  border-color: rgba(255, 152, 0, 0.6);
  box-shadow: 0 4px 12px rgba(255, 152, 0, 0.1), 0 0 2px rgba(255, 152, 0, 0.2);
}

.level-medium.is-open.dark-mode {
  border-color: rgba(255, 152, 0, 0.7);
  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.25), 0 0 3px rgba(255, 152, 0, 0.3);
}

.level-medium .qa-header {
  background: linear-gradient(to right, rgba(255, 152, 0, 0.1), rgba(255, 152, 0, 0.04));
}

.level-medium.dark-mode .qa-header {
  background: linear-gradient(to right, rgba(255, 152, 0, 0.15), rgba(255, 152, 0, 0.05));
}

.level-medium .qa-header:hover {
  background: linear-gradient(to right, rgba(255, 152, 0, 0.15), rgba(255, 152, 0, 0.06));
}

.level-medium.dark-mode .qa-header:hover {
  background: linear-gradient(to right, rgba(255, 152, 0, 0.2), rgba(255, 152, 0, 0.08));
}

.level-medium .toggle-icon {
  color: #ff9800;
  background-color: rgba(255, 152, 0, 0.1);
  border-color: rgba(255, 152, 0, 0.3);
}

.level-medium .toggle-icon.dark-mode {
  background-color: rgba(255, 152, 0, 0.15);
  border-color: rgba(255, 152, 0, 0.4);
  color: rgba(255, 152, 0, 0.9);
}

.level-medium .qa-question.is-open .qa-header {
  border-bottom-color: rgba(255, 152, 0, 0.2);
}

.level-medium.dark-mode .qa-question.is-open .qa-header {
  border-bottom-color: rgba(255, 152, 0, 0.3);
}

.level-medium .answer-content {
  border-top-color: rgba(255, 152, 0, 0.15);
}

.level-medium.dark-mode .answer-content {
  border-top-color: rgba(255, 152, 0, 0.25);
}

.level-hard {
  border-color: rgba(244, 67, 54, 0.4);
}

.level-hard.dark-mode {
  border-color: rgba(244, 67, 54, 0.5);
}

.level-hard.is-open {
  border-color: rgba(244, 67, 54, 0.6);
  box-shadow: 0 4px 12px rgba(244, 67, 54, 0.1), 0 0 2px rgba(244, 67, 54, 0.2);
}

.level-hard.is-open.dark-mode {
  border-color: rgba(244, 67, 54, 0.7);
  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.25), 0 0 3px rgba(244, 67, 54, 0.3);
}

.level-hard .qa-header {
  background: linear-gradient(to right, rgba(244, 67, 54, 0.1), rgba(244, 67, 54, 0.04));
}

.level-hard.dark-mode .qa-header {
  background: linear-gradient(to right, rgba(244, 67, 54, 0.15), rgba(244, 67, 54, 0.05));
}

.level-hard .qa-header:hover {
  background: linear-gradient(to right, rgba(244, 67, 54, 0.15), rgba(244, 67, 54, 0.06));
}

.level-hard.dark-mode .qa-header:hover {
  background: linear-gradient(to right, rgba(244, 67, 54, 0.2), rgba(244, 67, 54, 0.08));
}

.level-hard .toggle-icon {
  color: #f44336;
  background-color: rgba(244, 67, 54, 0.1);
  border-color: rgba(244, 67, 54, 0.3);
}

.level-hard .toggle-icon.dark-mode {
  background-color: rgba(244, 67, 54, 0.15);
  border-color: rgba(244, 67, 54, 0.4);
  color: rgba(244, 67, 54, 0.9);
}

.level-hard .qa-question.is-open .qa-header {
  border-bottom-color: rgba(244, 67, 54, 0.2);
}

.level-hard.dark-mode .qa-question.is-open .qa-header {
  border-bottom-color: rgba(244, 67, 54, 0.3);
}

.level-hard .answer-content {
  border-top-color: rgba(244, 67, 54, 0.15);
}

.level-hard.dark-mode .answer-content {
  border-top-color: rgba(244, 67, 54, 0.25);
}

.level-tip {
  border-color: rgba(var(--vp-c-brand-rgb), 0.4);
}

.level-tip.dark-mode {
  border-color: rgba(var(--vp-c-brand-rgb), 0.5);
}

.level-tip.is-open {
  border-color: rgba(var(--vp-c-brand-rgb), 0.6);
}

.level-tip.is-open.dark-mode {
  border-color: rgba(var(--vp-c-brand-rgb), 0.7);
}
</style> 