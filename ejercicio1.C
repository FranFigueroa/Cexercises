/*Dados dos números enteros, determinar cuál es el número mayor.*/

#include <stdio.h>

int main(){
        int num1,num2;

        printf("introduce el primer numero: ");
        scanf("%d", &num1);

        printf("introduce el segundo numero: ");
        scanf("%d",%num2);

        if(num1>num2){
            printf("%d es el numero mayor.",num1);
        }
        else if(num2>num1){
            printf("%d es el numero menor.",num2);
        }
        else{
            printf("Los dos numeros son iguales.")
        }
        return 0;

}