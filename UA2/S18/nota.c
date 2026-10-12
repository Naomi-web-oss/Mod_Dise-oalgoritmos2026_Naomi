//nota.c - ValidarNota.
// Repite la lectura hasta que la nota sea válida.
#include <stdio.h>
int main(void){
    //Definir variable como Real.
    double nota;

    //Entradas y lecturas.
    printf("Nota (0 a 100): ");
    scanf("%lf", &nota);

    //Proceso.
    if nota < 0 || nota > 100 {
        printf("Nota inválida");
    
    else if (nota > 70 < 100){
        printf("Aprobado");
    }
    else {
        printf("Reprobado");
    } 
    }

    //Salida.
    printf("Nota resgitrada: %f", nota);
    return 0;
}