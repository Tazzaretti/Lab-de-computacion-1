#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%d", &num3);

    if ((num1>num2) && (num1>num3)){
        printf("El mayor es el primero\n");
    }
    else if((num2>num1)&&(num2>num3)){
        printf("El mayor es el segundo\n");
    }
    else{
        printf("El mayor es el tercero\n");
    }
    system("pause");
    return 0;


}