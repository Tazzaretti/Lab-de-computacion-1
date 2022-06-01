#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float horas=0, total=0;
    const int sueldo = 800;

    printf("ingrese horas trabajadas: ");
    scanf("%f", &horas);

    total = sueldo * horas;
    printf("El total a cobrar es: %f", total);




    system("pause");
    return 0;
}