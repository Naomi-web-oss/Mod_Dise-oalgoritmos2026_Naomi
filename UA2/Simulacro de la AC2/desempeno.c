/* __________________________________________________________________________________________________________*/
/*|                                                                                                          |*/
/*|                               desempeno.c - Evaluación de desempeño .                                    |*/
/*|__________________________________________________________________________________________________________|*/
/*|    -----------                                                                                           |*/
/*|     Enunciado:  Una empresa evalúa a sus colaboradores en tres criterios: puntualidad, calidad           |*/
/*|    -----------  y trabajo en equipo.                                                                     |*/ 
/*|__________________________________________________________________________________________________________|*/ 
/*|    ---------------                                                                                       |*/
/*|     Que se logra:  Recibir el nombre del colaborador, el puntaje de cada criterio (0 a 10),              |*/
/*|     --------------- un mensaje que muestre el nombre del criterio si se encuentras fuera de              |*/
/*|                   rango (0 a 10), calculo del promedio, calculo del nivel, el criterio con               |*/
/*|                    el puntaje más bajo y su puntaje.                                                     |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    -------------------                                                                                   |*/
/*|     Datos de entrada:  Nombre del colaborador, puntaje de puntualidad, puntaje de calidad,               |*/
/*|    ------------------- puntaje de trabajo en equipo, promedio, nivel, criterio con el puntaje            |*/
/*|                        más bajo.                                                                         |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|                                                                                                          |*/           
/*|     ----------------                                                                                     |*/
/*|      Cómo se logra:   Un arreglo de cadenas para los nombres de los criterios,                           |*/
/*|     ----------------  los puntajes en un arreglo en la mis posición,buscar el                            |*/
/*|                       criterio menor guardando su posición.                                              |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    ------------------                                                                                    |*/
/*|     Datos de prueba:   Nombre del colaborador (Laura Solis), puntaje de puntualidad (9),                 |*/
/*|    ------------------- puntaje inválido de calidad (11), puntaje de calidad (8.5),                       |*/
/*|                        puntaje de trabajo en equipo (10)                                                 |*/
/*|__________________________________________________________________________________________________________|*/   
/*|     ---------------------                                                                                |*/
/*|      Resultado esperado/                                                                                 |*/
/*|        datos de salida: Colaborador: Laura Solis                                                         |*/
/*|                         Promedio:    9.17                                                                |*/
/*|                         Nivel:       EXCELENTE                                                           |*/
/*|                         Puntaje mas bajo: calidad (8.5)                                                  |*/ 
/*|__________________________________________________________________________________________________________|*/  
/*|    ------------------------                                                                              |*/
/*|      Variables y constantes:                                                                             |*/
/*|    ------------------------                                                                              |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/


#include <stdio.h>
int main(void){
    int nombre, puntualidad, equipo, promedio, nivel;
    double puntaje_mas_bajo, calidad;

    printf("=== Evaluacion de desempeno === ");
    printf("Nombre del colaborador: ");
    scanf("%d", &nombre);

    printf("Puntaje de puntualidad (0 a 10): ");
    scanf("%d", &puntualidad);

    printf("Puntaje de calidad (0 a 10): ");
    scanf("%lf", &calidad);

    printf("Puntaje de trabajo en equipo (0 a 10): ");
    scanf("%d", &equipo);

     do 
  {
    /* code */
  } while (condition);

   printf("Colaborador: %d",nombre);
   printf("Promedio: %d",promedio);
   printf("Nivel: %d", nivel);
   printf("Puntaje mas bajo: %.1f", puntaje_mas_bajo);
}