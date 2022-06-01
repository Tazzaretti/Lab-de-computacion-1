#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, descuento;


    printf("Ingrese el valor de la compra: ");
    scanf("%f", &valor);

    if (valor <= 0){
        printf("Valor erroneo\n");
    }
    else if(valor >= 100000){
        descuento = ((valor*15)/100);
        valor = (valor - ((valor*15)/100));
        printf("El descuento aplicado es de: %f \n" ,descuento);
        printf("Los Valor final de la compra es: %f\n" ,valor);
    }
    else{
        descuento = ((valor*10)/100);
        valor = valor - ((valor*10)/100);
        printf("El descuento aplicado es de: %f\n",descuento);
        printf("El valor final de la compra es: %f \n",valor);
    }
    system("pause");
    return 0;


}