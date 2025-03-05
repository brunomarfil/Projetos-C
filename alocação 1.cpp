/*Alocar espaço para 10 números reais. Mostrar o endereço e receber do usuário os valores. Em
seguida, alterar esses valores, somando 30 a cada elemento. Mostrar novamente o endereço (que
deve ser o mesmo) com o novo valor. Utilizar função para alocação dinâmica*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void aloca(int **ptr, int tam);
 void recebe(int *ptr, int tam);
 void imprime(int *ptr, int tam);
 void adiciona(int *ptr, int tam);

 main(){
 	
 	int *ptr = NULL;
 	
 	printf("\nCodigo para alocar 10 numeros!");
	printf("\n");
	system("pause");
	aloca(&ptr, 10);
 	recebe(ptr, 10);
	printf("\n\nValor do endereco adicionando +30");
	adiciona(ptr, 10);
	imprime(ptr, 10);

 }
 
 void aloca(int **ptr, int tam){
 	
    if((*ptr = (int *) realloc(*ptr, 10 * sizeof(int))) == NULL){
 		printf("\nErro na alocacao! ");
 		exit(1);
	 }else{
	 	printf("\nFuncao aloca - Endereco: %u", *ptr);
	 }
 }
 
 void recebe(int *ptr, int tam){
 	
 	int i;
 	
	printf("\n\nDigite 10 valores!");
 	
 	for(i=0; i<tam; i++){
 	printf("\nEndereco: %u - Valor = ", ptr+i);
    scanf("%i" , ptr+i);
	}
 }
  
  void adiciona(int *ptr, int tam){
  	
  	int i, add;
    for (i=0; i<tam; i++) {
        *(ptr + i) += 30;
   }
}
  
  void imprime(int *ptr, int tam){
  	
  	int i;
  	
  	printf("\n\nFuncao imprime - Mostra os valores");
  	for(i=0; i<tam; i++){
  		printf("\nEndereco: %u - Valor = %i", ptr+i, *(ptr+i));
	  }
  }
  
  
