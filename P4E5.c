#include <stdio.h>
#include <stdlib.h>

int main(){

    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    while (intentos <= 3){

        printf("ingrese el dni del alumno: ");
        scanf("%d", &dniIngresado);
        
        if (dniIngresado == 38632584){

            printf("La nota del alumno es: %f", nota);
            intentos = 4;
        }
        else{
            printf("intento %d de 3 fallido", intentos);
            intentos = intentos + 1;
        }
    }

    system("pause");
    return 0;



}