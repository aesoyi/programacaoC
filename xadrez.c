#include <stdio.h>

int main(){
    //Mover a TORRE 5 casas para a direita com o FOR
    printf("Movendo a TORRE:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    printf("\n");
    //Mover o BISPO 5 casas na diagonal cima+direita com o WHILE
    printf("Movendo o BISPO:\n");

    int i = 0;
    while (i < 5)
    {
        printf("Cima + Direita\n"); //Imprime a direção do movimento

        i++;
    }

    printf("\n");
    //Mover a RAINHA 8 casas para a esquerda com o DO-WHILE
    printf("Movendo a RAINHA:\n");

    int casas = 0;
    do
    {
        printf("Esquerda\n"); //Imprime a direção do movimento
        
        casas++;
    } while (casas < 8);
    
    printf("\n");

    //Mover o CAVALO 2 casas para baixo e uma para esquerda com FOR aninhado
    printf("Movendo o CAVALO!\n");
    int movimentoCompleto = 1; //Flag pra controlar o movimento em L

        while (movimentoCompleto--)
        {
            for (int i = 0; i < 2; i++){
                printf("Baixo!\n"); //Imprime "baixo" duas vezes
            }
            printf("Esquerda!\n"); // Imprime "esquerda" uma vez
        }


    return 0;
}
