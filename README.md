## 目录结构

- 每节课写的所有代码，放在以 `第几课+日期` 命名文件夹中<br/>

```text
coke-cc/
├── docs              vitepress笔记文件
├── first             一期课程代码
└── second            二期课程代码
    ├── unit36-sep/   9月写的第36课代码文件夹
        ├── app361.cpp
        ├── ...
        └── 递归实战.md    课程主题及笔记文件
    ├── CMakeLists.txt     cmake配置文件
```

## 编译说明

- 修改 `CMakeLists.txt` 文件，然后重新加载该文件即可
- 推荐使用 CLion插件 简化操作
- 推荐只编译当天写的代码文件

```cmake
# 指定哪些源文件要编译为exe可执行程序
add_executable(app1 unit39-oct/app391.cpp)
add_executable(app2 unit39-oct/app392.cpp)
```