#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota;
    
    printf("ingrese la nota del alumno: \n");
    scanf("%d",&nota);

    switch(nota){
        case 1:
        case 2:
        case 3:{
            printf("Desaprobado\n");
            break;
        }
        case 4:
        case 5:{
            printf("Aprobado\n");
            break;
        }
        case 6:
        case 7:{
            printf("Notable\n");
            break;
        }
        case 8:
        case 9:{
            printf("Sobresaliente\n");
            break;
        }
        case 10:{
            printf("Matricula de honor\n");
            break;
        }
        default
         :{
            printf("Nota erronea\n");
            break;
        }
    }
    system("pause");
    return 0;




}