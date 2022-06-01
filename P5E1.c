#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int arreglo[5] = {6,7,2,4,3};

    for(i=4; i>=0; i--){

        printf("\nindice: %d - valor: %d\n", i, arreglo[i]);

    }
    system("pause");
    return 0;
}