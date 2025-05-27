#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char estado1, cod_carta1[4], nome_cidade1[50];
    int populacao1, ptos_turisticos1;
    float area1, PIB1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis para Carta 2
    char estado2, cod_carta2[4], nome_cidade2[50];
    int populacao2, ptos_turisticos2;
    float area2, PIB2, densidade2, pib_per_capita2, super_poder2;

    printf("Insira os dados de suas cartas!\n");

    // Carta 01
    printf("\nCarta 01:\n");
    printf("Estado (insira apenas a primeira letra do estado, de A a H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da Carta (ex: A01): ");
    scanf("%s", cod_carta1);
    getchar();

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ptos_turisticos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (PIB1 * 1e9) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (PIB1 * 1e9) + ptos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Carta 02
    printf("\nCarta 02:\n");
    printf("Estado (insira apenas a primeira letra do estado, de A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Código da Carta (ex: B02): ");
    scanf("%s", cod_carta2);
    getchar();

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ptos_turisticos2);

     // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (PIB2 * 1e9) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (PIB2 * 1e9) + ptos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição dos dados
    printf("\n\n=== CARTA 01 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", ptos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    printf("\n=== CARTA 02 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", ptos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // COMPARAÇÕES
    printf("\n\n=== COMPARAÇÃO DE CARTAS ===\n");

    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", PIB1 > PIB2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", ptos_turisticos1 > ptos_turisticos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2); // menor vence
    printf("PIB per Capita: Carta %d venceu\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", super_poder1 > super_poder2 ? 1 : 2);


    return 0;
}