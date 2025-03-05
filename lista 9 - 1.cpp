#include<stdio.h>
/*Faça um programa que recebe uma matriz 4x3 e mostre a matriz na tela
em formato de tabela*/

 int main(){
	
   int ma[4][3];
   int i, j;
 
  printf("\n\tDigite os elementos da matriz 4x3");
   for(i=0; i<4; i++){
	for(j=0; j<3; j++){
	 printf("\nElemento [%d][%d]: ", i + 1, j + 1);
     scanf("%d", &ma[i][j]);
}
}
     printf("\nMatriz em formato de tabela:\n");
   for(i=0; i<4; i++){
    for(j=0; j<3; j++){
	 printf("%d\t", ma[i][j]);
}	
     printf("\n");
}

return 0;
}
