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
        printf("child process id %d,parent id %d.\n", getpid(), getppid());
    } else {
        // 父进程
        wait(NULL);  // 等待子进程结束
        printf("parent process id %d,child id %d.\n", getpid(), pid);
    }

    return 0;
}
