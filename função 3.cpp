/*Pedir a idade para o usuário e calcular quantos meses e dias de vida ele tem aproximadamente*/

#include<stdio.h>

 void vida( float meses, float dias);

 int main(){
 	
 	float meses, dias;
 	
 	vida(meses, dias);
 	
 	return 0;
 }
 
  void vida( float meses, float dias){
  	
   float idade;
   
   printf("\nDigite sua idade: ");
   scanf("%f", &idade);
    
   meses = 12*idade;
   dias = 30*meses;
   
   printf("\n\n%.f meses vividos", meses);
   printf("\n\n%.f dias vividos", dias);
   printf("\n\nAmigo voce ja viveu %.f dias!!", dias);
    
  }
