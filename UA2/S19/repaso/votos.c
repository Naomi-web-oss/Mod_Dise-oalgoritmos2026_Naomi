/*votos.c - El grupo va a elegir a su representante entre tres candidatos: 1 Ana, 2 Luis y 3 Sofía. Cada estudiante pasa a la computadora y digita el número de su candidato. No se sabe cuántas personas votarán: la votación termina cuando alguien digita 0.

Cualquier otro número es voto nulo.
Al final se muestra una barra de asteriscos (*) con los votos del candidato.*/

#include <stdio.h>//La librería trae printf y scanf.
#define FIN 0 //Se define e inicializa constantes.

int main(void)/*Es la función principal del programa*/{-
    //Declara como enteros.
    int voto;       //Número que digita cada estudiante.
    int total = 0;  //Contador de votos recibidos(válidos como nulos).
    int ana = 0;    //Contador de votos de Ana (candidato 1).
    int luis = 0;
    int sofia = 0;
    int nulos = 0;  //contador de votos nulos.
    int c;        //Candidato que dibuja el for externo 1 a 3.++
    int i;       //Contador de for interno: una vuelta por cada asterisco.
    int cantidad;    //Votos por candidato.
    int mayor;   //Mayor cantidad de votos por candidatos.
    int empatados;  //Candidatos con la misma cantidad de votos.

    printf("========= Eleccion de representante =========\n");//Printf se utiliza sin tildes ni ñs.
    printf(" 1 Ana   2 Luis   3 Sofia  (0 cierra)\n\n");

    //Lecturas previas.
    //printf("voto: ");
    //scanf("%d, &voto");

    //WHILE (Mientras) con Centinela. Se repite mientras el voto no sea 0.
    while (voto != FIN)
    {
        total++;//Cuenta el voto -> 1, 2, cada vez que pase por el ciclo y llegue a 0.

        //Switch (Según que): Sumar 1 al contador del candidato elegido.
        switch (voto)
        {
        case 1: 
            ana++;
            break;//break: sale del switch.
        
        case 2: 
            luis++;
            break;//break: sale del switch.

        case 3: 
            sofia++;
            break;//break: sale del switch.
        
        default: //Cualquier otro número que no sea 1,2,3.
            nulos++;
            printf("  Voto nulo\n");
            break;
        }
         //Nueva lectura: sin la nueva lectura el voto no cambia y el while no termina.
        printf("voto: ");
        scanf("%d, &voto");
        }
        printf("\nVotos recibidos: %d\n",total);

        //FOR EXTERNO:va a sar una vuelta por candidato c -> 1,2,3.
        for (c = 1; c <= 3; c++){
            switch (c)
            {
            case 1:
                printf("Ana  "); cantidad = ana;
                break;
            case 2:
                printf("Luis  "); cantidad = luis;
                break;
    
            default: printf("Sofia  "); cantidad = sofia;
                break;
            }
            printf("(%d)\n", cantidad);
        }

        //FOR INTERNO:(anidado) un for para los astericos (*) y otro por voto -> Ana.
        for (i = 1; i < cantidad; i++)
            printf("*");
            printf("(%d)\n", cantidad);
        }
}
 printf("Nulos: %d\n", nulos);

 //MAYOR de tres: el primer lugar.
 mayor = ana;
 if(luis > mayor) mayor = luis;
 if(sofia > mayor) mayor = sofia;

//Empatados.
empatados = 0;
if (ana == mayor) empatados++;
if (luis == mayor) empatados++;
if (sofia == mayor) empatados++;

//Desición: solo se ejecuta el primer bloque que se cumpla.
if(mayor == 0)
printf("No hubo votos válidos\n");

else if (empatados > 1)
printf("Empate con %d votos: se repite la votación\n, mayor");//3 votos.

else if (ana == mayor)
printf("Gana Ana con %d votos\n, mayor");

else if (luis == mayor)
printf("Gana Luis con %d votos\n, mayor");

else if (sofia == mayor)
printf("Gana Sofia con %d votos\n, mayor");

return 0;
}