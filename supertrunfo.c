#include <stdio.h>

int main(){

    // CARTA 1
    int populacao1, turisticos1;
    float area1, pib1, quociente1, capita1;
    char estado1;
    char codigo1[10], cidade1[20];

    // CARTA 2
    int populacao2, turisticos2;
    float area2, pib2, quociente2, capita2;
    char estado2;
    char codigo2[10], cidade2[20];

    // ======================
    // CADASTRO CARTA 1
    // ======================

    printf("Cadastro da Carta 1\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Codigo: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1); 

    printf("Populacao: \n");
    scanf("%d", &populacao1); 

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &turisticos1);

    quociente1 = populacao1 / area1;
    capita1 = pib1 / populacao1;

    // ======================
    // CADASTRO CARTA 2
    // ======================

    printf("Cadastro da Carta 2\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &turisticos2);

    quociente2 = populacao2 / area2;
    capita2 = pib2 / populacao2;

    // ======================
    // EXIBIÇÃO DAS CARTAS
    // ======================

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", (float)quociente1);
    printf("PIB per Capita: %2f\n", (float)capita1);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f\n", (float)quociente2);
    printf("PIB per Capita: %2f\n", (float)capita2);

    return 0;
    
}
