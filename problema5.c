#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double lado1=0, lado2=0;
    double perimetro = 0, superficie = 0, diagonal = 0, cuadrado=2;

    printf("ingrese lado base: ");
    scanf("%lf", &lado1);
    printf("ingrese lado altura: ");
    scanf("%lf", &lado2);

    diagonal = sqrt(pow(lado1, cuadrado) + pow(lado2, cuadrado));
    printf("la diagonal es: %lf \n", diagonal);

    perimetro = (lado1 + lado2) * 2;
    printf("El perimetro es: %lf\n", perimetro);

    superficie = lado1 * lado2;
    printf("La superficie es: %lf \n", superficie);

    system("pause");
    return 0;
}