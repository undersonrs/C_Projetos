#include <stdio.h>
 
int main (void)
{
   /* Espaço reservado de 8 caracteres (mínimo), preenchendo com zeros a esquerda até o máximo de 6 caracteres /*
   printf("|%8.6d|\n", 820);
 
   /* Espaço reservado de 10 caracteres /*
   printf("|%10d|\n", 820);
 
   /* Preenche com zeros a esquerda até o máximo de 8 caracteres */
   printf("|%.8d|\n", 820);
   printf("|%08d|\n", 820);
 
   /* Espaço reservado de 2 caracteres (mínimo), com 2 casas decimais (o número é arredondado) */
   printf("|%2.2f|\n", 1223.4432);
 
   /* Espaço reservado de 10 caracteres (mínimo), com 2 casas decimais (o número é arredondado) */
   printf("|%10.2|f\n", 1223.4432);
 
   /* Espaço reservado de 20 caracteres (mínimo), a quantidade de casas decimais é especificado pelo número a ser impresso */ 
   printf("|%20f|\n", 1223.4432);
 
   /* A quantidade de caracteres utilizados é específicado pelo número a ser impresso, com 2 casas decimais (o número é arredondado) */
   printf("|%.2f|\n", 1223.4432);
 
   /* Mínimo de 10 caracteres */
   printf ("|%10s|\n", "abcdefgh");
 
   /* Mínimo e máximo de 10 caracteres */
   printf ("|%10.10s|\n", "abcdefghijk");
 
   /* Mínimo de 10 caracteres. Preenche com espaços em brancos até o limite de 10 caracteres */
   printf ("|%10s|\n", "abcdef");
 
   /* misturando vários tipos */
   printf("O Sr. %s tem %2d anos de idade e ganhar R$ %.2f mensalmente.", "Pacífico Pacato Cordeiro Manso", 37, 5567.32);
   return 0;
}