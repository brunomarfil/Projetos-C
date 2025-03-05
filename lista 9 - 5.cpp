#include <stdio.h>
/*Faça um programa que recebe uma matriz 4x4 e realiza as seguintes
operações:
• Exibir a soma dos elementos da diagonal principal.
• Colocar os elementos da diagonal principal em um vetor (uma
dimensão).
• Exibir o vetor*/
 
  int main() {
    
    int ordem = 4;
    int matriz[ordem][ordem];

    printf("\n\tDigite os elementos da matriz 4x4:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x4:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", matriz[i][j]);
}
        printf("\n");
}

    int somaDiagonal = 0;
    for (int i = 0; i < ordem; i++) {
        somaDiagonal += matriz[i][i];
}
    printf("\nA soma dos elementos da diagonal principal eh: %d\n", somaDiagonal);

  
    int vetorDiagonal[ordem];
    for (int i = 0; i < ordem; i++) {
        vetorDiagonal[i] = matriz[i][i];
}

    printf("\nVetor da diagonal principal:\n");
    for (int i = 0; i < ordem; i++) {
        printf("%d\t", vetorDiagonal[i]);
}
    printf("\n");

return 0;
}
