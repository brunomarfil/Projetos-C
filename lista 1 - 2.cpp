#include<stdio.h>
//Receber dois valores, calcular sua média aritmética e exibir o resultado
 
   int main () {

   float valor1, valor2;
   int media, soma;
   
   printf("\n\tDigite o primeiro valor: ");
   scanf("%f", &valor1);

   printf("\n\tDigite o segundo valor:");
   scanf("%f", &valor2); 

   soma = valor1 + valor2; 
   media = soma*2;

   printf("\n\tO resultado foi %d", media );

return 0; 
}
