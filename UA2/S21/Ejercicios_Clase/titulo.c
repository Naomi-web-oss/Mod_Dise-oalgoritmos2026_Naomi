#include <stdio.h>
//Prototipos.
void mostrarLinea(int largo);//mostrarlinea recibe un int.
void mostrarTitulo(void);
//mostrartitulo no recibe nada.
int main(void){
    mostrarTitulo();//Llama a una funcion void como no devuelve nada la llamada va sola, sin guardar el resultado en una variable.

    //Se ejecuta mostrar titulo.
    return 0;
}

void mostrarLinea(int largo){
    //Definicion de mostrarlinea
    //Recibe el largo, no devuelve nada.
int i;//Variable local.
for (i = 1; i < largo; i++)//Dibuja guiones.
//19 guiones.
{
    printf("-");
}
printf("\n");//Cambia de linea.
    
}

void mostrarTitulo(void) {//No recibe ni devuele nada.
mostrarLinea(19);
printf("COMPROBANTE DE PAGO\n");
mostrarLinea(19);//Una funcion llama a la otra.

//mostrartitulo envia 19 a mostrarlinea, al terminar a la linea siguiente.

}