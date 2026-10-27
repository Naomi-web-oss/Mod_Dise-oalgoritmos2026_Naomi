//temperaturas.c -  Temperaturas de la semana.
//El Instituto Meteorológico registra la temperatura máxima de cada día.
#include <stdio.h>
int main(void){

//Definir variables como Caracteres.
char dias[7][4] = {"lun", "mar", "mie", "jue", "vie", "sab","dom"};

//Definir variable como  Entero.
int i;
double temperatura[7], promedio, suma, mas_caluroso;

//Entradas y lecturas.
    printf("=== Temperaturas de la semana ===\n");

//Solicitar las temperaturas de los 7 dias de la semana.
    for (i = 0; i < 7; i++){

        //Inicializar temperatura.
        temperatura[i] = 0;

        //Pedir temperatura.
        printf("Temperatura del %s (0 a 45)\n: ", dias[i]);
        scanf("%lf", &temperatura[i]);

        //Temperatura tiene que estar entre 0 y 45, sino, es un dato invalido.
        if (temperatura[i] < 0 || temperatura[i] > 45){
            printf("Dato inválido: (0 a 45)\n");
        }
    }

//Sumar las temperaturas
for (i = 0; i < temperatura[i]; i++)
{
    suma += temperatura[i];
}

//Calcular promedio.
 promedio = suma / 7;

mas_caluroso = 0;
for (i = 1; i < temperatura[i]; i++)
{
  
}


//Salidas.
    printf("------- Reporte de la semana -------\n");
    for (i = 0; i < 7; i++)
    {
        printf("%s: %.2f °C\n", dias[i], temperatura[i]);
    }
    printf("Promedio: %.2f °C\n", promedio);

    return 0;
    
}