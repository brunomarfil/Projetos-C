#include<stdio.h>
/*Receber a nota de um aluno no módulo 1 e no módulo 2 e calcular a
média deles. O usuário só pode digitar notas no intervalo de 0 a 10, caso
ele digite um valor inválido, deve digitar novamente*/

 int main(){
	
   int modulo1, modulo2, soma, media;

  printf("\nDigite a nota do aluno no modulo 1: ");
  scanf("%d", &modulo1);

  if(modulo1<0 || modulo1>10){
	printf("Valor invalido, digite novamente");
return 0;
}  

  printf("\nDigite a nota do aluno no modulo 2: ");
  scanf("%d", &modulo2);

  if(modulo2<0 || modulo2>10){
	printf("Valor invalido, digite novamente");
return 0;
}
  soma = modulo1+modulo2;
  media = soma / 2;


  printf("\nA media do aluno foi %d", media);

return 0;
}
