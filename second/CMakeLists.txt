# CMake构建工具 配置文件

# 指定构建该项目所需的最低 CMake版本(3.17)
cmake_minimum_required(VERSION 3.17)

# 定义项目名称为 CokeCC
project(first)

# 设置 C++ 标准，即用哪个版本的编译器
set(CMAKE_CXX_STANDARD 14)

add_executable(app1 unit41-nov/app1.cpp)
add_executable(app2 unit41-nov/app2.cpp)
add_executable(app3 unit41-nov/app3.cpp)
add_executable(app4 unit41-nov/app4.cpp)