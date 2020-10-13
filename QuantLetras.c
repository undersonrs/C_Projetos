#include <stdio.h>
#include <string.h>
 
int main(void)
{
   char Frase [90];
   int  Tamanho;
 
   printf("Entre com uma frase : \n");
 
   gets(Frase);
 
   /* a funcao strlen informa a quantidade de caracteres utilizados, ou seja,
      é levado em consideração todos os caracteres até ser encontrado o \0 */

   Tamanho = strlen(Frase);
 
   printf("A frase possui %d caracteres\n", Tamanho);
      printf("A variável tem tamanho %d\n",sizeof(Frase));

   return 0;
}