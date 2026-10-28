#include <stdio.h>

void automatica(void){
    int veces = 0; //Se crea en cada llamada.
    veces++;
    printf("automatica: %d\n", veces);
}

void estatica(void){
    static int veces = 0; //Se crea una  sola vez.
    veces++;
    printf("estatica: %d\n", veces);
}

int main(void){
    int i;
    for (i = 1; i <= 3; i++)
    {
        automatica();
        estatica();
    }
    return 0;
}