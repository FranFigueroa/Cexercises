int tarea(int);
int main(void){
    pid_t pid, pidTater;
    int status1 = 0, status2 = 0, status3 = 0; /*(PID) identificador de proceso*/
    pid=fork();

    if (pid == 0){
        pid = fork();
        if (pid>0){  /*la funcion pid ==0 si se trata del proceso hijo. Por lo que verificamos que se trate de este*/
            pid = fork();
            if (pid == 0 )
                exit(tarea(gptpid()));
                else{
                    pidTer = ----------------------------------;
                    printf("termino %d informa %d\n",pidTer,status1/256);
                    pidTer = ----------------------------------;
                    printf("termino %d informa %d\n",pidTer,status2/256);
                    exit(status1 && status2);
                }
        }  else exit(tarea(getpid()));
 } else {
 if (pid > 0 ) {
 pidTer = --------------------------------;
 printf("termino %d informa %d\n",pidTer,status3/256);
 }
 }
 exit(pid);
}
int tarea(int num) {
 printf("tarea %d \n",num);
 return num / 2000 ;
}

    