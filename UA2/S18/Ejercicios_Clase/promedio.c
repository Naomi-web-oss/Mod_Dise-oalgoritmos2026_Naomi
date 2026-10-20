//promedio.c - Genera promedio de notas enteras.
#include <stdio.h>

int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    //3 notas enteras y su suma.
    int nota1, nota2, nota3, suma;
    //Dos resultados reales para comparar.
    double promedioMal, promedioBien;

    //ENTRADAS Y LECTURAS: Notas 80, 75 y 90.
    printf("Digite las 3 notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    //PROCESO: Suma de enteros -> 245.
    suma = nota1 + nota2 + nota3;
    //int / int = división entera: 245 / 3 = 81, se guarda como 81.0.
    promedioMal = suma / 3;
    //(double) convierte suma  a 245.0 ANTES de dividir -> 81.66666....
    promedioBien = (double) suma / 3;

    //SALIDAS: Sin casting 81.0 y con casting 81.67.
    printf("Sin casting: %.2f\n", promedioMal);
    printf("Con casting: %.2f\n", promedioBien);

    return 0;
    
}