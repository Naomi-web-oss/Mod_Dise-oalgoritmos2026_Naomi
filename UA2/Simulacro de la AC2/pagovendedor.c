/* __________________________________________________________________________________________________________*/
/*|                                                                                                          |*/
/*|                              pagovendedor.c - Pago mensual de un vendedor.                               |*/
/*|__________________________________________________________________________________________________________|*/
/*|    -----------                                                                                           |*/
/*|     Enunciado:  Una distribuidora paga a sus vendedores una comisión sobre las ventas del mes.           |*/
/*|    -----------                                                                                           |*/ 
/*|__________________________________________________________________________________________________________|*/ 
/*|    ---------------                                                                                       |*/
/*|     Que se logra:  Ninguna venta puede ser negativa, calcular las ventas del mes,                        |*/
/*|    --------------- la comisión (5% de las ventas)  y un bono de 50 si las ventas del mes                 |*/
/*|                    superan los 2000, calcular la retención (2% de la comisión + el bono),                |*/
/*|                     calcular pago (comisión + bono - retención).                                         |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    -------------------                                                                                   |*/
/*|     Datos de entrada:  Nombre del vendedor, ventas de cada una se las 4 semanas del mes, comisión,       |*/
/*|    ------------------- bono, retención.                                                                  |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|                                                                                                          |*/           
/*|     ----------------                                                                                     |*/
/*|      Cómo se logra:  un arreglo double ventas[4],  for + do … while para leer y validar,                 |*/
/*|     ---------------- un acumulador,  y constantes para las tasas, el bono y el límite.                   |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    ------------------                                                                                    |*/
/*|     Datos de prueba:   === Pago del vendedor ===                                                         |*/
/*|     ------------------ Nombre del vendedor: Carlos Vega                                                  |*/
/*|                        Ventas de la semana 1: 600                                                        |*/
/*|                        Ventas de la semana 2: 450                                                        |*/
/*|                        Ventas de la semana 3: 700                                                        |*/
/*|                        Ventas de la semana 4: 500                                                        |*/
/*|__________________________________________________________________________________________________________|*/   
/*|     ---------------------                                                                                |*/
/*|      Resultado esperado/                                                                                 |*/
/*|        datos de salida:    ------- Pago de Carlos Vega -------                                           |*/ 
/*|      ---------------------  Semana 1:             600.00                                                |*/
/*|                             Semana 2:              450.00                                                |*/
/*|                             Semana 3:              700.00                                                |*/
/*|                             Semana 4:              500.00                                                |*/
/*|                             Ventas del mes:       2250.00                                                |*/ 
/*|                             Comision (5%):         112.50                                                |*/
/*|                             Bono:                   50.00                                                |*/
/*|                             Retencion (2%):          3.25                                                |*/
/*|                             Pago del mes:          159.25                                                |*/ 
/*|__________________________________________________________________________________________________________|*/  
/*|    ------------------------                                                                              |*/
/*|      Variables y constantes:                                                                             |*/
/*|    ------------------------                                                                              |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/

#include <stdio.h>
int main(void){
    //Definir variables como real;
    //Definición del arreglo.
    double ventas = {1,2,3,4}; 
    //Definir variables como entero.
    int i, nombre;


    //Entradas y lecturas.
    printf("=== Pago del vendedor === ");
    printf("Nombre del vendedor: ");
    scanf("%d", &nombre);

    printf("Ventas de la semana 1: ");
    scanf("%lf", ventas[1]);

    printf("Ventas de la semana 2: ");
    scanf("%lf", ventas[2]);

    printf("Ventas de la semana 3: ");
    scanf("%lf", ventas[3]);

    printf("Ventas de la semana 4: ");
    scanf("%lf", ventas[4]);

    //Proceso.
    for (i = 0; i < 4; i++)
    {
        /* code */
         do
    {
        /* code */
    } while (ventas[i] < 4);
    
    }
    
    //Salidas
   printf("------- Pago de Carlos Vega -------");
   printf("Semana 1:");
   printf("Semana 2:");
   printf("Semana 3:");
   printf("Semana 4:");
   printf("Ventas del mes:");
   printf("Comision (5%):");
   printf("Bono:");
   printf("Retencion (2%):");
   printf("Pago del mes:");*/
    
  return 0;
}