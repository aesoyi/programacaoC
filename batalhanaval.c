#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0}; //Tabuleiro com água, mostrando todos os valores como 0

    int navioHorizontal[3] = {3,3,3}; //Navio 1
    int navioVertical[3] = {3,3,3}; //Navio 2


    /*Escolhendo coordenadas iniciais
    Navio horizontal começa na linha 2 coluna 4
    Navio vertical começa na linha 5 coluna 1*/
    int linhaH = 2;
    int colunaH = 4;

    int linhaV = 5;
    int colunaV = 1;


    /*Posicionando o navio horizontal
    Como ele é horizontal:
    a linha fica fixa
    a coluna aumenta*/
    for(int i = 0; i < 3; i++) {
    tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
}

    /*Posicionando o navio vertical
    agora:
    a coluna fica fixa
    a linha aumenta*/
    for(int i = 0; i < 3; i++) {
    tabuleiro[linhaV + i][colunaV] = navioVertical[i];
}

 // Mostrar tabuleiro
    for(int i = 0; i < 10; i++) {

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    
    return 0;
}