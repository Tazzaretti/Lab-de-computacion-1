#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;

    printf("Ingrese el numero: ");
    scanf("%d", &num1);

    if (num1 == 0){
        printf("El numero es cero\n");
    }
    else if(num1 % 2 == 0){
        printf("El numero es par\n");
    }
    else{
            printf("El numero es impar\n");
    }
    system("pause");
    return 0;


}