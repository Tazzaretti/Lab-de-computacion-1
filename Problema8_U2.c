#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldofinal, retiro;
    int saldoinicial = 10000;

    printf("Ingrese el monto a retirar: \n");
    scanf("%d", &retiro);
    
    if (retiro > 0){
        if (saldoinicial > retiro){
            saldofinal = saldoinicial - retiro;
            saldoinicial = saldofinal;
            printf("Se han retirado $%d y el saldo final es de %d\n",retiro,saldofinal);
        }
        else if(saldoinicial == retiro){
            printf("Se han retirado el total del dinero de la cuenta\n");
            saldoinicial = 0;
        }
        else{
        printf("El saldo es insuficiente\n");
        }
    }
    else{
        printf("Valor incorrecto\n");
    }
    system("pause");
    return 0;


}