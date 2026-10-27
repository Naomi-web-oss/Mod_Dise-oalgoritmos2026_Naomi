#include <stdio.h>
#include <string.h>

#define ESTUDIANTES 4
#define EVALUACIONES 3 
#define MIN 0
#define MAX 100
#define APROBADO 70

int main(void){
    int notas[ESTUDIANTES][EVALUACIONES];
    char nombres[ESTUDIANTES][50];
    float promedios[ESTUDIANTES];
    float  promedioPruebas[EVALUACIONES];
    int filas, columnas, posicion;
    float sumas = 0;
    int limpiar;
    float mejor = 0;
    float evaluaciones[EVALUACIONES];
    char buscar[50];
    char condicion[30];
    int caracter;
    

    for (filas = 0; filas < ESTUDIANTES; filas++)
    {
        printf("Ingrese el nombre del estudiante: %d\n", filas + 1);
        scanf("%49s", nombres[filas]);

        for (columnas = 0; columnas < EVALUACIONES; columnas++)
        {
            do
            {
                printf("Ingrese la %d de %s (0 al 100):", columnas + 1, nombres[ESTUDIANTES]);
                scanf("%d", &notas[filas][columnas]);

                //Limpiar buffer/limpiar basura.
                while ((caracter = getchar()) != '\n' && caracter != EOF){}

                if (notas[filas][columnas] < MIN ||notas[filas][columnas] > MAX)
                {
                    printf("Estas mal\n");
                }
                
            } while (notas[filas][columnas] < MIN || notas[filas][columnas] > MAX);

            sumas = sumas + notas[filas][columnas];
            
        }
        
        promedios[filas] = sumas / EVALUACIONES;

        sumas = 0;
    }

  
    //EL MEJOR PROMEDIO.
    for (filas = 0; filas < ESTUDIANTES; filas++)
    {
        if (promedios[filas] > mejor)
        {
            mejor = promedios[filas];
            posicion = filas;
        }
          
    }
    
for (filas = 0; filas < ESTUDIANTES; filas++)
{
   printf("%f", promedioPruebas[filas]);
}

//CALCULAR PROMEDIO DE EVALUACIONES
for (columnas = 0; columnas < EVALUACIONES; columnas++)
{
    for (filas = 0; filas < ESTUDIANTES; filas++)
    {
        sumas = sumas + notas[filas][columnas];
    }
    evaluaciones[columnas] = sumas / ESTUDIANTES;
    sumas = 0;
}

//MOSTRAR LA TABLA DE NOTAS
printf("\n_______________________________________________________\n");
printf("%-12s %-6s %-6s %-6s %-8s\n", "Nombre", "N1", "N2", "N3", "Promedio");
printf("\n_________________________________________________________\n");  


for (filas = 0; filas < ESTUDIANTES; filas++)
{
    printf("%-14s", nombres[filas]);

   for (columnas = 0; columnas < EVALUACIONES; columnas++)
   {
    printf(" %7d", notas[filas][columnas]);
   }

   printf(" %10.2f\n", promedios[filas]);
   
}

printf("________________________________________________________________");

// MOSTRAR EL PROMEDIO DE CADA EVALUACION

for (columnas = 0; columnas < EVALUACIONES; columnas++)
{
printf("Promedio de evaluacion %d: %.2f\n", columnas + 1, evaluaciones[columnas]);
}

//MOSTRAR EL MEJOR PROMEDIO
printf("Evaluacion estudiante mejor promedio: \n");
printf("Nombre: %s\n", nombres[posicion]);
printf("Promedio: %.2f\n", promedios[posicion]);

if (promedios[posicion] >= 70)

{
    strcpy(condicion, "APROBADO");
    printf("%s", condicion);
}
else {
    strcpy(condicion, "REPROBADO");
    printf("%s", condicion);
}

// BUSCAR ESTUDIANTE
printf("INGRESE EL NOMBRE QUE DESEA BUSCAR");
scanf("%49s", buscar);

for (filas = 0; filas < ESTUDIANTES; filas++)
{
   if (strcmp(nombres[filas], buscar) == 0)
   {
    printf("Estudiante: %s\n", nombres[filas]);
    printf("Promedio: %.2f\n", promedios[filas]);
    break;
   }
   
}

if (filas == ESTUDIANTES)
{
    printf("Estudiante no encontrado\n");
}



    return 0;
}