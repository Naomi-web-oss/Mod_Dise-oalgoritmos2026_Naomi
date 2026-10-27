#include <stdio.h>

void mostrarLinea(int largo);
void mostrarTitulo(void);

int main(void){
    mostrarTitulo();
    return 0;
}

void mostrarLinea(int largo){//Recibe el largo, no devuelve nada.
int i;
for (i = 1; i < largo; i++)
{
    printf("-");
}
printf("\n");
    
}

void mostrarTitulo(void) {//No recibe ni devuele nada.
mostrarLinea(19);
printf("COMPROBANTE DE PAGO\n");
mostrarLinea(19);

}