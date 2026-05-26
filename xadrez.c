#include <stdio.h>

int main(){
    //Mover a TORRE 5 casas para a direita com o FOR
    printf("Movendo a TORRE:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    //Mover o BISPO 5 casas na diagonal cima+direita com o WHILE
    printf("Movendo o BISPO:\n");

    int i = 0;
    while (i < 5)
    {
        printf("Cima + Direita\n"); //Imprime a direção do movimento

        i++;
    }
    
    //Mover a RAINHA 8 casas para a esquerda com o DO-WHILE
    printf("Movendo a RAINHA:\n");

    int casas = 0;
    do
    {
        printf("Esquerda\n"); //Imprime a direção do movimento
        
        casas++;
    } while (casas < 8);
    
    





    return 0;
}