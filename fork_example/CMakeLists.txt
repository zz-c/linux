cmake_minimum_required(VERSION 3.10)
project(ForkExample C)
# 设置 C 标准版本
set(CMAKE_C_STANDARD 99)
add_executable(fork_example main.c)
# 强制 CMake 使用 C 编译器
#set(CMAKE_C_COMPILER gcc)