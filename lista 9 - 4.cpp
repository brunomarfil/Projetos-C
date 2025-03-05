#include <stdio.h>
/*Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz
com o dobro de cada valor. No final, exiba a segunda matriz na tela*/

 int main() {
   
    int linhas = 3;
    int colunas = 3;

    int matrizOriginal[linhas][colunas];
    int matrizDobro[linhas][colunas];

    printf("\nDigite os elementos da matriz 3x3\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nElemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizOriginal[i][j]);
}
}

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizDobro[i][j] = 2 * matrizOriginal[i][j];
}
}

    printf("\nMatriz original:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizOriginal[i][j]);
}
        printf("\n");
}

    printf("\nMatriz com o dobro de cada valor:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizDobro[i][j]);
}
        printf("\n");
}

return 0;
}
