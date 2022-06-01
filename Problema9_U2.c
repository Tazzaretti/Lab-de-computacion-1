#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura;
    printf("Ingrese la altura: \n");
    scanf("%i",&altura);

    if (altura<=0){
        printf("Altura erronea\n");
    }
    else if((altura <= 150) && (altura>0)){

        printf("Persona con altura por debajo de la media\n");
    }    
    else if((altura>150) && (altura<=170)){

        printf("Persona de altura media\n");
    }
    else{

        printf("Persona con altura por encima de la media\n");
    }
    system("pause");
    return 0;

}