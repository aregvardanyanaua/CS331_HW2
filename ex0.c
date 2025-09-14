#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    printf("Start: PID=%d, ParentPID=%d\n", getpid(), getppid());

    pid_t pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1: PID=%d, ParentPID=%d\n", getpid(), getppid());
    }

    pid_t pid2 = fork();
    if (pid2 == 0) {
        printf("Child 2: PID=%d, ParentPID=%d\n", getpid(), getppid());
    }

    pid_t pid3 = fork();
    if (pid3 == 0) {
        printf("Child 3: PID=%d, ParentPID=%d\n", getpid(), getppid());
    }

    return 0;
}
