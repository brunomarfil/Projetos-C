/*Calcular a área de uma esfera. A = 4 pi r2 */

 #include<stdio.h>
 
 void calcular_area(float raio);
 
 int main(){
 	
 	float raio;
 	printf("\n\tVamos calcular a area de uma esfera!!");
 	
 	calcular_area(raio);
 	
 	return 0;
 }
 
  void calcular_area(float raio){
  	
  	float area, quadrado, calculo;
	
	printf("\nFormula de calculo A = 4 pi r2 ");
  	printf("\n\nDigite o raio da esfera: ");
  	scanf("%f", &raio);
  	
  	area = 4*3;
  	quadrado = (raio*raio);
  	calculo = area * raio;
  	
  	printf("\nO calculo deu %.2f", calculo);
  	
  }
