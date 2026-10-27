#include <stdio.h>//Biblioteca de entrada y saliada.
#define TASA_IVA 0.13//Es una constante, antes de compilar TASA_IVA se cambia por 0.13.

double calcularIVA(double monto);//Prototipo.
//el prototipo va antes del main.//Anuncia la funcion, dice el tipo que devuelve(double), el nombre(calcularIVA) y lo que recibe: un parámetro llamado monto de tipo double.

//Monto es el nombre del parametro. Es como un espacio vacio que espera un dato.


int main(void){//Funcion principal.
    double precio = 15000;//Variable de main: guarda el precio que se va a enviar. precio = 15000.

    double iva = calcularIVA(precio);//Llamada con una variable.
    //El valor de 15000 se copia en el parámetro monto

    //En la llamada se usa la función: se envia un argumento, el valor concreto (precio, 2500 o cualquier expresion).Ese valor se copia en monto.

    //Argumento: el valor que se envia en la llamada: (precio, 2500).

    printf("IVA de %.2f: %.2f\n", precio, iva);

    printf("IVA de 2500: %.2f\n", calcularIVA(2500));//Llamada con un numero.
    //Aquí monto recibe 2500 y el resultado va directo a printf, sin guardarlo.

    //2500 x 0.13 = 325.00

    return 0;
}

double calcularIVA(double monto) {//Definicion: el codigo de la funcion.
//Mismo encabezacado del prototipo, pero sin ; y con llaves.

//Monto es una variable que existe solo dentro de la funcion.

return monto * TASA_IVA;//Calcula y devuelve 
}
//return entrega el valor a quien llamo y termina la funcion.
//15000 x 0.13 = 1950
//Parametro = a la variable de la definicion (monto).