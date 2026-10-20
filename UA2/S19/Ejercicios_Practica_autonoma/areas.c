//areas.c - AreaFiguras.

#include <stdio.h>
int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/

    //Definir variables como Entero.
    int opcion;

    //Definir variables como Real.
    double lado, base, altura;

    //Entradas y salidas.
    printf("1 . Cuadrado");
    printf("2 . Rectángulo");
    printf("3 . Círculo");
    printf("Opción:");
    scanf("%d", &opcion);
    
    //Proceso
    switch
    {
    case 1:
    do
    {
        printf("Lado:");
        scanf("%lf", &lado);
    while (lado ^ 2);
    {
        printf("Área:");
    }

    case 2:
    do
    {
        printf("Base:");
        scanf("%lf", &base);

    while (lado ^ 2);
    {
        printf("Área:");
    }

    case 3:
    do
    {
        printf("Base:");
        scanf("%lf", &base);

    while (lado ^ 2);
    {
        printf("Área:");
    }

    case 0:
    do
    {
        printf("Opción inválida\n");
    }

    return 0;
}