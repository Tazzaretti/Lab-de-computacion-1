#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,x;

    for (i=1; i<=10 ; i++){

        printf("\n\nTabla del %d: ", i);

        for (x=1 ; x<=9 ; x++){

            printf("\n%d * %d = %d \n",i ,x ,i*x );
        }
    }


    system("pause");
    return 0;




}