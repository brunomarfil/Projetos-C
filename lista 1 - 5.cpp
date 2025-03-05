#include<stdio.h>
//Criar um programa em Linguagem C que receba dois números inteiros e retorne: o valor da divisão e o resto da divisão
  
   int main() {
	
   int numero1, numero2;
   int divisao, resto;

    printf("\nDigite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    divisao = numero1 / numero2;
    resto = numero1 % numero2;

    printf("\n\tO valor da divisao de %d por %d foi %d", numero1, numero2, divisao);
    printf("\n\tO resto foi %d", resto);


return 0;
}
