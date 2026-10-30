//promedio.c - PromedioN.
/*Qué se logra: Promediar notas sin aceptar datos imposibles: ni una cantidad fuera de 1 a 10 ni 
notas fuera de 0 a 100.*/

#include <stdio.h>
int main(void){
//Definir variables.
int cantidad, i;
double nota,suma,promedio;

//Entradas y lecturas.
printf("¿Cuántas notas va a digitar?\n");
scanf("%d",&cantidad);

//Proceso+
for (i = 0; i < cantidad; i++)
{
    printf("Nota %d\n", i + 1);
    scanf("%lf", &nota);
    suma = suma + nota;
}

promedio = suma / cantidad;

//Salidas.
printf("Suma: %.0f\n",suma);
printf("Promedio: %f", promedio);
}

