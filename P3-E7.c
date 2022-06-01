#include <stdio.h>
#include <stdlib.h>

int main(){

    int cantidad, i, suma=0;

    cantidad = 20;

    for (i=1; i<=cantidad ; i++){

        if(i%2 != 0){
            printf("%d\n",i);
            suma = suma + i;
        }
    }

    printf("\nLa suma es: %d\n", suma);

    system("pause");
    return 0;




}