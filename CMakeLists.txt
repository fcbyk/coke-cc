# CMake构建工具 配置文件

# 指定构建该项目所需的最低 CMake版本(3.17)
cmake_minimum_required(VERSION 3.17)

# 定义项目名称为 CokeCC
project(CokeCC)

# 设置 C++ 标准，即用哪个版本的编译器
set(CMAKE_CXX_STANDARD 14)

# 添加一个名为 app1 的可执行文件
add_executable(app1 09-27/app1.cpp)
add_executable(app2 09-27/app2.cpp)
add_executable(app3 09-27/app3.cpp)
add_executable(app4 09-27/app4.cpp)
add_executable(app5 09-27/app5.cpp)