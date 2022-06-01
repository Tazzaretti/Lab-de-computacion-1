#include <stdio.h>
#include <stdlib.h>


int main(){

    int num1, num2;
    int opcion;

    printf("Ingrese el primer numero: \n");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: \n");
    scanf("%d",&num2);

    printf("\nSeleccione una opcion:\n 1.informar su suma\n 2.informar su resta\n 3.informar su multiplicacion\n 4.informar su division\n 5.informar si los numeros son par o impar\n 6.salir\n");
    scanf("%d",&opcion);
    
    float numero1, numero2;
    numero1 = num1;
    numero2 = num2;

    switch (opcion){
        case 1:{
            printf("La suma es: %d\n",(num1+num2));
            break;
        }
        case 2:{
            printf("La resta es: %d\n",(num1-num2));
            break;
        }
        case 3:{
            printf("Su multiplicacion es: %f\n", (numero1*numero2));
            break;
        }
        case 4:{
            printf("Su division es: %f\n", (numero1/numero2));
            break;
        }
        case 5:{
            if (num1%2 == 0){
                printf("El primer numero es par\n");
            }
            else{
                printf("El primer numero es impar\n");
            }

            if (num2%2 == 0){
                printf("El segundo numero es par\n");
            }
            else{
                printf("El segundo numero es impar\n");
            }
            break;
        }
        case 6:{
            printf("Ha salido del programa\n");
            break;
        }
        default:{
            printf("Opcion incorrecta\n");
        }
    }
    system("pause");
    return 0;




}