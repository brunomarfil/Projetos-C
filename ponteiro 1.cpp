/*Idem ao exercício resolvido, porém a quantidade de nºs reais deverá ser estipulada pelo usuário.
Lembrar que a matriz ao ser definida deve conter necessariamente o tamanho.*/

#include<stdio.h>

 int main(){
 	
 	int num[100], *p_num, i, d;
 	
	 p_num = num;
 	
 	printf("\nInforme quantos numeros deseja na matriz:  ");
 	scanf("%i", &d);
 	printf("\nLendo os elementos da matriz");
 	for(i=0; i<d; i++){
 		printf("\nElemento %i: ", i+1);
 		scanf("%i", p_num++);
	 }
 	
	 p_num = num;
	 
	printf("\nImprime os elementos da matriz");
	printf("\n\nOs elementos sao");
	for(i=1; i<=d; i++){
	    printf("\nnum[%i]= %i", i, *(p_num++));
	}
 	return 0;
 }


