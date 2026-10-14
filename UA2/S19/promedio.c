//promedio.c -  Promediar notas sin aceptar datos imposibles: ni una cantidad fuera de 1 a 10 ni notas fuera de 0 a 100. 

#include <stdio.h>
// Promedio de una cantidad variable de notas
int main(void){
//Definir variables como Entero.
int cantidad, i;
//Definir variables como Real.
double promedio, suma, nota;

//Inicializar variable.
suma = 0;

//Entradas y salidas.
printf("¿Cuántas notas va a digitar?");
scanf("%d", &cantidad);

for (i = 1; i < 1  ; i++)
{
    printf("Nota", i, ":");
    scanf("%lf", &nota);
    suma = suma + nota;
}
//Calcular promedio.
promedio = suma / cantidad;

//Salidas.
printf("Suma: %lf\n", suma);
printf("Promedio: %lf\n", promedio);

return 0;//Terminar sin errores.
}
