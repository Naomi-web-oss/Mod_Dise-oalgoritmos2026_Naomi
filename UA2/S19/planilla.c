//planilla.c - Planilla Semanal.
// Pago semanal con horas extra de varias personas colaboradoras (Calcular la planilla de un grupo de personas sin saber de antemano cuántas son).
#include <stdio.h>
#define CENTINELA 0 
int main(void){

    //Definir variables como Entero.
    int conExtra, i, cantidad;

    //Definir variables como Caracter.
    char nombre;

    //Definir variables como Real.
    double totalplanilla, pago, horasExtra, tarifa, horas;

    //Inicializar variables.
    totalplanilla = 0;
    conExtra = 0;

    //Entradas y salidas.
    printf("Cantidad de personas colaboradoras");
    scanf("%d", &cantidad);

    //Proceso.
    for (i = 1, i = 1; i++){
        printf("Nombre: ");
        scanf("%d", &nombre);
    
    do
    {
        printf("Horas de la semana (0 a 72):");
        scanf("%lf", &horas);

    } while (if horas > 48 != CETINELA);
    horasExtra = horas - 48;
    pago = 48 * tarifa + horasExtra * tarifa * 1.5;
    conExtra = conExtra + 1;
    else if 
    {
       pago = horas * tarifas;
    }
    printf("nombre %c\n", "(0 para terminar):", "pago %lf\n");
    totalplanilla = totalplanilla + pago;

   }

   //Salidas.
   printf("Total de la planilla: %lf\n", totalplanilla);
   printf("Personas con horas extra: %d\n", conExtra);

   return 0;//Terminar sin errores.
}