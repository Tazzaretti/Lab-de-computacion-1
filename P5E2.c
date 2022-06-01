#include <stdio.h>
#include <stdlib.h>

int main(){

    int arreglo[5] = {3,6,4,5,2};
    int i, acumulador = 0;

    for(i=0; i<=4; i++){

        acumulador = acumulador + arreglo[i];

    }

    printf("La suma de los numeros en el arreglo es: %d\n", acumulador);
    printf("El promedio es: %d\n", acumulador/5);

    system("pause");
    return(0);
}