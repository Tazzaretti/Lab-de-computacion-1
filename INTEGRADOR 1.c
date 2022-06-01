#include <stdio.h>
#include <stdlib.h>

//Integrantes del grupo: Jose Caceres, Facundo Quevedo, Nicolas Martinez, Tomas Azzaretti, Jeff Michel

//Este programa se encargara, a partir de el ingreso de tres datos (tipo de vehiculo, horario y pasajeros) de calcular el monto
//que se debe abonar en un peaje segun datos informados.

int main(){

    char vehiculo, horario;    
    int cantPasajeros;        

                //Ingreso de datos a continuacion//
    printf("Ingrese el tipo de vehiculo:\n_a para autos\n_c para camiones\n_m para motos\nRespuesta: "); 
    scanf("%c", &vehiculo);

    printf("\nIngrese la cantidad de personas que viajan en el vehiculo: ");    
    scanf("%d", &cantPasajeros);

    printf("\nIngrese franja horaria a o b: "); 
    scanf(" %c",&horario);

    //Comienza analisis de datos para calcular costo del peaje
    switch (vehiculo){

        case 'a':{      //En caso de que sea un auto ingresara en esta opcion

            switch(horario){

                //comienza analisis de franja horaria para calcular costo
                case 'A':{      
                    
                    //comienza analisis de cantidad de pasajeros para calcular costo

                    switch(cantPasajeros){

                        case 1: case 2:{

                            printf("\nPaga peaje, pero cuanto??\n");
                            break;

                        }
                        case 3: case 4: case 5:{

                            printf("No paga peaje\n");
                            break;
                        }
                        default:{       //Validacion de datos con default
                            printf("Cantidad de pasajeros mal ingresada\n");
                            break;
                        }
                    }
                    break;
                }
                case 'B':{      

                    printf("Paga $150\n");
                    break;

                }
                default:{           //Validacion de datos con default
                    printf("Franja horaria mal ingresada\n");
                    break;
                }
            }
            break;

        }
        case 'c':{          //En caso de que sea un camion ingresara en esta opcion

            switch(horario){

                //comienza analisis de franja horaria para calcular costo
                case 'A':{
                    
                    printf("Camion en franja horaria A:\nPaga $300\n");
                    break;
                }
                case 'B':{

                    printf("Camion en franja horaria B: \nPaga $200\n");
                    break;

                }
                default :{      //Validacion de datos con default
                    printf("Franja horaria mal ingresada\n");
                    break;
                }

            }
            break;
        }
        case 'm':{          //En caso de que sea una moto ingresara en esta opcion

            switch(horario){

                //comienza analisis de franja horaria para calcular costo   
                case 'A':{
                    printf("Moto en franja horaria A: \nPaga $100\n");
                    break;
                }

                case 'B':{
                    printf("Moto en franja horaria B: \nNo paga\n");
                    break;
                }
                default :{      //Validacion de datos con default
                    printf("Franja horaria mal ingresada\n");
                    break;
                }

            }
            break;
        }
        default:{       //Validacion de datos con default
            printf("Tipo de vehiculo mal ingresado\n");
            break;
        }
    }

    system("pause");
    return 0;




}