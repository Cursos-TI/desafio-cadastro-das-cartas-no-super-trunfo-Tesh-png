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
    float densidade1, densidade2;             // Desidade populacional
    float pib_per_capita1, pib_per_capita2;   // PIB per capita
    float super_poder1, super_poder2;

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

    // cálculo da densidade populacional e do PIB per capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1 * 1000000000; // convertendo em bilhões
    pib_per_capita2 = pib2 / populacao2 * 1000000000;

    // cáculo do super poder
    super_poder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1 / densidade2);

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
    printf("  - Densidade populacional: %2.f hab/km² \n", densidade1);
    printf("  - PIB per capita: %2.f reais \n", pib_per_capita1);
    printf("  - Super Poder: %2.f \n",super_poder1);

    printf("\nCarta 2 \n");
    printf("  - Código %s\n", carta2);
    printf("  - Estado: %s\n", estado2);
    printf("  - Cidade: %s\n", cidade2);
    printf("  - Código da cidade: %s\n", codigo2);
    printf("  - População: %d habitantes\n", populacao2);
    printf("  - Área: %.2f km²\n", area2);
    printf("  - PIB: %.2f bilhões\n", pib2);
    printf("  - Pontos turísticos: %d\n", pontosturisticos2);
    printf("  - Densidade populacional: %2.f hab/km² \n", densidade2);
    printf("  - PIB per capita: %2.f reais \n", pib_per_capita2);
    printf("  - Super Poder: %2.f \n",super_poder2);

    printf("\nCadastro concluído!\n");

    printf("\n==== Comparação das Cartas ====\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2, pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}
