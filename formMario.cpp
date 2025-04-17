/*
nome: Brunno Eduardo Marfil Marins = 236051
*/

#ifndef FORM_SUPERMARIO
#define FORM_SUPERMARIO

#include <stdio.h>
#include <unistd.h>

// Declara??o das fun??es do jogo
void description();
void reset();
void update();
void play();
void showGameOver();
void showVictory();

// Vari?veis globais do jogo
extern int lives;
extern int level;
extern int points;
extern const int levels;
extern int selected;

// Arrays de perguntas e respostas
extern const char *question[];
extern const char *options[][4];
extern const int correct[];

#endif // GAME1_DLLMAIN_H

