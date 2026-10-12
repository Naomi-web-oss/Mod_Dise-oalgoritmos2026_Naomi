//descuento.c - DescuentoPorMonto.
 // 10 % de descuento en compras de 50000 o más.
 #include <stdio.h>
 int main(void){

    //Definir variables como real.
    double compra, descuento, total;

    //Entradas y lecturas.
    printf("Monto de la compra");
    scanf("%lf", &compra);

    //Proceso.
    if (>= 50000) {
        descuento = compra * 0.10; 
    }
    else if 
    {
        descuento <- 0;
    }
    
    printf("Descuento: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);
    
    return 0;
 }