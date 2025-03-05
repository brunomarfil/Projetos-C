#include <stdio.h>
#include <string.h>

/* Crie um programa que recebe primeiramente um sobrenome e depois o
nome de uma pessoa, ou seja, receba em diferentes cadeias de strings.
Mostre o nome e sobrenome concatenando os nomes digitados. Retorne
também a quantidade de caracteres dessa string formada pelo nome
completo*/

 int main(){
	
   char nome[20], sobrenome[20];

   printf("\nDigite seu sobrenome: ");
   gets(sobrenome);

   printf("\nDigite seu nome: ");
   gets(nome);

  strcat(nome, sobrenome);

  printf("\n%s", nome);

  strlen(nome);
  printf("\nO tamanho: %d", strlen(nome));

return 0;
}
