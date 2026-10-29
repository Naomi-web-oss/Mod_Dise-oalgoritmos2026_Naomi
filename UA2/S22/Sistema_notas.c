//Caso integrado de la unidad 2 del curso Diseño de Algoritmos.
//Enunciado: El sistema registra notas de un grupo de 16 estudiantes.
//Contiene un menú 1. Agregar (nota 0 100 validarla). 2. Ver notas (cada una con aprobado si es 70 o más, o reprobado), 3. Estadisticas (Promedio, mayor, menor). Y 0 para salir.
#include <stdio.h>
#define MAX 16

//Definicion de prototipos.
//Leer notas no recibe datos y devuelve una nota valida.
double leerNota(void);

//Recibe el arreglo y direccion de la cantidad.
void agregarNota(double notas[], int *cantidad);

//Mostrar notas: recibe el arreglo y la cantidad por valor.
void mostrarNotas(const double notas[], int cantidad);

//Calcula estadisticas: recibe el arreglo y cantidad, y tres punteros.
void calcularEstadisticas(const double notas[], int cantidad, double *promedio, double *mayor, double *menor);

int main(void){
    //arreglo de notas 16.
    double notas[MAX];
    //Cantidad de notas guardadas y opcion del menu.
    int cantidad = 0, opcion;

    //Resultado de las estadisticas.
    double promedio, mayor, menor;

    //Ciclo del menu para repetir hasta 0.
    do{
        //Mostrar el menu.
        printf("\n1. Agregar 2. Ver notas 3. Estadisticas 0. Salir\n");
        //Pedir la opcion del menu.
        printf("Opcion: ");
        //Leer opcion 
        scanf("%d", &opcion);
        //Elige la rama segun la opcion.

            switch (opcion)
            {
                //opcion 1 agregar.
            case 1:
            agregarNota(notas, &cantidad);
            break;//Sale del switch.

            //Lista de notas.
            case 2:
            mostrarNotas(notas, cantidad);
            break;
            
            //Estadisticas.
            case 3:
                //revisa si no hay notas.
                if (cantidad == 0)
                {
                    printf("No hay notas registradas\n");
                }
                    else{
                        //Hacer la llamada que devuelva 3 resultados.
                        calcularEstadisticas(notas,cantidad, &promedio, &mayor, &menor);
                        //Mostrar resultados.
                        printf("Promedio: %0.f Mayor: %.1f Menor: %.1f\n", promedio, mayor, menor);
                
                }
                break;

                //Opcion cero para salir.
                case 0:
                printf("Hasta luego\n");
                break;

                //Se utilizar para validar ualquier otra opcion que no sea del menu.
                default:
                printf("Opcion invalida\n");
        
      
      }
      //Repita mientras no se elija 0.
    } while (opcion != 0);
    {
        /* code */
    }
    //Termine con main.
    return 0;    
}

//definicion de leer nota.
double leerNota(void){
    double nota;
    //Ciclo de validacion.
    do
    {
        //Pedir nota.
        printf("Nota (0 a 100): ");
        //Leer nota.
        scanf("%lf", &nota);
        //Repite si esta fuera de rango.
    } while (nota < 0 || nota > 100);
    
    //Devuelve una nota valida.
    return nota;
}

//Definicion agregar nota.
void agregarNota(double notas[], int *cantidad){
    //Revisar si esta vacio.
    if (*cantidad < MAX){
    //Guarde la nota.
    notas[*cantidad] = leerNota();
    //Aumentar la cantidad.
    (*cantidad)++;
    }
    else{
        printf("El grupo ya tiene %d notas\n", MAX);
    }
    
}

//Definicion para mostrar notas.
void mostrarNotas(const double notas[], int cantidad){
    //Indice local para recorrer el arreglo.
    int i;
    //For para recorrer las notas.
    for(i = 0; i < cantidad; i++){
        //Mostrar numero, nota y condicion.
        printf("%.2d %.5lf %s\n", i + 1, notas[i], notas[i] >= 70 ? "Aprobado" : "Reprobado");
    }
}

//Definicion de calcular estadisticas.
void calcularEstadisticas(const double notas[], int cantidad, double *promedio, double *mayor, double *menor){
    //Acumulador local.
    double suma = 0;
    //Indice LOCAL para recorrer el arreglo.
    int i;
    //Se supone que la primera nota es mayor.
    *menor = notas[0];
    //for para recorrer las notas.
    for(i = 0; i < cantidad; i++){
        //Suma la nota.
        suma += notas[i];
        //Compare con el mayor
        if (notas[i] > *mayor)
        {
            //Guardar el nuevo mayor.
            *mayor = notas[i];
        }
        
    }
    //Calcule el promedio.
    *promedio = suma / cantidad;
}


