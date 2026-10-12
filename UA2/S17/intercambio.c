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
    printf("a = %d", a);
    printf("b = %d", b);

    printf("Despues: ");
    printf("a = %d", a, "  b =  %d", b);
    printf("b = %d", b, "  aux =  %d", aux);
}