//reporte.c - Programa con errores 

#include <stdio.h> 
    
int main(void) {//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    printf("Reporte de ventas\n");
    printf("Total: 25000\n"); 
    printf("Gracias por su compra\n"); 

    return 0;
  }


// ===================================================================================
//|  N.° | Línea |  Mensaje de gcc (resumido)  |            Correción                 |
//| --------------------------------------------------------------------------------- |              
//|  1   |   4   |                             |  int                                 |
//|  2   |   5   |                             |  printf("Reporte de ventas\n");      |
//|  3   |   6   |                             |  printf("Total: 25000\n");           |
//|  4   |   7   | missing terminating " character     |  printf("Gracias por su compra\n");  |
//|  5   |  10   |                             |  }                                   |
// ===================================================================================