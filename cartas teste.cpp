#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CARTAS 52
#define CARTAS_POR_JOGADOR 10

// Estrutura para representar uma carta
typedef struct {
    char *naipe;
    char *valor;
} Carta;

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    char *naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};
    char *valores[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};
    
    Carta baralho[TOTAL_CARTAS];
    int indice = 0;
    
    // Criando o baralho
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            baralho[indice].naipe = naipes[i];
            baralho[indice].valor = valores[j];
            indice++;
        }
    }
    
    // Embaralha o baralho
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        int r = rand() % TOTAL_CARTAS;
        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }
    
    // Distribui 10 cartas
    printf("Suas 10 cartas são:\n");
    for (int i = 0; i < CARTAS_POR_JOGADOR; i++) {
        printf("%s de %s\n", baralho[i].valor, baralho[i].naipe);
    }
    
    return 0;
}

