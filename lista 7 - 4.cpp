#include<stdio.h>
/*Receber 15 números e armazená-los em um vetor. Ao final, exibir o dobro
de cada um dos números*/

 int main(){
	
  int num[15];
  int i;
  
    printf("\nDigite 15 numeros para um vetor");
   for(i=0; i<15; i++){
    printf("\n\tNumero %d :", i + 1);
    scanf("%d", &num[i]);
}

 for(i=0; i<15; i++){
	printf("\nNumero %d", 2 * num[i]);
}

return 0;
}
