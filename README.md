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