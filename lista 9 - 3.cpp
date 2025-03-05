#include<stdio.h>
/*Faça um programa que recebe uma matriz 5x3 e informa qual é o maior
elemento dela e sua posição*/

 int main() {
  
    int linhas = 5;
    int colunas = 3;


    int matriz[linhas][colunas];

    printf("\nDigite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nElemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
}
}

 
    int maiorElemento = matriz[0][0];
    int linhaMaiorElemento = 0;
    int colunaMaiorElemento = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
                linhaMaiorElemento = i;
                colunaMaiorElemento = j;
}
}
}
    printf("\nO maior elemento da matriz eh %d\n", maiorElemento);
    printf("\nPosicao na matriz: [%d][%d]\n", linhaMaiorElemento + 1, colunaMaiorElemento + 1);

    return 0;
}
