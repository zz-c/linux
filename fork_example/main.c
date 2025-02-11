#include <stdio.h>
#include <unistd.h> // fork() 和 exec() 系统调用需要的头文件
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // 错误处理
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {
        // 子进程
        printf("This is the child process.\n");
    } else {
        // 父进程
        wait(NULL);  // 等待子进程结束
        printf("This is the parent process.\n");
    }

    return 0;
}
