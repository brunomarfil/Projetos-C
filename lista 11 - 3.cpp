#include <stdio.h>
#include <string.h>

/* Receba um vetor de caracteres para guardar uma sequencia de 10 letras.
Na sequencia exiba as 6 primeiras letras, sendo que apenas uma letra
deve ser apresentada por linha*/

 int main(){
 	
   char sequencia[11];
   int i;
 
   printf("\nDigite 10 letras : ");
   scanf("%s", sequencia);

  printf("\nAs 6 primeiras letras da sequencia:");

  for(i=0; i<6; i++){
	printf("\n%c", sequencia[i]);
}
return 0;
}
