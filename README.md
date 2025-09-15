# C++ 课堂代码

## 目录结构说明

- 当天写的所有代码，放在以日期命名文件夹中<br/>
- `cpp文件名` 可以自行决定，如 `app1` ，`question1` 等
- 老师日期和你们不一样，看课程主题可找对应代码

```text
coke-cc/
├── CMakeLists.txt    cmake配置文件
└── 09-13/            9月13号写的代码文件
    ├── app1.cpp
    ├── ...
    └── 递归实战.md    课程主题及笔记文件
```

## 编译说明

- 修改 `CMakeLists.txt` 文件，然后重新加载该文件即可
- 推荐使用 插件 简化操作
- 推荐只编译当天写的代码文件

```cmake
// 指定哪些源文件要编译为exe可执行程序
add_executable(app1 09-13/app1.cpp)
add_executable(app2 09-13/app2.cpp)
add_executable(app3 09-13/app3.cpp)
```