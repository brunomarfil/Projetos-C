#include<stdio.h>
/*Faça um programa que recebe uma matriz 3x4 e mostra a soma dos seus
elementos*/

int main() {

    int linhas = 3;
    int colunas = 4;

    int matriz[linhas][colunas];

    printf("\nDigite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    printf("\nMatriz %dx%d e soma dos elementos:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
   
