//datos.c - Facturación de datos móviles.
/*ENUNCIADO: Una empresa nos pide realizar la factura de sus clientes (de 1 a 10 clientes).
De cada uno se digita el número, el plan (Básico, Medio, o Plus). Y lo que consumió en el mes en GB de internet se validad que no pase de (0 a 100) y el consumo excedente de internet.*/

#include <stdio.h>
#define MAX_CLIENTES 10

// PROTOTIPO
void limpiarBuffer();

int main (void){
//Definir variables
int i, tipo_plan, cantidad;
double GB, factura;

char numeros[MAX_CLIENTES][20];

printf("===== Ventas de telefonia =====\n");

//do while: Para que la cantidad de clientes sea entre 1 a 10.
do
{
    printf("Cantidad de clientes:");//Cantidad de clientes.
    scanf("%d", &cantidad);

if (cantidad < 1 || cantidad > 10)
{
    printf("Dato inválido\n");
}

} while (cantidad < 1 || cantidad > 10);


//For: Para poder ingresar el numero segun la cantidad anterior.
    for (i = 0; i < cantidad; i++)
{
    printf("Ingrese el numero del cliente:\n", i + 1);
    scanf("%s", numeros[MAX_CLIENTES]);
    limpiarBuffer();



printf("=====Tipos de plan:  =====\n");
printf("1. Básico: 5 GB por 6000.\n");
printf("2. Medio: 10 GB por 90000.\n");
printf("3. Plus: 20 GB por 14000\n");

//Indicar el tipo de plan.
printf("Ingrese el tipo de plan (1,2,3):");
scanf("%d",&tipo_plan);
limpiarBuffer();

switch (tipo_plan)
{
case 1:
    printf("Plan 1. Básico: 5 GB por 6000.\n");
    break;

case 2:
    printf("Plan 2. Medio: 10 GB por 90000.\n");
    break;

case 3:
    printf("Plan 3. Plus: 20 GB por 14000.\n");
    break;

default:
    break;
}

//Los GB usados en el mes (entre 0 a 100).
do
{
    printf("Ingrese los GB usados en el mes (0 a 100)\n: ");
    scanf("%lf", &GB);  
    limpiarBuffer();
} while (GB < 0 || GB > 100);
}

//Factura.
do
{
    factura = factura - GB;
} while (factura > 25000);



//Que cada GB adicional cueste 1200.
//La factura no puede superar 25000.
//Sacar monto.
//Sacar total facturado.
//El cliente con mayor factura.
//Cuantos llegaron al tope.


printf("------------Factura--------------");

for (i = 0; i < cantidad; i++)
{
    printf("Numero de cliente\n: %s",numeros[MAX_CLIENTES]);
}
printf("_________________________________");
for (i = 0; i < cantidad; i++)
{
    printf("\nNumero de GB: %f",GB);
}
printf("_________________________________");
printf("_________________________________");

}

//-----------------------------------------------------------------
//DEFINICION.
//FUNCION 1: LIMPIAR BUFFER
void limpiarBuffer() {

    int caracter;

    while ((caracter = getchar()) != '\n' && caracter != EOF) {
    }
}