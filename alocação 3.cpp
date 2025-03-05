/*Idem ao exercício anterior, porém a seqüência de números reais deverá ser digitada pelo usuário,
até que este escolha a opção N (Deseja continuar? (S/N)). Utilizar função para alocação
dinâmica*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
  void sn(int *ptr, int *tam);
  void aloca(int **ptr, int tam);
  void recebe(int *ptr, int tam);
  void imprimeInverte(int *ptr, int tam);

  main(){
   	
  int *ptr = NULL;
  int tam = 0;

  printf("\n\tPrograma para alocar e inverter numeros!");
  printf("\n\t");
  system("pause");
  
  sn(ptr, &tam);
  aloca(&ptr, tam);
  recebe(ptr, tam);
  imprimeInverte(ptr, tam);

  free(ptr);

  return 0;
}

  void sn(int *ptr, int *tam) {
    
  char op;

  printf("\nDigite quantos numeros deseja alocar: ");
  scanf("%i", tam);

  do{
  printf("\nDeseja continuar ? <S/N>: ");
  scanf(" %c", &op);

  if (op == 'S' || op == 's')
  (*tam)++;

  }while(op != 'N' && op != 'n');
  }

  void aloca(int **ptr, int tam){
  
  *ptr = (int*) realloc (*ptr, tam * sizeof(int));
    
  if (*ptr == NULL){
  printf("\nErro ao alocar!");
  exit(1);
  }else{
  printf("\n\nFuncao Aloca - Endereco: %u ", *ptr);
  }
  }

  void recebe(int *ptr, int tam){
    
  int i;
  
  for (i = 0; i < tam; i++){
  printf("\n\nEndereco: %u - Valor = ", ptr+i);
  scanf("%i", ptr+i);
  }
  }

  void imprimeInverte(int *ptr, int tam){
  
  int i, temp, inicio = 0;
  int fim = tam - 1;

  while (inicio < fim){
  temp = ptr[inicio];
  ptr[inicio] = ptr[fim];
  ptr[fim] = temp;

  inicio++;
  fim--;
  }

  printf("\nValores invertidos:\n");
    
  for (i = 0; i < tam; i++){
  printf("\nEndereco: %u - Valor = %i", ptr+i, *(ptr+i));
  }
  }
