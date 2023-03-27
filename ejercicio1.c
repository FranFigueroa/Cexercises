#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int tarea(int);

int main(void) {
    pid_t pid, pidTer;
    int status1 = 0, status2 = 0, status3 = 0;
    pid = fork();
    if (pid == 0) {
        pid = fork();
        if (pid > 0) {
            pid = fork();
            if (pid == 0) {
                exit(tarea(getpid()));
            } else {
                pidTer = pid;
                waitpid(pidTer, &status1, 0);
                printf("termino %d informa %d\n", pidTer, status1/256);
                exit(status1);
            }
        } else {
            exit(tarea(getpid()));
        }
    } else {
        if (pid > 0) {
            pidTer = pid;
            waitpid(pidTer, &status2, 0);
            printf("termino %d informa %d\n", pidTer, status2/256);
        }
    }
    exit(pid);
}

int tarea(int num) {
    printf("tarea %d \n", num);
    return num / 2000;
}