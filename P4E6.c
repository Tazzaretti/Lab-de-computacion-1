#include <stdio.h>
#include <stdlib.h>


int main(){

    int contador = 0, decision = 1;
    float nota, sumaNotas = 0;

    while (decision == 1){

        printf("\ningrese nota: ");
        scanf("%f", &nota);

        sumaNotas = sumaNotas + nota;

        printf("\nSi desea continuar ingresando notas ingrese 1, sino cualquier caracter: ");
        scanf("%d", &decision);

        contador = contador + 1;
    }

    printf("\nEl promedio es: %f", (sumaNotas/(contador)));
    printf("\nLa suma es: %f", sumaNotas);

    system("pause");
    return 0;
}