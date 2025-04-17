import DefaultTheme from 'vitepress/theme'
import PasswordProtected from '../components/PasswordProtected.vue'
import RunningResult from '../components/RunningResult.vue'
import type { EnhanceAppContext } from 'vitepress'


export default {
  ...DefaultTheme,
  enhanceApp(ctx: EnhanceAppContext) {
    DefaultTheme.enhanceApp(ctx)
    ctx.app.component('PasswordProtected', PasswordProtected)
    ctx.app.component('RunningResult', RunningResult)
  }
}