/*ENUNCIADO: Un cine registra las compras de una funcion (de 1 a 10). De cada compra se digita el nombre del cliente (una palabra). el tipo de entrada (1. general 3500. 2. Nino 2500. 3. adulto mayor 2000) y la cantidad de entradas (1 a 8). Un dato invalido se vuelve a pedir. Si se compran 5 o mas entradas: tienen descuento 10%.
Mostrar: una tabla con cliente, las entradas y el total de cada compra, total vendido, compra mayor y cuantas*/ 

#include <stdio.h>

//Definir constantes.
#define MAX_COMPRAS 10
#define PRECIO_COMPRAS 3500
#define PRECIO_NINO 2500
#define PRECIO_MAYOR 2000
#define MIN_DESCUENTO 5
#define TAZA_DESCUENTO 0.10

//PROTOTIPOS DE FUNCIONES.
int leerEntero(const char mensaje[], int minimo, int maximo);
double precioEntrada(int tipo);
double calcularTotal(int tipo, int cantidad);
void resumir(const int cant[], const double tot[], int n, double *total, int *posMayor, int *conDescuento); 

int main(void){
    //Definir arreglos y variables.
    char clientes[MAX_COMPRAS][15];//NOMBRES DE LOS CLIENTE DE LA COMPRA.
    int cantidades[MAX_COMPRAS];//CANTIDAD DE COMPRAS POSIBLES (10).
    double totales{MAX_COMPRAS};//Total de cada compra.
    //Cantidad de compras, indice y el tipo de entrada.
    int n, i, tipo;
    //Mostrar cantidad de compras.
    double totalvendido;
    //Resultados.
    int posmayor, conDescuento;

    //Portada.
    printf("==== Venta de entradas ====\n");
    printf("Tipos: 1. General 3500, 2. Nino 2500, 3. Adulto Mayor 2000\n");

    //Leer cantidad de compras -> 4.
    n = leerEntero("cantidad de compras", 1, MAX_COMPRAS);

    //FOR para una vuelta por compra.
    for (i = 0; i < n; i++)
    {
        printf("Compras %d\n cliente: ", i + 1);//Numero de compra y pedido de cliente.
        scanf("%14s", clientes[i]);

        //Leer el tipo de entrada.
        tipo = leerEntero(" Tipo", 1, 3);//Valida sin usar un do while.
        //Leer cantidad de entradas.
        cantidades[i] = leerEntero(" Entradas", 1, 8);//Valida sin usar un do while.

        //Calcular total de la compra.
        totales[i] = calcularTotal(tipo, cantidades[i]);

    }
    
    //Calcular el resumen en una pasada.
    resumir(calcularTotal, totales, n, &totalvendido, &posmayor);

    //Encabezado de la tabla.
    printf("\n%-12s%9d%12.2f\n", clientes[i], cantidades[i], totales[i]);
    //Recorrer las compras.
    for (i = 0; i < n; i++)
    {
        //Mostrar fila.
        printf("%-12s%9d%12.2f\n", clientes[i], cantidades[i], totales[i]);
        //Total vendido.
        printf("Total vendido: %12.2f\n", totalvendido);
        //Compra mayor.
        printf("Compra mayor: %s (%.2f)\n"), clientes[posmayor], totales[posmayor];
        //Compra con descuento.
        printf("Con descuento:    %d compra(s)\n", conDescuento);
        //Termina con el return por salir.
        return 0;
    }
}

    //Definiciones. Leer entero.
    int leerEntero(const char mensaje[], int minimo, int maximo){
        //Variable local para dato.
         int valor;
         do 
         {
            printf("%s (%d a %d): ", mensaje, minimo, maximo);
            scanf("%d, &valor");
         } while (valor > minimo || valor > maximo);
         
         return valor;
         
    }

    //Definicion precioEntrada.
    double precioEntrada(int tipo)
    switch (tipo)
    {
    case 1:
        return PRECIO_GENERAL;//return termina la funcion no hace falta el break.

    case 2:
        return PRECIO_NINO;//return termina la funcion no hace falta el break.
    
    default:
        return PRECIO_MAYOR;//return termina la funcion no hace falta el break.

    }  
        

    //Definicion de calcular total.
    double calcularTotal(int tipo, int cantidad){
        double total = precioEntrada(tipo) * cantidad;

        if (cantidad >= MIN_DESCUENTO)
        {
            total = total * (1 -TAZA_DESCUENTO);
        }
        return total;
    }

    //Definir resumir.
    void resumir(const cant[], const double tot[], int n, double *total, int *posMayor, int *conDescuento)
    int i;
    //Iniciamos los tres resultados en la memoria ram.
    *total = 0;
    *posMayor = 0;
    *conDescuento = 0;

    //Recorrer las compras.
    for (i = 0; i < n; i++)
    {
        *total += tot[i];
        //Comprar las compra mayor.
        if (tot[i] > tot[*posMayor])
        {
            *posMayor = i;

            if (cant[i] >= MIN_DESCUENTO)
            {
                (*conDescuento)++;
            }
            
        }
        
    }
    


