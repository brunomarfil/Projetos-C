/*
  nome: Brunno Eduardo Marfil Marins - 235051
*/

#include <stdio.h>
#include <unistd.h>
#include "formMario.cpp"

// Implementação das variáveis globais
int lives = 3;
int level = 0;
int points = 0;
const int levels = 5;
int selected = 0;

// Implementação dos arrays de perguntas e respostas
const char *question[] = {
    "Quem eh o irmao do personagem Mario no jogo SUPER MARIO?",
    "Qual eh o objetivo do jogo SUPER MARIO?",
    "Qual animal que voce pode pegar no jogo SUPER MARIO?",
    "Quando voce pega o cogumelo vermelho no SUPER MARIO oque acontece?",
    "Quantos coracoes iniciais voce tem no SUPER MARIO?"};

const char *options[][4] = {
    {"Bruno", "Jonas", "Luigi", "Rafael"},
    {"Roubar o castelo", "Salvar a princesa", "Fugir dos inimigos", "Roubar o ouro do castelo"},
    {"Cachorro", "Hamister", "Dinossauro", "Dragao"},
    {"Ganha super poderes", "O Mario fica maior", "O Mario teletransporta", "O Mario pode voar"},
    {"3", "2", "1", "4"}};

const int correct[] = {2, 1, 2, 1, 0};

void description()
{
    printf("** GAME 1 **\n\nJogo tema Super Mario desenvolvido na materia Sistemas Operacionais!\n\n");
}

void reset()
{
    lives = 3;
    level = 0;
    selected = 0;
    points = 0;
    printf("Jogo reiniciado!\n");
}

void update()
{
	system("cls");
    if (level >= levels || lives == 0)
    {
        printf("\n===================================\n");
        printf("Fim do jogo! Pontuacao final: %d\n", points);
        printf("Nivel alcancado: %d/%d\n", level, levels);
        printf("Vidas restantes: %d\n", lives);
        printf("===================================\n");
    }
    else
    {
        printf("\n===================================\n");
        printf("PLAYER 1: %d vidas - %04d pontos\n", lives, points);
        printf("Nivel atual: %d/%d\n", level + 1, levels);
        printf("===================================\n\n");
        printf("Pergunta: %s\n\n", question[level]);
        for (int i = 0; i < 4; i++)
        {
            printf("%d) %s\n", i + 1, options[level][i]);
        }
        printf("\nDigite o numero da opcao (1-4): ");
    }
}

void showGameOver()
{
    printf("\n");
    printf("  ¦¦¦¦¦¦+  ¦¦¦¦¦+ ¦¦¦+   ¦¦¦+¦¦¦¦¦¦¦+     ¦¦¦¦¦¦+ ¦¦+   ¦¦+¦¦¦¦¦¦¦+¦¦¦¦¦¦+ \n");
    printf(" ¦¦+----+ ¦¦+--¦¦+¦¦¦¦+ ¦¦¦¦¦¦¦+----+    ¦¦+---¦¦+¦¦¦   ¦¦¦¦¦+----+¦¦+--¦¦+\n");
    printf(" ¦¦¦  ¦¦¦+¦¦¦¦¦¦¦¦¦¦+¦¦¦¦+¦¦¦¦¦¦¦¦+      ¦¦¦   ¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦+  ¦¦¦¦¦¦++\n");
    printf(" ¦¦¦   ¦¦¦¦¦+--¦¦¦¦¦¦+¦¦++¦¦¦¦¦+--+      ¦¦¦   ¦¦¦+¦¦+ ¦¦++¦¦+--+  ¦¦+--¦¦+\n");
    printf(" +¦¦¦¦¦¦++¦¦¦  ¦¦¦¦¦¦ +-+ ¦¦¦¦¦¦¦¦¦¦+    +¦¦¦¦¦¦++ +¦¦¦¦++ ¦¦¦¦¦¦¦+¦¦¦  ¦¦¦\n");
    printf("  +-----+ +-+  +-++-+     +-++------+     +-----+   +---+  +------++-+  +-+\n");
    printf("\n");
    printf("===================================\n");
    printf("Pontuacao final: %d\n", points);
    printf("Nivel alcancado: %d/%d\n", level, levels);
    printf("Vidas restantes: %d\n", lives);
    printf("===================================\n");
    printf("\nPressione ENTER para sair...\n");
    getchar(); // Espera o usuário pressionar ENTER
}

void showVictory()
{
    printf("\n");
    printf("  ¦¦+   ¦¦+ ¦¦¦¦¦¦+ ¦¦+   ¦¦+    ¦¦+    ¦¦+ ¦¦+ ¦¦¦+   ¦¦+¦¦+\n");
    printf("  +¦¦+ ¦¦++¦¦+---¦¦+¦¦¦   ¦¦¦    ¦¦¦    ¦¦¦ ¦¦¦ ¦¦¦¦+  ¦¦¦¦¦¦\n");
    printf("   +¦¦¦¦++ ¦¦¦   ¦¦¦¦¦¦   ¦¦¦    ¦¦¦ ¦+ ¦¦¦ ¦¦¦ ¦¦+¦¦+ ¦¦¦¦¦¦\n");
    printf("    +¦¦++  ¦¦¦   ¦¦¦¦¦¦   ¦¦¦    ¦¦¦¦¦¦+¦¦¦ ¦¦¦ ¦¦¦+¦¦+¦¦¦+-+\n");
    printf("     ¦¦¦   +¦¦¦¦¦¦+++¦¦¦¦¦¦++    +¦¦¦+¦¦¦++ ¦¦¦ ¦¦¦ +¦¦¦¦¦¦¦+\n");
    printf("     +-+    +-----+  +-----+      +--++--+  +-+ +-+  +---++-+\n");
    printf("\n");
    printf("===================================\n");
    printf("PARABENS! VOCE COMPLETOU O JOGO!\n");
    printf("===================================\n");
    printf("Pontuacao final: %d\n", points);
    printf("Vidas restantes: %d\n", lives);
    printf("Niveis completados: %d/%d\n", level, levels);
    printf("===================================\n");
    printf("\nPressione ENTER para sair...\n");
    getchar();
}

void play()
{
    int resposta;
    while ((level < levels) && (lives > 0))
    {
        update();
        scanf("%d", &resposta);

        if (resposta >= 1 && resposta <= 4)
        {
            if (resposta - 1 == correct[level])
            {
                printf("\nCORRETO! +100 pontos\n");
                level++;
                points += 100;
                if (level < levels)
                {
                    printf("Proxima pergunta em 2 segundos...\n");
                    sleep(2);
                }
                else
                {
                    showVictory();
                    return;
                }
            }
            else
            {
                printf("\nERRADO! -1 vida\n");
                lives--;
                if (lives > 0)
                {
                    printf("Tente novamente em 2 segundos...\n");
                    sleep(2);
                }
                else
                {
                    showGameOver();
                    return;
                }
            }
        }
        else
        {
            printf("\nOpção invalida! Digite um numero entre 1 e 4.\n");
            sleep(2);
        }
    }

    if (lives == 0)
    {
        showGameOver();
    }
    else if (level >= levels)
    {
        showVictory();
    }
}

int main()
{
    printf("Iniciando o jogo...\n");
    description();
    reset();
    play();
    return 0;
}

