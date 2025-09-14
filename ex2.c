#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t child1, child2;

    child1 = fork();
    if (child1 == 0) {
        execl("/bin/ls", "ls", NULL);
        perror("execl failed");
        return 1;
    }

    child2 = fork();
    if (child2 == 0) {
        execl("/bin/date", "date", NULL);
        perror("execl failed");
        return 1;
    }

    wait(NULL);
    wait(NULL);

    printf("Parent process done\n");
    return 0;
}
