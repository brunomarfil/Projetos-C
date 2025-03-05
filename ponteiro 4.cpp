/*Ler e armazenar 2 notas, verificar se estão no intervalo de 0 à 10. Calcular a média para 100
alunos (utilizar matrizes) e verificar :
se m >= 7 – imprimir APROVADO
se 4 <= m < 7 – imprimir EXAME
se m < 4 – imprimir REPROVADO*/

#include<stdio.h>
 
 void nota1(int x);
 void nota2(int y);
 
 int main(){
 	
 	int x, y;
 	
    printf("\nVamos calcular a media para 100 alunos!");
 	
	 nota1(x);
 	nota2(x);
 	
 	return 0;
 }
 
  void nota1(int x){
  
  printf("\nDigite a primeira nota: ");
  scanf("%i", &x);
  
  if(x <=10){
  	printf("\nNota aceita!");
  }else{
  	printf("\nNao aceita!");
  }

}

 void nota2(int y){
 	printf("\nDigite a segunda nota: ");
  scanf("%i", &y);
  
  if(y<=10){
  	printf("\nNota aceita!");
  }else{
  	printf("\nNao aceita!");
  }

 }

  
