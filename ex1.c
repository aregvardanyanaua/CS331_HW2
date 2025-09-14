#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed\n");
        return 1;
    } else if (pid == 0) {
        execl("/bin/ls", "ls", NULL);
        perror("execl failed\n");
    } else {
        wait(NULL);
        printf("Parent process done\n");
    }
    return 0;
}
