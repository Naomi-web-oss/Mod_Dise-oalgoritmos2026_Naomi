//letrero.c - Letrero con secuencias de escape.

#include <stdio.h>

int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    printf(" =============================================== \n");
    printf("       MENU DEL DIA - \"SODA LA ESQUINA\"        \n");
    printf(" =============================================== \n");
    printf("|       Platillo\t|        Precio         |\n");                          
    printf(" ----------------------------------------------- \n");
    printf("|                                               |\n");
    printf("|       Casado\t        |        3500           |\n");
    printf("|       Gallo pinto\t|        2000           |\n");
    printf("|       refresco\t|        1000           |\n");
    printf("|                                               |\n");
    printf(" ----------------------------------------------- \n");
    printf("| Archivo: C:\\INA\\menu.txt                      |\n");
    printf(" =============================================== \n");

    return 0;
}