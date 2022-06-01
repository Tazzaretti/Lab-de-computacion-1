#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float lado1=0, lado2=0;
    float suma=0, resta=0, producto=0;

    printf("ingrese lado 1");
    scanf("%f", &lado1);
    printf("ingrese lado 2: ");
    scanf("%f", &lado2);

    suma = lado1 + lado2;
    printf("La suma es: %f\n", suma);

    producto = lado1 * lado2;
    printf("El producto es: %f\n", producto);

    resta = lado1 - lado2;
    printf("La resta es: %f\n", resta);

    system("pause");
    return 0;
}