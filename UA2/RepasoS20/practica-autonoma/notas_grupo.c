//notas_grupo.c - Notas del grupo.
//Un docente quiere organizar las notas de un grupo pequeño. 
#include <stdio.h>
#include <string.h>
int main(void){
int  notas[4][3];//Matriz de 4 filas (estudiantes) y 3 columnas(evaluaciones).
char nombre[4][15];//arreglo de cadenas, 4 nombres y espaciado.
int e = 0;//filas - para promedio.
int i = 0;//columnas - para estudiantes.
//int mejor;
 //mejor promedio.
float prom[4];
//char buscado[15]; //Pedir nombre y buscarlo.

float promedio;

//ACUMULADOR de fila(suma de las notas de los estudiantes).
int suma = 0;

//int encontrado; //POSICION donde aparece el nombre buscado.

printf("=== Notas del grupo ===\n");

//===== LECTURA con los for anidados =====
//ciclo externo: una vuelta por estudiante. (fila)

for (i = 0; i < 4; i++){
   printf("Nombre del estudiante %d: ", i + 1);
   scanf("%14s", nombre[i]);

for (e = 0; e < 3; e++){
do 
{
    printf("Nota %d de Ana:", e + 1);
    scanf("%d", &notas[i][e]);
    suma += nota[i][e];
  
    if (notas[i][e] < 0 || notas[i][e] > 100)
{
    printf("Dato inválido: (0 a 100)");
}
} while (notas[i][e] < 0 || notas[i][e] > 100);
}
}

//Calcular promedio.
promedio = prom[4] / suma;

//=======TABLA=======
//Encabezado 
printf(" \n%-12s, %-6s, %-6s, %-6s, %-8s", "Nombre", "N1", "N2", "N3", "Promedio");

//FOR: para recorrer los nombres del encabezado (Ana,Luis,Sofia,Mario).

for (i = 0; i < 5; i++)
{
    //mostrar cada nombre.
    printf("%5s", nombre[i]);
}

//Titulo de la ultima columna y salto de linea.
printf("%7s\n", "N1");

//Una fila de la tabla por nota
for (e = 0; e < notas[i][e]; e++)
{
    //reinicia el total de la fila e.


}

printf("");
return 0;

}