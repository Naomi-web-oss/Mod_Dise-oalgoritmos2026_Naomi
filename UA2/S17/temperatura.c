//temperatura.c - Convierte grados celsius a Fahrenheit.
#include <stdio.h>

//Declarar variables double.
int main(void){
   double celsius, fahrenheit;

   //Entrada.
   printf("Temperatura en grados celsius");
   scanf("%lf", celsius);

   //Proceso.
   fahrenheit = celsius * 9 / 5 + 32;

   //Salida.
   printf("Celius °c equivalen a ", fahrenheit, " °F");

}
