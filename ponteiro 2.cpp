/*Idem ao exercício resolvido, porém perguntar ao usuário se ele deseja continuar (S/N). Lembrar
que a matriz ao ser definida deve conter necessariamente o tamanho*/

#include<stdio.h>

 int main(){
 	
 	int num[100], *p_num, i, d;
 	char op;
 	
 	p_num = num;
 	
 	printf("\nInforme um numero para a matriz: ");
 	scanf("%i", &d);
 	 
	do{
 	    printf("\nDeseja aumentar a matriz? <S/N>: ");
 	    scanf(" %c", &op);
		if(op == 'S' || op == 's')
		d++;
		 
    }while(op != 'N' && op != 'n');
	
 	printf("\nLendo os numeros da matriz");
 	for(i=0;i<d;i++){
 		printf("\nElemento %i: ", i+1);
 		scanf("%i", p_num++);
	 }
	
	p_num = num;
	
	printf("\nImprime os elementos da matriz");
	for(i=1;i<=d;i++){
		printf("\nnum[%i]= %i", i, *(p_num++));
	}
 	
 	
 	return 0;
 }
