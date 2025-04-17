import { defineConfig } from 'vitepress'
import search from './configs/search'
import sidebar from './configs/sidebar'

export default defineConfig({

  title: "可乐老师 C++",

  head: [['link', { rel: 'icon', type: "image/svg+xml", href: '/favicon.svg' }]],

  cleanUrls: true,

  themeConfig: {

    logo: '/favicon.svg',

    outline: [2, 3],

    nav: [
      { text: '思维导图', link: 'https://www.yuque.com/fcbyk/coke/bg7fvqckefgngy1f' },
    ],

    sidebar,

    darkModeSwitchLabel: "夜间模式",
    sidebarMenuLabel: "文档",
    returnToTopLabel: "返回顶部",
    outlineTitle: "目录",

    docFooter: {
      prev: '上一篇',
      next: '下一篇'
    },

    search
  }
})
