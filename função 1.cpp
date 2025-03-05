/*Calcular e mostrar o produto de 2 números.*/

#include<stdio.h>

   int soma(int produto1, int produto2);
   
 int main(){
 	
 	int produto1, produto2;
 	
    soma(produto1, produto2);
 	
 	return 0;
 }
 
  int soma(int produto1, int produto2){
  	
  	int soma, i;
  	
  	printf("\nDigite o primeiro numero: ");
  	scanf("%d", &produto1);
  	printf("\nDigite o segundo numero: ");
    scanf("%d", &produto2);
	
  	
  	soma = produto1 + produto2;
  	
  	printf("\nA soma dos dois produtos sao: %d", soma);
  }
