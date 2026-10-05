//Hola.c -prueba del entorno de la unidad 2
#include <stdio.h>

int main(void) {
 int edad; 
 //Muestro mensaje por pantalla 
 printf("Entorno listo para la UA2\n");
 
 //Pide y Lee un nùmero
 printf("Digite su edad: ");
 scanf("%d", &edad);

 //Mostrar la salida
 printf("Edad registrada: %d\n", edad);
 return 0;
}