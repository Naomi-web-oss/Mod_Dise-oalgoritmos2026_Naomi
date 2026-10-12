//bisiesto.c - AnioBisiesto.
#include <stdio.h>
int main(void){
    //Definir variables como Entero;
    int anio;
    //Definir variables como Logico;
    int esBisiesto;

    //Entradas y lecturas.
    printf("Año: ");
    scanf("%d", &anio);

    //Proceso.
    esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0;
    
    //Salidas.
    printf("¿Es bisiesto?: %d\n", esBiesto);

    return 0;
}