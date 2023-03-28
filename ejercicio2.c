#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int tarea(int);
int main(int argc , char *argv[]) {
 pid_t pid , pidTer;
 int status = 0 ;
 int np = atoi(argv[1]);
 while(np) {
 pid = fork();
 np -- ;
 if (pid == 0 ) exit(tarea(getpid()));
 }
 // Aquí el alumno tiene que escribir el código para que no existan
procesos zombies ni
 //huérfanos indicando para cada hijo PID y ESTADO DE TERMINACION.
…
…
…
…
 exit(0);
}
int tarea(int num) {
 sleep(1);
 printf("tarea %d \n",num);
 return num % 2;
}