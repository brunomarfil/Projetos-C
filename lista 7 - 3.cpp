#include <stdio.h>

/* Receber 8 números e armazená-los em um vetor. Ao final, pedir para o
usuário escolher uma posição do vetor e exibir o número contido nela*/

 int main(){
	
 int vet[8];
 int num, i, posicao;

  printf("Digite 8 numeros\n ");

 for(i=0;i<8;i++){
	printf("\nNumero %i: ", i + 1);
    scanf("%d", &vet[i]);
}
    printf("\nEscolha uma posicao do vetor (de 1 a 8): ");
    scanf("%d", &posicao);

    if (posicao >= 1 && posicao <= 8) {
        printf("\n\tO numero na posicao %d eh: %d\n", posicao, vet[posicao - 1]);
    } else {
        printf("\n\tPosicao invalida. Por favor, escolha uma posicao de 1 a 8\n");
    }

return 0;
}
