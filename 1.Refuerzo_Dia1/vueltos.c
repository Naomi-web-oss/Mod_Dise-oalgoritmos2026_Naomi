//Una caja calcula el vuelto de cada compra.
// Se digita el total de la compra (1 a 1 000 000) y el monto pagado, que no puede ser menor que el total (si lo es, se vuelve a pedir). 
//El programa muestra el vuelto y cuántos billetes o monedas de cada denominación entregar, empezando por la mayor (20 000, 10 000, 5000, 2000, 1000, 500, 100, 50, 25, 10 y 5); solo se muestran las que se usan. Si sobran colones que no se pueden entregar (menos de 5), se indica.
//Al final se muestra la cantidad total de piezas. Después de cada compra se pregunta si hay otra (S/N). 

#include <stdio.h>
int main(void){
    //Definir variables.
    int vuelto, total_compra, monto_pagado, total_piezas;
    double monedas,billetes;
    char 'S';
    char 'N';

//Entradas y lecturas.
do
{
    printf("Total de la compra (1 a 1 000 000): \n");
    scanf("%d", &total_compra);
} while (total_compra < 1 || total_compra > 1 000 000);

do
{
    printf("Ingrese el monto pagado:");
    scanf("%d", &monto_pagado);
} while (monto_pagado < total_compra);


}