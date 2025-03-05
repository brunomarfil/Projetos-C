#include<stdio.h>
/*Receber uma temperatura em Fahrenheit e convertê-la para Celsius
através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor
em Celsius*/

 int main() {
	
   int fahrenheit, celsius;

   printf("\nDigite a temperatura em fahrenheit: ");
   scanf("%d", &fahrenheit);

   celsius = fahrenheit -32/ 1.8;
    
    printf("\n\tO valor de celsius eh %d", celsius);

return 0; 
}
