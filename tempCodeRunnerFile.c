#include <stdio.h>
#include <stdlib.h>


int main(){

    int precio=4600, dni, medpago, cuotas, tarjeta;

    printf("\n\nIngrese su DNI: \n");
    scanf("%d",&dni);

    if ((dni>1000000) && (dni<99999999)){
        printf("\n\nSeleccione medio de pago\n 1.Efectivo\n 2.Tarjeta\n");
        scanf("%d",&medpago);
        
        switch (medpago){
            case 1:{ 
                printf("\n\nDNI:%d\n",dni);
                printf("Metodo de pago: Efectivo.\n");
                printf("Total:$4600\n");
                break;
            }
            case 2:{
                printf("\n\nHa seleccionado pago con tarjeta, seleccione la tarjeta a utilizar: \n");
                printf("1.Visa\n2.American Express\n3.Mercado Pago\n4.Cabal\n");
                printf("Opcion: ");
                scanf("%d", &tarjeta);

                printf("\n\nSeleccione la cantidad de cuotas\n");
                printf("1.Unica cuota\n 2.Tres cuotas\n 3.Seis cuotas\n 4.Doce cuotas\n");
                printf("Opcion: \n");
                scanf("%d",&cuotas);
                
                printf("\n\nDNI: %d\n", dni);
                printf("Metodo de pago: Tarjeta\n");

                switch(tarjeta){
                    case 1:{
                        printf("Tarjeta: Visa\n");
                        break;
                    }
                    case 2:{
                        printf("Tarjeta: American Express\n");
                        break;
                    }
                    case 3:{
                        printf("Tarjeta: Mercado Pago\n");
                        break;
                    }
                    case 4:{
                        printf("Tarjeta: Cabal\n");
                        break;
                    }
                    default: {
                        printf("Opcion de tarjeta erronea, el programa se cerrara, comience de nuevo\n");
                        medpago = 0;
                        dni = 0;
                    }
                }


                if ((dni !=0) && (medpago!=0)){
                    switch(cuotas){
                        case 1:{
                            printf("Cuotas: 1 cuota\n");
                            printf("Total: $%d", precio);
                            break;
                        }
                        case 2:{
                            printf("Cuotas: 3 cuotas\n");
                            precio = precio + ((precio*4)/100);
                            printf("Total: $%d", precio);
                            break;
                        }
                        case 3:{
                            printf("Cuotas: 6 cuotas\n");
                            precio = precio + ((precio*8)/100);
                            printf("Total: $%d", precio);
                            break;
                        }
                        case 4:{
                            printf("Cuotas: 12 cuotas\n");
                            precio = precio + ((precio*8)/100);
                            printf("Total: $%d\n", precio);
                            break;
                        }
                        default:{
                            printf("\nSeleccion de cuotas erronea, el programa se cerrara, comience de nuevo\n");
                            dni = 0;
                            medpago = 0;
                        }
                    }
                }
                else{
                    printf("........");
                }

                }
            }
    }
    else{
        printf("Dni incorrecto\n");
    }

    system("pause");
    return 0;
}