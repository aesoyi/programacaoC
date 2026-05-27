#include <stdio.h>

// ---------------- TORRE ----------------
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// ---------------- BISPO (Recursivo) ----------------
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");

        moverBispo(casas - 1);
    }
}

// ---------------- RAINHA ----------------
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");

        moverRainha(casas - 1);
    }
}

// ---------------- CAVALO ----------------
void moverCavalo() {

    // Movimento em "L":
    // 2 casas para cima
    // 1 casa para a direita

    for (int vertical = 1; vertical <= 2; vertical++) {

        printf("Cima\n");

        // Quando terminar as 2 casas para cima
        if (vertical == 2) {

            for (int horizontal = 1; horizontal <= 1; horizontal++) {

                printf("Direita\n");
            }
        }
    }
}

// ---------------- MAIN ----------------
int main() {

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // BISPO (Recursividade)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(5);

    printf("\n");

    // BISPO (Loops Aninhados)
    printf("Movimento do Bispo (Loops Aninhados):\n");

    for (int vertical = 1; vertical <= 5; vertical++) {

        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Direita\n");
        }
    }

    printf("\n");

    // CAVALO
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    return 0;
}
