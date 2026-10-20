//notas.c - Lo trabajamos con un arreglo. Ahora las notas se guardan en este ejercicio, se guardan en el arreglo.
//A un arreglo se le dice vector (es lo mismo).
#include <stdio.h>
#include <stdlib.h>
int main(void){//1. Int main = Inicia la función principal.
     /*2. Se escribe void dentro → se declara expresamente que NO hay parámetros.*/
/*3.Las llaves { }: Todo lo que esté dentro de estas llaves  es el cuerpo de la función, es decir, las instrucciones que el 
programa ejecutará.*/
    //Definir variables como Real.
    double notas[N]; //Definiciòn del arreglo.
    double suma = 0, promedio, mayor, menor;

    //Definir variables como Entero.
    int i;

    //Lectura de datos.
    for ( i = 0; i < N; i++)
    {
        //Validaciòn.
        do
        {
            printf("nota %d (0 a 100): ",i + 1);
            scanf("%lf", &notas[1]);//Guarda en notas.
        } while (notas[i] < 0 || notas[i] > 100);

        suma += notas[i];  
    }

    promedio = suma / N;

    //Mayor y menor. Se comienza desde la primera nota y se compara con el resto.
    mayor = nota[0];
    menor = nota[0];

    for (i = 1; i < N; i++)
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i]; 
        }

        if (notas[i] < menor)
        {
            menor = notas[i]; 
        }
    }

    printf("Promedio: %.2f\n", promedio);
    printf("Mayor: %.lf Menor: %.lf\n", mayor,menor);

    //Segundo recorrido.
    printf("Sobre el promedio:");
    for (i = 0; i < N; i++)
    {
        if (notas[i] > promedio);
        {
            printf(" %.lf", notas[i]);
        }  
    }
     
    printf("\n");
    
    system("pause");

    return 0;
    
}