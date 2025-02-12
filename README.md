# linux

## CMake
```bash
sudo apt update
sudo apt install cmake
cmake --version
```

## gcc

```bash
gcc --version
gcc main.c -o testfork
```

```bash
# 安装32位硬浮点ARM交叉编译工具链
sudo apt-get install gcc-arm-linux-gnueabihf
arm-linux-gnueabihf-gcc --version
arm-linux-gnueabihf-gcc main.c -o testfork_armhf
```

```bash
# 安装32位软浮点ARM交叉编译工具链
sudo apt-get install gcc-arm-linux-gnueabi
arm-linux-gnueabi-gcc --version
arm-linux-gnueabi-gcc main.c -o testfork_arm
```

```bash
# 安装64位ARM交叉编译工具链
sudo apt-get install gcc-aarch64-linux-gnu
aarch64-linux-gnu-gcc --version
aarch64-linux-gnu-gcc main.c -o testfork_arm64
```

## CMake交叉编译
```bash
# 安装64位ARM交叉编译工具链
cmake -DCMAKE_TOOLCHAIN_FILE=../aarch64-toolchain.cmake ..
```

## gdb
```bash
sudo apt install gdb
gdb --version
```

CMake 工程支持调试
```bash
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```

```bash
# 普通模式
gdb ./your_executable
# 用户界面TUI模式
gdb -tui ./your_executable
break main
run
```
### 调试
next (或 n): 执行下一行代码（不进入函数）。  
step (或 s): 执行下一行代码（进入函数）。  
continue (或 c): 继续执行直到下一个断点。  
print (或 p): 打印变量的值。  
backtrace (或 bt): 显示当前的调用栈。  
quit (或 q): 退出 GDB。  
### 其他有用的GDB命令
info breakpoints: 查看所有断点。  
delete breakpoints: 删除所有断点。  
list: 查看源代码。  
watch: 监视变量的变化。
### 调试多线程程序
info threads: 查看所有线程。  
thread <thread_id>: 切换到指定线程。  
break <location> thread <thread_id>: 在指定线程的指定位置设置断点。  
