#include<stdio.h>
/*Calcular a média de um aluno em um semestre com duas provas, onde M
= (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”,
senão calcule e mostre quanto faltou para atingir 5*/
 
 int main() {
	
 int nota1, nota2;
 int media, soma;
  
  printf("\n\nDigite a nota da primeira prova: ");
  scanf("%d", &nota1);

  printf("\n\nDigite a nota da segunda prova: ");
  scanf("%d", &nota2);

  media = nota1 + nota2 / 2;
  printf("\n\tA media foi %d", media);

  if(media<5){
	printf("\n\tReprovado meu amigo");
}
  else{
	printf("\n\tAprovado meu amigo");
}

return 0;
}
