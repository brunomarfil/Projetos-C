#include<stdio.h>
//Receber um comprimento em metros, convertê-lo para centímetros e mostrar o resultado

   int main(){
	
  float metros, centimetros;

  printf("\nDigite o comprimento em metros: ");
  scanf("%f", &metros);

  centimetros = metros*100;

  printf("\n\tO resultado foi %.f", centimetros);

 return 0; 
}
