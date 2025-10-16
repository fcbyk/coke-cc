
---

<CCollapseGroup>

<CCollapse title="什么是 CMake？">

**`CMake`** 就是个 **`传话小助手`**

你写好编译要求 **`CMakeLists.txt`**，它立马跑去喊编译器（比如 **`gcc`**、**`clang`**）来干活

有了 **`CMake`**，就不用自己敲复杂得终端命令去编译 **`C++代码文件`**

</CCollapse>

<CCollapse title="CMakeLists.txt 需要掌握基本语法？">

> - 写​​需要重点掌握 `add_executable` 的语法
> - CMakeLists.txt 中的 ​`​配置指令不区分大小写`

```cmake
# 以#号开头的是注释

# 设置 CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 定义项目名称
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

# 把当前文件夹的source1.cpp 和 source2.cpp 编译为 app1.exe
add_executable(app1 source1.cpp source2.cpp)

# 把src文件夹的source3.cpp 编译为 app2.exe
add_executable(app2 src/source3.cpp)
```

<template #extra>
    <CBadge text="重点" variant="outline" color="#ff4d4f" />
</template>

</CCollapse>


</CCollapseGroup>