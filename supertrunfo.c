#include <stdio.h>

int main(){

    // CARTA 1
    unsigned long int populacao1;
    int turisticos1;
    float area1, pib1, quociente1, capita1;
    char estado1;
    char codigo1[10], cidade1[20];

    // CARTA 2
    unsigned long int populacao2;
    int turisticos2;
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
    scanf("%lu", &populacao1); 

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &turisticos1);

    quociente1 = populacao1 / area1;
    capita1 = pib1 / populacao1;
    
    float superPoder1;
    superPoder1 = populacao1 + area1 + pib1 + turisticos1 + capita1 +
                                            (1.0 / quociente1);

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
    scanf("%lu", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &turisticos2);

    quociente2 = populacao2 / area2;
    capita2 = pib2 / populacao2;

    float superPoder2;
    superPoder2 = populacao2 + area2 + pib2 + turisticos2 + capita2 +
                                            (1.0 / quociente2);

    // ======================
    // EXIBIÇÃO DAS CARTAS
    // ======================

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", (float)quociente1);
    printf("PIB per Capita: %.2f\n", (float)capita1);
    printf("Super Poder: %f\n", (float)superPoder1);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f\n", (float)quociente2);
    printf("PIB per Capita: %.2f\n", (float)capita2);
    printf("Super Poder: %f\n", (float)superPoder2);
    
    // ======================
    // COMPARAÇÃO DAS CARTAS
    // ======================

    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n",
    (populacao1 > populacao2) ? 1 : 2,
    (populacao1 > populacao2));

    printf("Area: Carta %d venceu (%d)\n",
    (area1 > area2) ? 1 : 2,
    (area1 > area2));

    printf("PIB: Carta %d venceu (%d)\n",
    (pib1 > pib2) ? 1 : 2,
    (pib1 > pib2));

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
    (turisticos1 > turisticos2) ? 1 : 2,
    (turisticos1 > turisticos2));

    // Densidade: MENOR vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
    (quociente1 < quociente2) ? 1 : 2,
    (quociente1 < quociente2));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
    (capita1 > capita2) ? 1 : 2,
    (capita1 > capita2));

    printf("Super Poder: Carta %d venceu (%d)\n",
    (superPoder1 > superPoder2) ? 1 : 2,
    (superPoder1 > superPoder2));

    printf("Comparação de cartas (Atributo: População):\n");
    printf("População da carta 1: %lu\n", &populacao1);
    printf("População da carta 2: %lu\n", &populacao2);

    if (populacao1 > populacao2){
        printf("A carta 1 venceu!\n");
    }  else{
        printf("A carta 2 venceu!\n");
    }

    return 0;
    
}
