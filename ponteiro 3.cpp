/*Realizar a soma de 2 vetores A e B de nºs reais e de tamanho igual ou inferior a 100 (n<=100)
e gerar um vetor resultante C onde
C[i] = A[i] + B[i]*/

#include<stdio.h>

void lerNotas(float *notas, int num_alunos, int num_notas);
void calcularMedia(float *notas, float *media, int num_alunos, int num_notas);

int main() {
    int num_alunos = 10;
    int num_notas = 2;
    float notas[num_alunos][num_notas];
    float media[num_alunos];

    lerNotas((float *)notas, num_alunos, num_notas);
    calcularMedia((float *)notas, media, num_alunos, num_notas);

    printf("\nMedia de cada aluno:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d: %.2f\n", i + 1, media[i]);
    }

    return 0;
}

void lerNotas(float *notas, int num_alunos, int num_notas) {
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < num_notas; j++) {
            do {
            printf("Nota %d: ", j + 1);
            scanf("%f", notas + i * num_notas + j);

            if (*(notas + i * num_notas + j) < 0 || *(notas + i * num_notas + j) > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
                }
            } while (*(notas + i * num_notas + j) < 0 || *(notas + i * num_notas + j) > 10);
        }
    }
}

void calcularMedia(float *notas, float *media, int num_alunos, int num_notas) {
    for (int i = 0; i < num_alunos; i++) {
        float soma = 0;
        for (int j = 0; j < num_notas; j++) {
            soma += *(notas + i * num_notas + j);
        }
        media[i] = soma / num_notas;
    }
}
