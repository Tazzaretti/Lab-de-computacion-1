#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;

    printf("Ingrese el numero: ");
    scanf("%d", &num1);

    if (num1>0){
        printf("El numero es positivo\n");
    }
    else if(num1==0){
               printf("El numero es nulo\n");
    }
    else{
            printf("El numero es negativo\n");
    }
    system("pause");
    return 0;


}