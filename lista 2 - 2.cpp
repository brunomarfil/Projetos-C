#include<stdio.h>
/*Receber um número e verificar se ele esta na faixa de 0 à 9. Se sim,
mostre uma mensagem afirmativa, caso contrário mostre uma mensagem
indicando que o número não se encontra na faixa*/

int main(){
	
   float numero;

    printf("\nDigite um numero: ");
    scanf("%f", &numero);
   
   if(numero <=9){
	printf("\n\tO numero esta na faixa");
}
  else {
	printf("\n\tO numero nao esta na faixa");
}

return 0;
}
