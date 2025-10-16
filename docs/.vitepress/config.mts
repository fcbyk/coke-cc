import { defineConfig } from 'vitepress'
import search from './configs/search'
import sidebar from './configs/sidebar'

export default defineConfig({

  title: "可乐 C++",

  head: [['link', { rel: 'icon', type: "image/svg+xml", href: '/favicon.svg' }]],

  cleanUrls: true,

  themeConfig: {

    logo: '/favicon.svg',

    outline: [2, 3],

    nav: [
      {
        text: '课堂代码',
        items: [
          { text: 'GitHub', link: 'https://github.com/fcbyk/coke-cc' },
          { text: 'Gitee', link: 'https://gitee.com/fcbyk/coke-cc' },
        ]
      }
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

    search,

    socialLinks: [
      { icon: 'github', link: 'https://github.com/fcbyk/coke-cc-notes' }
    ],
  },
  markdown:{
    lineNumbers: true
  }

})
