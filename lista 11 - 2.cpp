#include<stdio.h>
#include<string.h>
/*Escreva um programa que receba uma palavra que contenha no máximo
10 caracteres e no mínimo 3. Caso a palavra digitada não esteja de
acordo, informe a quantidade de caracteres digitados e leia uma nova
palavra*/

 int main (){
	
   char palavra[11];

  do{

  printf("\nDigite uma palavra entre 3 e 10 letras no maximo: ");
  scanf("%s", palavra);

  if (strlen(palavra) < 3 || strlen(palavra) > 10) {
        printf("\nPalavra invalida!\n");
        printf("\nTamanho da palavra: %d\n", strlen(palavra));
}else{
        printf("\nPalavra valida!\n");
            break;
        }

    } while (1);

return 0;
}
