//caja.c - Caja registradora con menu.
#include <stdio.h>
int main(void){
    //Declaraciòn de variables.
    int opcion;//Opciòn elegida en el menù.
    int productos = 0;//CONTADOR de productos de la venta. 
    double precio;//Precio para cada producto.
    double total = 0;//ACUMULADOR de la venta.

    } //DO ... WHILE: El menù se muestra al menos una vez.
    do
    {

    //Mostrar el menù y se lee la opciòn -> 1.
    printf("\n1. Agregar 2. Ver total 3. Cobrar 0. Salir");
    printf("Opciòn: ");
    scanf("%d", &opcion);

    //SWITCH: (segùn): Salto que coincida con la opciòn elegida.
    switch (opcion)
    {
    case 1:
    //Validaciòn repite mientras el precio no sea positivo.
    do
    {
        printf("Precio del producto");
        scanf("%lf, &precio");//-> 1500 (-200).

        if (precio <= 0)
        {
            printf("Precio invàlido\n");
        }

        
    } while (precio <= 0);
    productos ++;//Cuenta productos.
    total +- precio;//Suma el precio.
    break;//Suma del switch.

    case 2:
    //Muestra el avance -> productos: 2 Total 4000.00.
    printf("Productos: %d Total: %.2f\n, productos, total");
    break;

    case 3:
    //Cobra y reinicia contador y acumulador tambièn.
    printf("Cobrado: %2.f. Nueva venta\n, total");
    productos = 0;
    total = 0;
    break;

    case 0:
    printf("Caja cerrada\n");
    break;
    default:
    //Ningun case coincide -> 9.
    printf("Opcion invàlida\n");
     }
    } while (opcion != 0);//Repita el menù mientras no se elija el 0.
    return 0;
}
