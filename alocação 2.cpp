/*Aloque espaço para uma seqüência de números reais escolhida pelo usuário. Receba os valores
e imprima-os em ordem inversa. Utilizar função para alocação dinâmica*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void aloca( int **ptr, int tam);
 void recebe(int *ptr, int tam);
 void imprime(int *ptr, int tam);
 void inverte(int *ptr, int tam);
 
 main(){
 	
 	int *ptr = NULL;
 	int tam;
 	
 	printf("\n\n\tPROGRAMA QUE ALOCA OS NUMEROS QUE O USUARIO QUISER E OS INVERTE ");
    printf("\n\n\t");
	system("pause");
 	printf("\nDigite quantos numeros deseja alocar: ");
 	scanf("%i", &tam);
 	aloca(&ptr, tam);
 	recebe(ptr, tam);
 	inverte(ptr, tam);
	imprime(ptr, tam);
 	
 }
 
 void aloca(int **ptr, int tam){
 	
 	int num; 
 	
 	if((*ptr = (int*) realloc(*ptr, num * sizeof(int*))) == NULL ){
 		printf("\nErro na locacao!");
 		exit(1);
	 }else{
	 	printf("\nFuncao aloca - Endereco : %u", *ptr);
	 }
 }
 
 void recebe(int *ptr, int tam){
 	
 	int i;
 	
    for(i=0; i<tam; i++){
    	printf("\nEndereco: %u - Valores = ", ptr+i);
    	scanf("%i", ptr+i);
	}
 }
 
 void inverte(int *ptr, int tam){
 	
  int inicio = 0;
    int fim = tam - 1;
    int temp;

    while (inicio < fim) {
        temp = ptr[inicio];
        ptr[inicio] = ptr[fim];
        ptr[fim] = temp;

        inicio++;
        fim--;
    }
 }
 
 void imprime(int *ptr, int tam){
 	
 	int i;
 	
 	printf("\n\nFuncao imprime - Mostra os valores");
  	for(i=0; i<tam; i++){
  		printf("\nEndereco: %u - Valor = %i", ptr+i, *(ptr+i));
	  }
  }
 
