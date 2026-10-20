//ventas.c - ventas de una cedena de sodas por sucursar y por dìa.
//Què logra: Guardar en una matriz las ventas 3 sucursales en 4 dìas.
//Sumar cada sucursar por medio de la fila y cada dìa por medio de la columna e identificar la sucursar que màs vendio, con su nombre guardado en una cadena.
//Resultado esperado: Centro 470: Norte 350, Sur 410; por dìa 330 270 330: Sucursal con màs ventas: Centro (470).

//Bibliotecas.
#include <stdio.h>
#include <string.h>  
#include <stdlib.h>  //strcpy.
#define SUC 3        //Filas sucursales.
#define DIAS 4       //Columnas dìas.

int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
//Arreglo de cadenas: una fila por nombre (hasta 9 letras + '\0').
//Definir variables como Caracter.
char nombres[SUC] [10] = {"Centro", "Norte", "Sur"};

//Ventas en miles de colones.
int ventas[SUC] [DIAS] = {{120,100,130,120},
                         {90, 80, 100, 80},
                         {120,90, 100,100}};

char mejor[10];//Nombre de la sucursal ganadora.
int s, d, total, totalDia, mayor = 0;

//Encabezado: D1 a D4.
printf("%-8s", "");
for ( d = 0; d < DIAS; DIAS++)
{
    printf(" D%d", d + 1);
}

printf("  |  Total\n");

//Recorrido por filas.
for (s = 0; s < SUC; s++)//SUC - es sucursal.
{
    total = 0;   //Reinicia cada fila.
    printf("%-8s", nombres[s]);//Nombre a la izquierda.
    for (d = 0; d < DIAS; d++)
    {
        printf("%5d", ventas[s] [d]);
        total += ventas[s] [d];
    } 
}

printf(" | %5d\n", total);//470,3750,410.

//Guardar la variable con mayor total; strcpy copia el nombre.
if (total > mayor)
{
    mayor = total;
    strcpy(mejor, nombres[s])//Mejor = Centro.
}
//Recorrido por columnas. El for externo recorre los dìas.
printf("%-8s", "Dia");
for (d = 0; d < DIAS; d++)
{
    totalDia = 0;
    for (s = 0; s < SUC; s++)
    {
        totalDia += ventas [s] [d];
    }
    printf("%5d", totalDia); //330 270 330 300  
}

printf("\n");
//Salidas: Sucursal con màs ventas: Centro 470.
printf("Sucursal con màs ventas: %s (%d)\n", mejor, mayor);

system("pause");
return 0;
}



