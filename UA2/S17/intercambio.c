//intercambio.c - Intercambio.
#include <stdio.h>
int main(void){
    //Definir variables como Entero.
    int aux, b, a;
    //Inicializar variables.
    a = 5;
    b = 9;
    aux = a;
    a = b;
    b = aux;

    //Salidas.
    printf("Antes: ");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("Despues: ");
    printf("a = %d\n", a, "  b =  %d\n", b);
    printf("b = %d\n", b, "  aux =  %d\n", aux);
}