#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    //Tabuleiro preenchido com água (0)
    int tabuleiro[TAM][TAM] = {0};

    //Navios (valor 3 representa parte ocupada)
    int navioHorizontal[NAVIO] = {3, 3, 3};
    int navioVertical[NAVIO] = {3, 3, 3};
    int navioDiagonal1[NAVIO] = {3, 3, 3};
    int navioDiagonal2[NAVIO] = {3, 3, 3};

    //Coordenadas iniciais
    int linhaH = 2, colunaH = 4; // horizontal
    int linhaV = 5, colunaV = 1; // vertical

    //Diagonal principal (linha++, coluna++)
    int linhaD1 = 0, colunaD1 = 0;

    //Diagonal secundária (linha++, coluna--)
    int linhaD2 = 0, colunaD2 = 9;

    int valido = 1;

    /*
    VALIDAR NAVIO HORIZONTAL
    */
    if (colunaH + NAVIO > TAM)
        valido = 0;

    for (int i = 0; i < NAVIO && valido; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0)
            valido = 0;
    }

    if (valido) {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    /*
       VALIDAR NAVIO VERTICAL
    */
    valido = 1;

    if (linhaV + NAVIO > TAM)
        valido = 0;

    for (int i = 0; i < NAVIO && valido; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0)
            valido = 0;
    }

    if (valido) {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    /* 
    NAVIO DIAGONAL 1
    linha++ coluna++
    */
    valido = 1;

    if ((linhaD1 + NAVIO > TAM) || (colunaD1 + NAVIO > TAM))
        valido = 0;

    for (int i = 0; i < NAVIO && valido; i++) {
        if (tabuleiro[linhaD1 + i][colunaD1 + i] != 0)
            valido = 0;
    }

    if (valido) {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD1 + i][colunaD1 + i] = navioDiagonal1[i];
        }
    }

    /*
    NAVIO DIAGONAL 2
    linha++ coluna--
        */
    valido = 1;

    if ((linhaD2 + NAVIO > TAM) || (colunaD2 - (NAVIO - 1) < 0))
        valido = 0;

    for (int i = 0; i < NAVIO && valido; i++) {
        if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0)
            valido = 0;
    }

    if (valido) {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD2 + i][colunaD2 - i] = navioDiagonal2[i];
        }
    }

    // exibir tabuleiro
    printf("\nTABULEIRO FINAL:\n\n");

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
