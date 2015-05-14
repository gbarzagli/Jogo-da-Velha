/*
    Esse arquivo serve para guardar todas as vari�veis usadas por mais de um arquivo C.
*/

#include <stdio.h>
#include <stdlib.h>
#include "globalvars.h"

// Matriz para exibir o jogo.
int** mgame;

// Vetor para guardar as jogadas do jogador 1
int* pone;

// Vetor para guardar as jogadas do jogador 2 ou do computador
int* ptwo;

// Vari�vel para controlar de quem � a vez
int turn;

// Cria��o de um novo tipo de vari�vel personalizada
struct possibilities {
    int v1; // codigo ascii
    int v2;
    int v3;
};
// Essa vari�vel personalizada guardar� os valores para verificar quem ganhou.
struct possibilities* vectorp;

// Vari�vel para escrever no ranking o resultado do multiplayer.
struct multiplayerResult {
    char winner[50];
    char looser[50];
};

struct multiplayerResult mresult;

// Vari�vel para escrever no ranking o resultado do singleplayer.
struct singleplayerResult {
    char player[50];
    int difficult;
    int result;
};

struct singleplayerResult sresult;



// Inicializa as vari�veis
void buildVars() {
    // malloc armazena um tanto de mem�ria para a vari�vel.
    mgame = malloc(3 * sizeof(int *));
    int i = 0;
    for(i = 0; i < 3; i++) {
        mgame[i] = malloc(3 * sizeof(int));
    }

    pone = malloc(5 * sizeof(int));
    ptwo = malloc(4 * sizeof(int));
    vectorp = malloc(8 * sizeof(struct possibilities));

    mgame[0][0] = 0;
    mgame[0][1] = 0;
    mgame[0][2] = 0;
    mgame[1][0] = 0;
    mgame[1][1] = 0;
    mgame[1][2] = 0;
    mgame[2][0] = 0;
    mgame[2][1] = 0;
    mgame[2][2] = 0;

    vectorp[0].v1 = 55;
    vectorp[0].v2 = 56;
    vectorp[0].v3 = 57;
    vectorp[1].v1 = 52;
    vectorp[1].v2 = 53;
    vectorp[1].v3 = 54;
    vectorp[2].v1 = 49;
    vectorp[2].v2 = 50;
    vectorp[2].v3 = 51;
    vectorp[3].v1 = 55;
    vectorp[3].v2 = 52;
    vectorp[3].v3 = 49;
    vectorp[4].v1 = 56;
    vectorp[4].v2 = 53;
    vectorp[4].v3 = 50;
    vectorp[5].v1 = 57;
    vectorp[5].v2 = 54;
    vectorp[5].v3 = 51;
    vectorp[6].v1 = 55;
    vectorp[6].v2 = 53;
    vectorp[6].v3 = 51;
    vectorp[7].v1 = 57;
    vectorp[7].v2 = 53;
    vectorp[7].v3 = 49;

    turn = 1;
}
