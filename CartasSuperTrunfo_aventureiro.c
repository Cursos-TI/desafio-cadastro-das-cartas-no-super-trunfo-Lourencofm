#include <stdio.h>

int main() {
    int populacao1, ptos_turisticos1, populacao2, ptos_turisticos2;
    char estado1, estado2, cod_carta1[4], cod_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    float area1, PIB1, area2, PIB2;

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

    // Exibição dos dados
    printf("\n\n=== CARTA 01 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", ptos_turisticos1);

    printf("\n=== CARTA 02 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", ptos_turisticos2);

    return 0;
}
