#include<stdio.h>

//Receber um número e informar se ele é negativo ou não é negativo

int main(){
	
    float numero;

     printf("\n\tDigite um numero: ");
     scanf("%f", &numero);
    
    if(numero > 0){
	 printf("\n\t\tO numero eh positivo");
}
   if(numero < 0){
	printf("\n\t\tO numero eh negativo");
}


return 0;
}
