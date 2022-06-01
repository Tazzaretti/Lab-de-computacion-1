#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, i, suma=0;

    printf("Ingrese el numero para conocer su tabla: ");
    scanf("%d", &numero);

    printf("******* Tabla del %d *******", numero);

    for (i=1; i<=10 ; i++){

        printf("\n%d * %d = %d \n" ,numero, i, numero*i);
    }


    system("pause");
    return 0;




}