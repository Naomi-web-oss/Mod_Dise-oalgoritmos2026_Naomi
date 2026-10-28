//texto.c -  Analizar una frase.
//Qué se logra: leer una frase, mostrarla en mayúsculas y contar vocales, consonantes y dígitos. 

#include <stdio.h>
#include <ctype.h>

int esVocal(int c);

int main(void) {  
    int digitos = 0;
    int letras = 0;
    int c;
    int i;

        printf("Frase: ");
        c = getchar();

       for (i = 0; i < c; i++)
       {
      
      if (isalpha(c)) { 
               letras++;
           } 
      if (isdigit (c))
       {
         digitos++;
       }

       putchar(toupper(c));
      
      }

      printf("Frase: %d", c);
      return 0; 
  } 