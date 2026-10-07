//reporte.c - Programa con errores 
  #include <stdio.h> 
    
  int main(void) { 
     printf("Reporte de ventas\n");
     Printf("Total: 25000\n"); 
     printf("Gracias por su compra\n"); 

     return 0;
}


//==========================================================
//N.° | Línea |  Mensaje de gcc (resumido)  | Correción
//1   |   4   |                             |  printf("Reporte de ventas\n");
//2   |   4   |                             |  printf("Gracias por su compra\n"); 
//3   |   7   |                             |  }
//4   |  10   |                             |  int
//5   |       |                             |
//==========================================================