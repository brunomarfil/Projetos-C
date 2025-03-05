#include<stdio.h>
/*Receber um intervalo (dois valores) e em seguida um número. Informar se
o número está dentro, fora ou nas extremidades do intervalo. Por
exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em
uma extremidade do intervalo*/
 
  int main(){
	
  int valor1, valor2, numero;

  printf("\tDigite o primeiro intervalo: ");
  scanf("%d", &valor1);

  printf("\tDigite o segundo intervalo: ");
  scanf("%d", &valor2);

  printf("\n\tDigite o numero: ");
  scanf("%d", &numero);

 if(numero<valor1 || numero>valor2){
	printf("\n\t\tEsta fora");
}else if(numero == valor1 || numero == valor2){
	printf("\n\t\tEsta em uma extremidade");
}else if(numero>valor1 || numero<valor2){
	printf("\n\t\tEsta dentro");
}
 
return 0;
}
