//billetes.c - Desglose de billetes.
#include <stdio.h>

int main(void){
    //definición de variables.

    int monto, resto, cantidad;

    //ENTRADAS: lee monto = 47500.
    printf("Monto a desglosar: ");
    scanf("%d", &monto);

    //PROCESOS: división entera 47500 / 20000 -> cantidad = 2.
    cantidad = resto / 20000;

    //% es el residuo: 47500 % 20000 -> resto = 7500.
    resto = resto % 20000;

    //Muestre -> billetes de 2000: 2.
    printf("Billetes de 20000: %d\n", cantidad);

    cantidad = resto / 10000; //7500 / 5000 -> cantidad = 0.
    //Forma compacta de resto = resto % 10000 -> resto = 7500.
    resto %= 10000;
    printf("Billetes de 10000: %d\n", cantidad);//-> 0.

     cantidad = resto / 5000; //7500 / 5000 -> cantidad = 1.
    resto %= 5000;
    printf("Billetes de 5000: %d\n", cantidad);//-> 1.

     cantidad = resto / 2000; //2500 / 2000 -> cantidad = 1.
    resto %= 2000;
    printf("Billetes de 2000: %d\n", cantidad);//-> 1.

     cantidad = resto / 1000; //500 / 1000 -> cantidad = 0.
    resto %= 1000;
    printf("Billetes de 1000: %d\n", cantidad);// -> 0.

    //Lo que quede se entrega con monedas -> en monedas 500
    printf("En monedas: %d\n", resto);

    return 0;
}