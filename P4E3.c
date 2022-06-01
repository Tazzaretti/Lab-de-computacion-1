#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont;
    float acumulador, numero;

    cont = 0;
    numero = 0;

    while (cont<=10){

        printf("Ingrese un numero real:  ");
        scanf("%f",&numero);
        
        while ( numero <=0){

            printf("Reingrese un numero real mayor a 0:  ");
            scanf("%f", &numero);
        }
        
        acumulador = acumulador + numero;

        cont = cont + 1;
    }
    
    printf("La suma de los valores ingresados es: %f\n", acumulador);

    system("pause");
    return 0;
}