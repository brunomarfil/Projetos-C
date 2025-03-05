/* 5. Ler 10 elementos de um vetor. Verificar e mostrar o maior elemento.
   6. Ler 10 elementos de um vetor. Verificar e mostrar a média dos elementos.
   7. Ler 10 elementos de um vetor e colocá-los na ordem crescente. */

#include <stdio.h>
#include <stdlib.h>

void recebe_vet(float *vet, int tam);
void imprime_Maior(float *vet, int tam, int *posicao);
float media_vetores(float *vet, int tam);
void ordem_Vetor(float *vet, int tam);

int main() {
    int tam;
    float vetor[10], media;
    int posicao; 

    do {
        printf("\n\tDigite o tamanho do vetor (max 10): ");
        scanf("%i", &tam);
        fflush(stdin);

    } while (tam <= 0 || tam > 10);

    recebe_vet(vetor, tam);
    imprime_Maior(vetor, tam, &posicao);
    media = media_vetores(vetor, tam);

    printf("\n\nMedia dos vetores: %.2f\n\n", media);

    ordem_Vetor(vetor, tam);
}

void recebe_vet(float *vet, int tam) {
    int i;

    printf("\nDigite o valor dos vetores:\n");
    for (i = 0; i < tam; i++) {
        printf("Vetor[%i]: ", i);
        scanf("%f", &vet[i]);
        printf("\n");
    }
}

void imprime_Maior(float *vet, int tam, int *posicao) {
    int i;
    float maior;

    *posicao = 0; 
    maior = vet[0];

    for (i = 0; i < tam; i++) {
        if (maior < vet[i]) {
            maior = vet[i];
            *posicao = i; 
        }
    }
    printf("\nCom o valor de %.2f, o maior eh: vetor[%i]", maior, *posicao);
}

float media_vetores(float *vet, int tam) {
    int i;
    float media = 0; 

    for (i = 0; i < tam; i++) {
        media += vet[i];
    }

    media = media / tam;

    return media;
}

void ordem_Vetor(float *vet, int tam) {
    int i, j;
    float temp;

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam - i - 1; j++) {

            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    printf("\nOrdem crescente dos vetores:\n");

    for (i = 0; i < tam; i++) {

        printf("%.2f ", vet[i]);
    }
    printf("\n");
}
