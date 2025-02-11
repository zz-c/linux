# 设置目标系统
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# 指定交叉编译器
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
#set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# 设置编译器和链接器的标志
set(CMAKE_C_FLAGS "-march=armv8-a")
#set(CMAKE_CXX_FLAGS "-march=armv8-a")

# 设置库和头文件的搜索路径
set(CMAKE_FIND_ROOT_PATH /usr/aarch64-linux-gnu)

# 只在指定路径中查找库和头文件
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)