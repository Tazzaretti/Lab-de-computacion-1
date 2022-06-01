#include <stdio.h>
#include <stdlib.h>

int main(){

    float promedioA, promedioT, nota; 
    int cantAlumnos, cantParciales, contador, contador1, otraVez;
    contador = 1;
    contador1 = 1;
    otraVez = 1;
    promedioA = 0;
    promedioT = 0;




    while (otraVez == 1){

        printf("\nIngrese la cantidad de alumnos: ");
        scanf("%d", &cantAlumnos);

        if (cantAlumnos > 0){

            printf("\nIngrese la cantidad de parciales: ");
            scanf("%d", &cantParciales);

            if (cantParciales>0){

                while (cantAlumnos>=contador1){

                    while (contador<=cantParciales){

                        printf("Ingrese nota %d del alumno %d: \n", contador, contador1);
                        scanf("%f", &nota);

                        if ((nota < 1) && (nota >10)){

                            printf("\nNota mal ingresada\n");

                        }
                        else{


                            promedioA = ((promedioA + nota)/contador);
                            printf("Promedio: %f\n", promedioA);
                            contador = contador + 1;

                        }
                    }

                promedioT = (promedioT + promedioA);
                promedioA = 0;
                contador1 = contador1 + 1;
                contador = 1;
                }
            }
            else{
                printf("\nCantidad de parciales mal ingresada");
            }
            printf("\nEl promedio total del curso es: %f", (promedioT/(contador1-1)));

            contador1 = 1;

        }
        else{
            printf("\nCantidad de alumnos mal ingresada");
        }
        printf("\nSi desea continuar ingrese 1, sino cualquier caracter");
        scanf("%d", &otraVez);
    }


    system("pause");
    return 0;
}