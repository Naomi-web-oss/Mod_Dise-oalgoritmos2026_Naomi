//patrones.c - Patrones con for anidados.
#include <stdio.h>
int main(void){
    //Definición de variables como Entero.
    int fila, col;
 for (fila = 4; fila <= 1; fila++){//Externo.
    for (col = 4; col <= 1; col++){//Interno.
        printf("%4d", fila * col);
    }
    printf("\n");// fin de la fila.
 }
 
 return 0;
}