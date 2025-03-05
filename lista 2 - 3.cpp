#include<stdio.h>
/*Receber numerador e denominador. Calcular e mostrar o resultado da
divisão, desde que possível (denominador diferente de zero). Se não for
possível dividir, apenas escreva “não existe divisão por zero*/

 int main(){
	int numerador, denominador, calculo;

     printf("\nDigite o numerador: ");
     scanf("%d", &numerador);

     printf("\nDigite o denominador: ");
     scanf("%d", &denominador);

    if (numerador && denominador <0){
	 printf("Nao existe divisao por 0");
}
 
    calculo = numerador / denominador;
   
   printf("\n\tA divisao foi %d", calculo);
     

return 0;
}
