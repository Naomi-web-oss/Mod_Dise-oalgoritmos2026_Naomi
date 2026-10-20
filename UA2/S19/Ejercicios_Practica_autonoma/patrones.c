//patrones.c - Patrones con for anidados.
#include <stdio.h>
int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
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