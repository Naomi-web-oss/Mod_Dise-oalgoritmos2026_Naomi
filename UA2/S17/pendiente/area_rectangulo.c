//area_rectangulo.c - saca el area de un rectángulo.

#include <stdio.h>

int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    //Declarar variables double.
    double base, altura, area;

    //Entrada de datos.
    printf("Digite la base del rectangulo (cm): ");
    scanf("%lf", &base);
    
    //Mensaje y lee la altura que va a ser = 3.
    printf("Digite la altura del rectangulo (cm): ");
    scanf("%lf", &altura);
 
    //Proceso: multiplica y guarda el resultado = 15.

    area = base = altura;

    //Salida: muestra el area con 2 decimales.
    printf("El area del rectangulo es %.2f cm2\n", area);
    return 0;
}