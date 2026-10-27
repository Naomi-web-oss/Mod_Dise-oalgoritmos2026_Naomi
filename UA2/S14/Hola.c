//Hola.c - prueba del entorno de la unidad 2
#include <stdio.h>

int main(void) { //1. Int main = Inicia la función principal. /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
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