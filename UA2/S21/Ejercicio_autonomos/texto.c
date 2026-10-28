//texto.c -  Analizar una frase.
//Qué se logra: leer una frase, mostrarla en mayúsculas y contar vocales, consonantes y dígitos. 

#include <stdio.h>
#include <ctype.h>

int esVocal(int c);

int main(void) {  
    int limpiar;
    int digitos = 0;
    int letras = 0;
    int c;
    int i;

        printf("Frase: ");
        while ((limpiar = getchar()) != '\n' &&
                    limpiar != EOF) {}
        fgets(c, sizeof(c), stdin);
         c[strlen(c)] = '\0'; 

       for (i = 0; i < c; i++)
       {
      
      if (isalpha(c)) { 
               letras++
           } 
      if (isdigit (c))
       {
         digitos++
       }

       putchar(toupper(c));
      
      }
      return 0; 
  } 