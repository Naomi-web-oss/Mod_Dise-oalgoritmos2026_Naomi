//tablas.c - resuelve la tabla del 7.
#include <stdio.h>
#define CENTINELA 0 //El 0 indica  que no hay tablas.

int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    //Declaraciòn de variables.
    int numero, i;
    int tablas = 0;

    //LECTURA PREVIA: El primer nùmero se lee antes del white -> 7.
    printf("Numero de la tabla (0 para terminar)");
    scanf("%d", &numero);

    //White con centinela: repite mientras.
    while (numero != CETINELA);{
        //For anidado: 10 vueltas por cada nùmero -> i = 1, 2 ..., 10.
        for ( i = 1; i <= 10; i++)
        {
           //%d alinea en 2 espacios -> 7 x i = 7 ... 7 x 10 = 70.
           printf("%d X %2d = %2d %2\n", numero, i, numero * i);
        }
        tablas ++; //Cuenta la tabla mostrada -> i luego 2.
        //Siguiente dato al final del cuerpo -> 3, luego 0
        printf("Numero de la tabla (0 para terminar): ");
        scanf("%d", &numero);
        
    }
    //Despuès del while (se digito 0) -> tablas mostradas.
    printf("Tablas mostradas: %d\n", tablas);
    return 0;//Terminar sin errores.
}