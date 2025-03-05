#include<stdio.h>
//Receber um número e informar se ele é positivo, negativo ou nulo

 int main(){

  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (numero >0){
	printf("O numero eh positivo");
}
  if (numero <0){
    printf("O numero eh negativo");
}
  if (numero =0){
	printf("O numero eh nulo");
}

return 0;
}
