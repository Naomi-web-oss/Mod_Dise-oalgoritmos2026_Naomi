/* __________________________________________________________________________________________________________*/
/*|                                                                                                          |*/
/*|                              pedidolibreria.c - Pedido en una librería .                                 |*/
/*|__________________________________________________________________________________________________________|*/
/*|    -----------                                                                                           |*/
/*|     Enunciado:  Una librería registra los libros de cada pedido. .                                       |*/
/*|    -----------                                                                                           |*/ 
/*|__________________________________________________________________________________________________________|*/ 
/*|    ---------------                                                                                       |*/
/*|     Que se logra:  Ninguna venta puede ser negativa, calcular las ventas del mes,                        |*/
/*|    --------------- la comisión (5% de las ventas)  y un bono de 50 si las ventas del mes                 |*/
/*|                    superan los 2000, calcular la retención (2% de la comisión + el bono),                |*/
/*|                    calcular pago (comisión + bono - retención).                                         |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    -------------------                                                                                   |*/
/*|     Datos de entrada:  Título, FIN, precio,  cantidad,  unidades (suma de cantidades),total              |*/
/*|    ------------------- de libros,  descuento del 10 %,  envío,impuesto.                                  |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|                                                                                                          |*/           
/*|     ----------------                                                                                     |*/
/*|      Cómo se logra:   Un while con lectura previa, el centinela de texto FIN,comparado con strcmp,       |*/
/*|     ----------------  arreglos paralelos para el detalle y   strcpy para guardar cada título.            |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    ------------------                                                                                    |*/
/*|     Datos de prueba:   === Pedido de la libreria ===                                                     |*/
/*|    ------------------  Titulo del libro (FIN para terminar): Cocori                                      |*/
/*|                        Precio: 12.50                                                                     |*/
/*|                        Cantidad: 2                                                                       |*/
/*|                        Titulo del libro (FIN para terminar): El principito                               |*/
/*|                        Precio: 8                                                                         |*/
/*|                        Cantidad: 3                                                                       |*/
/*|                        Titulo del libro (FIN para terminar): FIN                                         |*/
/*|__________________________________________________________________________________________________________|*/   
/*|     ---------------------                                                                                |*/
/*|      Resultado esperado/                                                                                 |*/
/*|        datos de salida:    Titulo                  Precio Cant  Subtotal                                 |*/
/*|     ---------------------  Cocori                   12.50    2     25.00                                 |*/
/*|                            El principito             8.00    3     24.00                                 |*/
/*|                            Unidades:        5                                                            |*/
/*|                            Total de libros:      49.00                                                   |*/
/*|                            Descuento:             4.90                                                   |*/
/*|                            Impuesto (13%):        5.73                                                   |*/
/*|                            Envio:                 8.00                                                   |*/
/*|                            TOTAL A PAGAR:        57.83                                                   |*/ 
/*|__________________________________________________________________________________________________________|*/  
/*|    ------------------------                                                                              |*/
/*|      Variables y constantes:                                                                             |*/
/*|    ------------------------                                                                              |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/

#include <stdio.h>
#define FIN  
int main(void){
    int titulo,unidades, total de libros;
    double precio, cantidad, subtotal, descuento, impuesto, envio, total_a_pagar;


    printf("");
}