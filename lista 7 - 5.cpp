#include<stdio.h>

/*Receber 12 números e armazená-los em um vetor. Ao final, exibir quais
foram os números positivos informados*/

 int main(){
	
   int num[12];
   int i;

   printf("\nDigite 12 numeros");
  for(i=0; i<12; i++){
	printf("\n\tNumero %d :", i +1);
    scanf("%d", &num[i]);
}
  
  for(i=0; i<12; i++){
	if(num[i]>0){
    printf("\nNumero %d eh positivo", num[i]);
}
}
return 0;
}
