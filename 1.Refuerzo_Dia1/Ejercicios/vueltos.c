//Una caja calcula el vuelto de cada compra.
// Se digita el total de la compra (1 a 1 000 000) y el monto pagado, que no puede ser menor que el total (si lo es, se vuelve a pedir). 
//El programa muestra el vuelto y cuántos billetes o monedas de cada denominación entregar, empezando por la mayor (20 000, 10 000, 5000, 2000, 1000, 500, 100, 50, 25, 10 y 5); solo se muestran las que se usan. Si sobran colones que no se pueden entregar (menos de 5), se indica.
//Al final se muestra la cantidad total de piezas. Después de cada compra se pregunta si hay otra (S/N). 

//Prototipos.
int compra(int total_compra); 
int monto(int monto_pagado);
int cuantas(int *resto, int denominacion);


#include <stdio.h>
#define CANTIDAD_DENOMINACIONES 11
int main(void){
//Definir variables.

int denominaciones[CANTIDAD_DENOMINACIONES] = {20000,10000,5000,2000,1000,500,100,50,25,10,5};

  int  monto_pagado, total_compra = 0, i,e, mostrar_vuelto, resto, piezas = 0, total_piezas, suma_piezas = 0;
  char opcion;

//Entradas y lecturas.
do{ 
total_compra = compra(total_compra);
monto_pagado = monto(total_compra);

//Mostrar Vuelto
mostrar_vuelto = monto_pagado - total_compra;

total_piezas = 0;

for (e = 0; e < CANTIDAD_DENOMINACIONES ; e++)
{
    piezas = cuantas(&resto, denominaciones[e]);
    mostrar_vuelto = resto;
    mostrar_vuelto / denominaciones[e];
    mostrar_vuelto *= denominaciones[e];

if (piezas > 0)
{
    printf("%d billetes / monedas de %d colones \n",piezas,denominaciones[i]);
    total_piezas += piezas;
    suma_piezas += total_piezas;
}

if (mostrar_vuelto > 0)
{
    printf("Sobran %d colones sin entregar (menos de 5)\n", mostrar_vuelto);
}

}
printf("=====================================\n");
printf("Vuelto:%d\n", mostrar_vuelto);
printf("=====================================\n");
printf("%d billetes / monedas de %d colones \n",piezas,denominaciones[i]);
printf("=====================================\n");
printf("Cantidad de piezas: %d\n", suma_piezas);
printf("=====================================\n");
printf("Desea realizar otra compra (S/N):");
printf("\n_____________________________________\n");
scanf(" %c\n",&opcion);

} while (opcion !='N');

return 0;

}

//Definiciones.

//Definir compra.
int compra(int total_compra){
char c;
do
{
    printf("Total de la compra (1 a 1 000 000): \n");
    scanf("%d", &total_compra);
    while ((c = getchar()) != '\n' && c != EOF);
} while (total_compra < 1 || total_compra > 1000000);
return total_compra;
}

//Definir pago.
int monto(int total_compra){
int monto_pagado;
char c;
do
{
    printf("Ingrese el monto pagado:");
    scanf("%d", &monto_pagado);
    while ((c = getchar()) != '\n' && c != EOF);
} while (monto_pagado < total_compra);

return monto_pagado;
}

//Definir denominaciones y piezas.
int cuantas(int *resto, int denominacion){
int piezas = *resto / denominacion;
*resto = *resto % denominacion;

return piezas; 
}

