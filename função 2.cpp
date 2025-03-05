/*Ler 2 notas e calcular a média*/

#include<stdio.h>

 void media(float nota1, float nota2);
 
 int main(){
 	
 	float nota1, nota2;
 	
 	media(nota1, nota2);
 	
 	return 0;
 }
 
  void media(float nota1, float nota2){
  	
  	float soma, media;
  	
  	 printf("\nDigite 1 nota: ");
  	 scanf("%f", &nota1);
  	 printf("\nDigite 2 nota: ");
  	 scanf("%f", &nota2);
  	 
  	 soma = nota1 + nota2;
  	 
  	 media = soma/2;
  	 
  	 printf("\nA soma eh %.2f e a media eh %.2f", soma, media);
  }
