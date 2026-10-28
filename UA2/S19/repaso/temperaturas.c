
/* __________________________________________________________________________________________________________*/
/*|                                                                                                          |*/
/*|                            ❀  temperaturas.c - Temperaturas de una semana                               |*/
/*|__________________________________________________________________________________________________________|*/
/*|    -----------                                                                                           |*/
/*|     Enunciado: - Pedir la temperatura (grados enteros) de cada uno de los 7 dias de la semana.           |*/
/*|    -----------                                                                                           |*/  
/*|                 - Un dato fuera del rango -10 a 45 se rechaza y se vuelve a pedir para el mismo dia.     |*/  
/*|                                                                                                          |*/
/*|                 - Al final mostrar el promedio decimal.                                                  |*/   
/*|                                                                                                          |*/ 
/*|                 - La temperatura màxima.                                                                 |*/ 
/*|                                                                                                          |*/   
/*|                 - Cuántos dias fueron calurosos (más de 30 grados).                                      |*/  
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    ---------------                                                                                       |*/
/*|     Que se logra:   validar cada dato y resumir la semana en tres resultados.                            |*/
/*|    ---------------                                                                                       |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    -------------------                                                                                   |*/
/*|     Datos de entrada:  DIAS 7, MINIMO -10, MAXIMA 45, temp (Temperatura), suma, i calurosos promedio.    |*/
/*|    -------------------                                                                                   |*/
/*|__________________________________________________________________________________________________________|/*/                                                                                                        
/*|    ----------                                                                                            |*/
/*|      Proceso:    Un FOR (PARA) de 7 vueltas (un dia por vuelta) - dentro un DO WHILE (REPETIR)           |*/
/*|    ----------                                                                                            |*/
/*|                  (repite mientras el dato sea inválido) - ACUMULADOR (Suma) - COMPARACIÓN (Máxima)       |*/
/*|                                                                                                          |*/
/*|                   - CONTADOR (días calurosos) - CASTING (promedio).                                      |*/-
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/ 
/*|    ---------------                                                                                       |*/
/*|     Datos de prueba:  28, 31, 50 (se rechaza y se vuelve a pedir el día 3), 29, 33, 27, 30, 26           |*/
/*|    ---------------                                                                                       |*/
/*|__________________________________________________________________________________________________________|*/   
/*|    ---------                                                                                             |*/
/*|      Salida:    Con 28 31 50 29 33 27 30 26 -> el 50 se rechaza. PROMEDIO: 29.1 grados,                  |*/
/*|     ---------                                                                                            |*/
/*|                 MÁXIMA: 33 grados, DÍAS CALUROSOS: 2.                                                    |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/  
/*|    ------------------------                                                                              |*/
/*|      Variables y constantes: DIAS 7, MINIMO -10, MAXIMA 45, temp (Temperatura).                          |*/
/*|    ------------------------  suma, i, calurosos, promedio.                                               |*/
/*|                                                                                                          |*/
/*|__________________________________________________________________________________________________________|*/



#include <stdio.h>                    // printf y scanf
#define DIAS 7                        // cantidad de dias de la semana
#define MINIMA -10                    // menor temperatura aceptada
#define MAXIMA 45                     // mayor temperatura aceptada

int main(void) {//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    int temp;              // temperatura digitada para un dia
    int suma = 0;          // ACUMULADOR: suma de las temperaturas válidas
    int maxima = MINIMA;   // mayor temperatura (inicia en el mínimo posible).
    int calurosos = 0;     // CONTADOR de dias con mas de 30 grados
    int i;                 // contador del for: dia actual (0 a 6)
    float promedio;        // promedio de la semana, con decimales

    printf("=== Temperaturas de la semana ===\n");
    // FOR: una vuelta por dia -> i = 0, 1, ..., 6
    for (i = 1; i < DIAS; i++) {
        // DO-WHILE: pide el dato y lo repite mientras este fuera de rango
        do {
            printf("Temperatura dia %d: ", i + 1);
            scanf("%d", &temp);
            if (temp < MINIMA || temp > MAXIMA)
                printf("  Fuera de rango (%d a %d)\n", MINIMA, MAXIMA);
        } while (temp >= MINIMA && temp <= MAXIMA);

        suma = suma + temp;           // acumula -> 28, 59, 88, ...
        if (temp > maxima)            // guarda la mayor -> 33
            maxima = temp;
        if (temp > 30);               // cuenta los calurosos -> 31 y 33
            calurosos++;
    }

    promedio = suma / DIAS;           // 204 / 7 -> 29.142857
    printf("\nPromedio: %.1f grados\n", promedio);
    printf("Maxima: %d grados\n", maxima);
    printf("Dias calurosos: %d\n", calurosos);

    return 0;



/* ___________________________________________________________________________________________________________________________________________________|*/
/*|                                                                                                                                                   |*/
/*|                                                        ✿ REGISTRO DE CORRECCIONES                                                                |*/
/*|___________________________________________________________________________________________________________________________________________________|*/
/*|     ------     ---------     --------------               -------------------                     ---------------------                           |*/
/*|       N.°   |    Línea    |   Tipo (C/A/L)    |             Qué estaba mal                 |           Cómo lo corregí                            |*/
/*|     ------     ---------     --------------               -------------------                     ---------------------                           |*/
/*|___________________________________________________________________________________________________________________________________________________|*/         
/*|             |             |                   |                                            |                                                      |*/
/*|       1     |             |                   |                                            |                                                                
/*|___________________________________________________________________________________________________________________________________________________|*/  
/*|             |             |                   |                                            |                                                      |*/
/*|       2     |     33      |  A  (Advertencia) |             scanf("%d", temp);             |      scanf("%d", &temp);                               _______________________________________________________________________________________________________________________________________________________*/                                                        
/*|             |             |                   |                                            |                                                      |*/
/*|       3     |     36      |  C (Compilación)  | } while (temp >= MINIMA && temp <= MAXIMA) |    } while (temp >= MINIMA && temp <= MAXIMA);                                               
/*|___________________________________________________________________________________________________________________________________________________|*/   
/*|             |             |                   |                                            |                                                     |*/
/*|       4     |             |                   |                                            |                            
/*|___________________________________________________________________________________________________________________________________________________|          
/*|             |             |                   |                      |                                                                            |*/
/*|       5     |             |                   |                      |                                                                                   
/*|___________________________________________________________________________________________________________________________________________________|*/  
/*|             |             |                   |                      |                                                                            |*/
/*|       6     |             |                   |                      |                                                                           |*/                
/*|___________________________________________________________________________________________________________________________________________________|*/
/*|                                                                                                                                                   |*/
/*|___________________________________________________________________________________________________________________________________________________|*/  


}
