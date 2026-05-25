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
    printf("População da carta 1: %lu\n", populacao1);
    printf("População da carta 2: %lu\n", populacao2);

    if (populacao1 > populacao2){
        printf("A carta 1 venceu!\n");
    }  else{
        printf("A carta 2 venceu!\n");
    }

    int escolhaAtributo;

    printf("### Comparação de Atributos! ###\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    scanf("%d", &escolhaAtributo);

int escolhaAtributo2;

float valor1Carta1 = 0, valor1Carta2 = 0;
float valor2Carta1 = 0, valor2Carta2 = 0;

// ======================
// PRIMEIRO ATRIBUTO
// ======================

switch (escolhaAtributo){

    case 1:
        valor1Carta1 = populacao1;
        valor1Carta2 = populacao2;
        break;

    case 2:
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;

    case 3:
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;

    case 4:
        valor1Carta1 = turisticos1;
        valor1Carta2 = turisticos2;
        break;

    case 5:
        valor1Carta1 = quociente1;
        valor1Carta2 = quociente2;
        break;

    default:
        printf("Opcao invalida!\n");
        return 1;
}

// ======================
// SEGUNDO MENU
// ======================

printf("\nEscolha o segundo atributo:\n");

if(escolhaAtributo != 1)
    printf("1. População\n");

if(escolhaAtributo != 2)
    printf("2. Área\n");

if(escolhaAtributo != 3)
    printf("3. PIB\n");

if(escolhaAtributo != 4)
    printf("4. Pontos Turísticos\n");

if(escolhaAtributo != 5)
    printf("5. Densidade\n");

scanf("%d", &escolhaAtributo2);

// impede repetir
if(escolhaAtributo == escolhaAtributo2){
    printf("Você não pode repetir atributos!\n");
    return 1;
}

// ======================
// SEGUNDO ATRIBUTO
// ======================

switch (escolhaAtributo2){

    case 1:
        valor2Carta1 = populacao1;
        valor2Carta2 = populacao2;
        break;

    case 2:
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;

    case 3:
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;

    case 4:
        valor2Carta1 = turisticos1;
        valor2Carta2 = turisticos2;
        break;

    case 5:
        valor2Carta1 = quociente1;
        valor2Carta2 = quociente2;
        break;

    default:
        printf("Opcao invalida!\n");
        return 1;
}

// ======================
// SOMA DOS ATRIBUTOS
// ======================

float somaCarta1 = valor1Carta1 + valor2Carta1;
float somaCarta2 = valor1Carta2 + valor2Carta2;

// densidade: menor vence
// então inverte valor antes da soma
if(escolhaAtributo == 5){
    somaCarta1 = (1.0 / quociente1) + valor2Carta1;
    somaCarta2 = (1.0 / quociente2) + valor2Carta2;
}

if(escolhaAtributo2 == 5){
    somaCarta1 = valor1Carta1 + (1.0 / quociente1);
    somaCarta2 = valor1Carta2 + (1.0 / quociente2);
}

// ======================
// RESULTADO
// ======================

printf("\n### RESULTADO FINAL ###\n");

printf("%s: %.2f\n", cidade1, somaCarta1);
printf("%s: %.2f\n", cidade2, somaCarta2);

if(somaCarta1 > somaCarta2){
    printf("Carta 1 venceu!\n");
}
else if(somaCarta2 > somaCarta1){
    printf("Carta 2 venceu!\n");
}
else{
    printf("Empate!\n");
}

/*
{
case 1:
    printf("\n=== COMPARAÇÃO: POPULAÇÃO ===\n");

    printf("%s: %lu\n", cidade1, populacao1);
    printf("%s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2){
        printf("Vencedor: %s\n", cidade1);
    } else if (populacao2 > populacao1){
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    break;

case 2:
    printf("\n=== COMPARAÇÃO: ÁREA ===\n");

    printf("%s: %.2f\n", cidade1, area1);
    printf("%s: %.2f\n", cidade2, area2);

    if (area1 > area2){
        printf("Vencedor: %s\n", cidade1);
    } else if (area2 > area1){
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    break;

case 3:
    printf("\n=== COMPARAÇÃO: PIB ===\n");

    printf("%s: %.2f\n", cidade1, pib1);
    printf("%s: %.2f\n", cidade2, pib2);

    if (pib1 > pib2){
        printf("Vencedor: %s\n", cidade1);
    } else if (pib2 > pib1){
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    break;

case 4:
    printf("\n=== COMPARAÇÃO: PONTOS TURÍSTICOS ===\n");

    printf("%s: %d\n", cidade1, turisticos1);
    printf("%s: %d\n", cidade2, turisticos2);

    if (turisticos1 > turisticos2){
        printf("Vencedor: %s\n", cidade1);
    } else if (turisticos2 > turisticos1){
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    break;

case 5:
    printf("\n=== COMPARAÇÃO: DENSIDADE DEMOGRÁFICA ===\n");

    printf("%s: %.2f\n", cidade1, quociente1);
    printf("%s: %.2f\n", cidade2, quociente2);

    // MENOR valor vence
    if (quociente1 < quociente2){
        printf("Vencedor: %s\n", cidade1);
    } else if (quociente2 < quociente1){
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    break;

default:
    printf("Opção inválida!\n");
    break;
}*/

    return 0;
    
}
