#include <stdio.h>
#include <stdlib.h>

int main(){

int camion_hora_a, eleccion, moto_hora_a,camion_hora_b, auto_hora_b, pasajeros, auto_hora_a, hora;

printf("ingrese el horario:\n ");
printf("1.Horario A:\n ");
printf("2.Horario B:\n ");
scanf("%d",&hora);

printf("ingrese el Vehiculo:\n ");
printf("1.Automovil:\n ");
printf("2.Camion:\n ");
printf("3.Moto:\n ");
scanf("%d",&eleccion);

printf("ingrese la cantidad de pasajeros(5 o menos):\n ");
scanf("%d",&pasajeros);
if (pasajeros >= 6)
{
    printf("Error pasajeros ingresados no valido");
}


switch (hora)
    {
    case 1:
        if ((eleccion == 1) && (pasajeros >= 3))
        {
            printf("Los autos con  3 pasajeros o mas no pagas peaje\n ");
        }
        else if ((eleccion == 1 ) && (pasajeros >= 1)){
            auto_hora_a = 150;
            printf("Su monto es: $%d \n " ,camion_hora_a * pasajeros);
        }
        else if ((eleccion == 2) && (pasajeros >= 1)){
            camion_hora_a = 300;
            printf("Su monto es: $%d \n " ,camion_hora_a * pasajeros);
        }
        else if ((eleccion == 3) && (pasajeros >= 1)){
            moto_hora_a = 100;
            printf("Su monto es: $%d \n " ,moto_hora_a * pasajeros );
        }
        else 
        {
            printf("Error datos ingresados no validos");
        }

    break;
    case 2:
    if ((eleccion == 1) && (pasajeros >= 1))
        {   auto_hora_b = 150;
            printf("Su monto es: $%d \n ",auto_hora_b * pasajeros);
        }
        else if ((eleccion == 2) && (pasajeros >= 1)){
            camion_hora_b
         = 200;
            printf("Su monto es: $%d \n " ,camion_hora_b
         * pasajeros);
        }
        else if (eleccion == 3){
            printf("Las motos no pagan peaje \n ");
        }
        else 
        {
            printf("Error datos ingresados no validos");
        }
    break;

}
   system("pause");
    return 0;
}