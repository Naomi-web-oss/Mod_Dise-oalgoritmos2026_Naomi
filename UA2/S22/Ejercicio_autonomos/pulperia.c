//pulperia.c - Inventario de una pulpería.
/*Programar el inventario de una pulpería con un menú que permita listar los productos, vender (solo si hay existencias), reponer y consultar el valor del inventario.*/

#include <stdio.h>
#define MAX 4

int leerEntero(const char mensaje[], int minimo, int maximo);
void listar(const char nombres[], const double precios[], const int existencias[], int n);
int vender(int *existencia, int cantidad);
void reponer(int *existencia, int cantidad);
double valorInventario(const double precios[], const int existencias[], int n);

int main(void){
    int opcion;
    int N = 4;

//Ciclo para repetir hasta 0.
    do{
        //Mostrar.
        printf("\n1. Listar 2. Vender 3. Reponer  4. valor 0. Salir\n");
        //Pedir la opcion.
        printf("Opcion (0 a 4): ");
        //Leer opcion 
        scanf("%d", &opcion);
        //Elige la rama segun la opcion.

            switch (opcion)
            {
                //opcion 1 listar.
            case 1:
            leerEntero(mensaje, &opcion);
            break;//Sale del switch.

            //vender.
            case 2:
            leerEntero(const char mensaje[], int minimo, int maximo);
            break;
            
            //Reponer.
            case 3:
                leerEntero(const char mensaje[], int minimo, int maximo);
                break;

                //Valor.
                case 4:
                leerEntero(const char mensaje[], int minimo, int maximo);
                break;

                //Opcion cero para salir.
                case 0:
                printf("Hasta luego\n");
                break;

                //Se utilizar para validar cualquier otra opcion.
                default:
                printf("Opcion invalida\n");
        
       //Repita mientras no se elija 0.
    } while (opcion != 0);
    {
    }
    return 0;   
      }
    }
//definicion leerEntero.
int leerEntero(const char mensaje[], int minimo, int maximo);{
    double nota;
    //Ciclo de validacion.
    do
    {
        //Pedir opcion.
        printf("Opcion: (0 a 4): ");
        //Leer opcion.
        scanf("%d", &opcion);
        //Repite si esta fuera de rango.
    } while (opcion < 0 || opcion > 4);
    
    //Devuelve una nota valida.
    return opcion;
}

//Definicion Listar.
voidlistar(const char nombres[], const double precios[], const int existencias[], int n){
    printf("");
    printf("");
    printf("");
    printf("");
    
}

//Definicion vender.
int vender(int *existencia, int cantidad){
    //Indice local para recorrer el arreglo.
    int i;
    //For para recorrer las notas.
    for(i = 0; i < cantidad; i++){
        //Mostrar numero, nota y condicion.
        printf("%.2d %.5lf %s\n", i + 1, notas[i], notas[i] >= 70 ? "Aprobado" : "Reprobado");
    }
}

//Definicion reponer.
void reponer(int *existencia, int cantidad){
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

//Definicion reponer.
double valorInventario(const double precios[], const int existencias[], int n){
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
}
