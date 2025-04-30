<script setup>
import { computed } from 'vue'

const props = defineProps({
  type: {
    type: String,
    default: 'tip'
  },
  text: {
    type: String,
    default: ''
  },
  vertical: {
    type: String,
    default: 'top'
  }
})

const classes = computed(() => {
  return [
    'vp-badge',
    props.type && `vp-badge--${props.type}`,
    props.vertical && `vp-badge--vertical-${props.vertical}`
  ]
})

const badgeText = computed(() => {
  if (props.text) return props.text
  
  switch (props.type) {
    case 'easy':
      return '简单'
    case 'medium':
      return '中等'
    case 'hard':
      return '困难'
    case 'tip':
      return '提示'
    default:
      return ''
  }
})
</script>

<template>
  <span class="vp-badge-container">
    <span :class="classes">{{ badgeText }}</span>
    <slot></slot>
  </span>
</template>

<style scoped>
.vp-badge-container {
  position: relative;
  display: inline-block;
}

.vp-badge {
  display: inline-block;
  font-size: 0.6em;
  line-height: 1.5;
  padding: 0.25em 0.75em;
  border-radius: 1em;
  margin-left: 0.5em;
  margin-right: 0.5em;
  color: var(--vp-c-bg);
  white-space: nowrap;
}

.vp-badge--easy {
  background-color: #4caf50; /* 绿色 - 简单 */
}

.vp-badge--medium {
  background-color: #ff9800; /* 橙色 - 中等 */
}

.vp-badge--hard {
  background-color: #f44336; /* 红色 - 困难 */
}

.vp-badge--tip {
  background-color: var(--vp-c-brand); /* 使用主题颜色 */
}

.vp-badge--vertical-top {
  vertical-align: top;
}

.vp-badge--vertical-middle {
  vertical-align: middle;
}

.vp-badge--vertical-bottom {
  vertical-align: bottom;
}
</style> 