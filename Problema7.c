#include <stdio.h>
#include <stdlib.h>

int main(){

    float sueldo=0, horas=0, total=0;

    printf("ingrese el monto por hora: ");
    scanf("%f", &sueldo);
    printf("ingrese horas trabajadas: ");
    scanf("%f", &horas);

    total = sueldo * horas;
    printf("El total a cobrar es: %f", total);




    system("pause");
    return 0;
}