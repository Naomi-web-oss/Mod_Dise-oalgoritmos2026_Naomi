//credito.c - aprobación de credito.
 // Regla: capacidad de pago Y sin deudas Y (antigüedad >= 1 O fiador).
 #include <stdio.h>
 int main(void){
    //Definir variables.
    //Definir variables como Real.
    double salario, cuota;
    //Definir variables como Entero.
    int antiguedad;
    //Definir variables como Caracter.
    char respDeudas, respFiador;
    //Definir variables como Logico.
    int capacidadPago, tieneDeudas, tieneFiador, aprobado;

    //Entradas y lecturas.
    printf("Salario mensual: ");
    scanf("%lf, &salario");

    printf("Cuota mensual del crédito: ");
    scanf("%lf, &cuota");

    printf("¿Tiene deudas atrasadas? (S/N): ");
    scanf("%c, &respDeudas");

    printf("Años de antigüedad laboral: ");
    scanf("%d, &antiguedad");

    printf("¿Tiene fiador? (S/N): ");
    scanf("%c", &respFiador);

    //Proceso.
    capacidadPago = salario >=cuota * 3;
    tieneDeudas = Mayusculas(respDeudas) = "S";
    tieneFiador = Mayusculas(respFiador) = "S";
    aprobado = capacidadPago  &&  !tieneDeudas  && (antiguedad >= 1 || tieneFiador);

    if (aprobado)
    {
        printf("Crédito aprobado");
    else 
        printf("Crédito rechazado");
    }
    
 }