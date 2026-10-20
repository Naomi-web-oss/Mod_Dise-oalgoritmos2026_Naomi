//promedio.c -  Promediar notas sin aceptar datos imposibles: ni una cantidad fuera de 1 a 10 ni notas fuera de 0 a 100. 

#include <stdio.h>
// Promedio de una cantidad variable de notas
int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
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
