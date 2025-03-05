#include<stdio.h>
//Receber um número, calcular seu dobro e exibir o resultado

int main() {

   int nota, calculo;
   
   printf("\nDigite um numero: ");
   scanf ("%d", &nota);

   calculo = nota*2;

   printf ("\nO seu dobro eh %d", calculo);

return 0; 
}
