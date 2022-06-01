#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    if (num1>=6){
        printf("Aprobado\n");
    }
    else if(num1>=4){
               printf("Regular\n");
    }
    else{
            printf("Desaprobado\n");
    }
    system("pause");
    return 0;


}