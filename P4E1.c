#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont;

    printf("Se imprimiran los numeros del 1 al 100\n");
    cont = 1;

    while (cont<=100){
        printf("%d  ", cont);

        cont = cont + 1;
    }
    system("pause");
    return 0;
}