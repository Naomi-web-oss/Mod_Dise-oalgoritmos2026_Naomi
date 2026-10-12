//pago.c - Pago Semanal.
#include <stdio.h>
 // Calcula el pago semanal de una persona colaboradora 
int main(void){
    //Definir variables como Real.
    double salario, bono, pagoHora, horas;

    //Inicializa variable.
    bono = 5000;

    //Entradas y lecturas.
    printf("Horas trabajadas en la semana:");
    scanf("%lf", &horas );

    printf("Pago por hora:");
    scanf("%lf",&pagoHora);

    //Proceso.
    salario = horas * pagoHora + bono;

    //Salida.
    printf("Pago semanal: %f", salario);

    return 0;

}