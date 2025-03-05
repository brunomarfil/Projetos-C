/*Crie uma tabela (vetor) que armazene as temperaturas diárias registradas durante um mês e em
seguida elabore um programa que calcule :
• A maior temperatura e o dia em que ocorreu
• A temperatura média mensal
• As temperaturas inferiores à média e os dias em que ocorreram*/

#include <stdio.h>
#include <stdlib.h>
 
 void temp_recebe(float *temp, int tam);
 void temp_maior(float *temp, int tam);
 float temp_media(float *temp, int tam);
 int temp_inf(float *temp, int tam, float media, int *posicao);
 void imprime_inf(float *temp, int *posicao, int quantidade);
 

 int main(){
 	
 	float temp[30], media;
 	int i, tam;
	int posicao[30], quantidade;
 	
 	printf("\n\t\t\tPrograma de Temperaturas Diarias !!");
 	printf("\n\t\a");
 	system("pause");
 	
	do{
		printf("\nDigite quantos dias do mes voce quer registrar a temperatura (max 30): ");
		scanf("\n%i", &tam);
		fflush(stdin);
	}while(tam<0 || tam>30);
	  
 	temp_recebe(temp, tam);
 	temp_maior(temp, tam);
 	media = temp_media(temp, tam);
    quantidade = temp_inf(temp, tam, media, posicao);
    imprime_inf(temp, posicao, quantidade);
 	  
 	return 0;
 }
 
  void temp_recebe(float *temp, int tam){
  	
  	int i;
  	
  	for(i=0; i<tam; i++){
  		printf("\nDia [%i]: ",  i+1);
  		scanf("%f", (temp + i));
  		fflush(stdin);
	  }
  	
  }
  
  void temp_maior(float *temp, int tam){
  	
  	float maior;
  	int i, dia;
  	
  	maior = temp[0];
  	dia = 1;
  	
  	for(i=1; i<tam; i++){
  		
		if(maior < *(temp+ i)){
		  
  		maior = temp[i];
  		dia = i+1;
  	    }
	}
  	printf("\nA maior temperatura ocorreu no dia %i e foi %.2f", dia, maior);
  }
  
  float temp_media(float*temp, int tam){
  	
 int i;
 float media = 0;
 
 for(i=0; i<tam; i++){
 	
 	media += *(temp + i);
 }
   
   media = media/tam;
 
 printf("\nA media das temperaturas eh %.2f", media);
 return media;
 
  }
  
  int temp_inf(float *temp, int tam, float media, int *posicao){
  	
  	int i, j=0;
	
	for(i=0; i<tam; i++){
		
		if(*(temp + i) < media){
			
			posicao[j] = i;
			j++;
		}	
	}
 return j;
 }
  
  void imprime_inf(float *temp, int *posicao, int quantidade){
	
	int i;
	
	printf("\n\nTemperaturas inferiores a media: ");
	
	 for(i=1; i<quantidade; i++){
		
		printf("\nDia %i - temperatura foi de %.2f\n", posicao[i]+1, temp[posicao[i]]);
	}
 }
