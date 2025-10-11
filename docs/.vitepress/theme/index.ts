import DefaultTheme from 'vitepress/theme'
import PasswordProtected from '../components/PasswordProtected.vue'
import RunningResult from '../components/RunningResult.vue'
import ClearCache from '../components/ClearCache.vue'
import CokeUI from '@fcbyk/vue-ui'
import type { EnhanceAppContext } from 'vitepress'
import '@fcbyk/vue-ui/style.css'


export default {
  ...DefaultTheme,
  enhanceApp(ctx: EnhanceAppContext) {
    DefaultTheme.enhanceApp(ctx)
    ctx.app.component('PasswordProtected', PasswordProtected)
    ctx.app.component('RunningResult', RunningResult)
    ctx.app.component('ClearCache', ClearCache)
    // 注册组件库
    ctx.app.use(CokeUI)
  }
}