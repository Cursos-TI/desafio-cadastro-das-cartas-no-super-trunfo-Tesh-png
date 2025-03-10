#include <stdio.h>

int main()
{
    char carta1[3], carta2[3];                // Códigos das cartas
    char estado1[20], estado2[20];            // Estados das cartas
    char cidade1[20], cidade2[20];            // Cidades das cartas
    char codigo1[3], codigo2[3];              // Códigos das cidades
    int populacao1, populacao2;               // População das cidades
    float area1, area2;                       // Áreas das cidades
    float pib1, pib2;                         // PIB das cidades
    int pontosturisticos1, pontosturisticos2; // Pontos turísticos das cidades

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("  Código da carta: ");
    scanf("%s", carta1);

    printf("  Estado: ");
    scanf("%s", estado1);

    printf("  Cidade: ");
    scanf("%s", cidade1);

    printf("  Código da cidade: ");
    scanf("%s", codigo1);

    printf("  População: ");
    scanf("%d", &populacao1);

    printf("  Área em km²: ");
    scanf("%f", &area1);

    printf("  PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("  Carta 1 cadastrada com sucesso!\n\n");

    // Cadastro da segunda carta
    printf("=== Cadastro da Carta 2 ===\n");
    printf("  Código da carta: ");
    scanf("%s", carta2);

    printf("  Estado: ");
    scanf("%s", estado2);

    printf("  Cidade: ");
    scanf("%s", cidade2);

    printf("  Código da cidade: ");
    scanf("%s", codigo2);

    printf("  População: ");
    scanf("%d", &populacao2);

    printf("  Área em km²: ");
    scanf("%f", &area2);

    printf("  PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("  Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("  Carta 2 cadastrada com sucesso!\n\n");

    // Exibir os dados das cartas cadastradas
    printf("\n=== Lista das Cartas Cadastradas ===\n");

    printf("\nCarta 1\n");
    printf("  - Código %s\n", carta1);
    printf("  - Estado: %s\n", estado1);
    printf("  - Cidade: %s\n", cidade1);
    printf("  - Código da cidade: %s\n", codigo1);
    printf("  - População: %d habitantes\n", populacao1);
    printf("  - Área: %.2f km²\n", area1);
    printf("  - PIB: %.2f bilhões\n", pib1);
    printf("  - Pontos turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2 \n");
    printf("  - Código %s\n", carta2);
    printf("  - Estado: %s\n", estado2);
    printf("  - Cidade: %s\n", cidade2);
    printf("  - Código da cidade: %s\n", codigo2);
    printf("  - População: %d habitantes\n", populacao2);
    printf("  - Área: %.2f km²\n", area2);
    printf("  - PIB: %.2f bilhões\n", pib2);
    printf("  - Pontos turísticos: %d\n", pontosturisticos2);

    printf("\nCadastro concluído!\n");

    return 0;
}
