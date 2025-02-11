#include <iostream>
#include <unistd.h>  // for fork(), getpid(), getppid()

int main() {
    pid_t pid = fork();

    if (pid == -1) {
        // fork()失败
        std::cerr << "Fork failed!" << std::endl;
        return 1;
    } else if (pid > 0) {
        // 父进程
        std::cout << "Parent process, PID: " << getpid() << ", child PID: " << pid << std::endl;
    } else {
        // 子进程
        std::cout << "Child process, PID: " << getpid() << ", parent PID: " << getppid() << std::endl;
    }

    return 0;
}

