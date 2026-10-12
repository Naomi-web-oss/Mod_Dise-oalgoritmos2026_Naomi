//salario.c - SalarioNeto.
#include <stdio.h>
int main(void){
    //Definir vairables como Real.
    double horas, tarifaHora, bruto, deduccion, neto;

    //Entradas y lecturas.
    printf("Horas trabajadas: ");
    scanf("%lf," &horas);

    printf("Pago por hora: ");
    scanf("%lf," &tarifaHora);

    //Proceso.
    bruto = horas * tarifaHora;
    deduccion = bruto * 0.10;
    neto = bruto * deduccion;

    //Salidas.
    printf("Salario bruto: %f", bruto);
    printf("Deducción: %f", deduccion);
    printf("Salario neto: %f", neto);

    return 0;
}