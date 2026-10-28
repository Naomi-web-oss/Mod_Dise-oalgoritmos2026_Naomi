//dado.c - LanzarDado.
//Qué se logra: simular 600 lanzamientos de un dado y mostrar cuántas veces salió cada cara con una barra de asteriscos.

#include <stdio.h>
#include <stdlib.h>

int lanzarDado(void);
void mostrarBarra(int cantidad);

int main(void){
   int i;
   int frecuencia[7] = {0};
   frecuencia[cara]++
   srand();//Se repite la misma secuencia en el mismo sistema.

   for (i = 1; i < 600 ; i++)
   {
    printf("%d ", rand() % 6 + 1);// Dado de 1 a 6.
   }
   
   return 0;
}

