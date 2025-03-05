#include<stdio.h>
//Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem que foram recebidos

 int main(){
	
     int num[10];
  
  printf("\nDigite 10 numeros:\n ");

  for(int i; i<10; i++){
  printf("Numero %d: ", i + 1); 
  scanf("%d", &num[i]);
}

  printf("\nNumeros na ordem que foram recebidos:\n");
  for(int i; i<10; i++){
	printf("%d ", num[i]);
}

return 0;
}

