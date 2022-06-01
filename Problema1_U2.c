#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1>num2){
        printf("El mayor es el primero\n");
    }
    else if(num1==num2){
               printf("Los numeros son iguales\n");
    }
    else{
            printf("El numero mayor es el segundo\n");
    }
    system("pause");
    return 0;


}