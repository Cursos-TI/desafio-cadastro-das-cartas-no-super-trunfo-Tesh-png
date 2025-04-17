#include <stdio.h>

int main()
{
    char carta1[5], carta2[5];                // Códigos das cartas
    char estado1[20], estado2[20];            // Estados das cartas
    char cidade1[20], cidade2[20];            // Cidades das cartas
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
    printf("  - População: %d habitantes\n", populacao2);
    printf("  - Área: %.2f km²\n", area2);
    printf("  - PIB: %.2f bilhões\n", pib2);
    printf("  - Pontos turísticos: %d\n", pontosturisticos2);
    printf("  - Densidade populacional: %2.f hab/km² \n", densidade2);
    printf("  - PIB per capita: %2.f reais \n", pib_per_capita2);
    printf("  - Super Poder: %2.f \n",super_poder2);

    printf("\nCadastro concluído!\n");

    // Menu de escolha de atributos
    printf("\n==== MENU DE ESCOLHA DE ATRIBUTOS ====\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    int atributo1;
    scanf("%d", &atributo1);

    // Verificar se o atributo1 é válido
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida!\n");
        return 0;
    }

    // Menu de escolha do segundo atributo, excluindo o primeiro
    printf("\nEscolha o segundo atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    int atributo2;
    scanf("%d", &atributo2);

    // Verificar se o segundo atributo é válido e diferente do primeiro
    if (atributo2 < 1 || atributo2 > 5 || atributo1 == atributo2) {
        printf("Opção inválida! Não pode ser o mesmo atributo.\n");
        return 0;
    }

    // Menu de comparação
    printf("\n==== COMPARANDO %s X %s ====\n", carta1, carta2);
    printf("Atributos escolhidos: ");
    switch(atributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf(" e ");
    switch(atributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n");

    // Comparar os dois atributos escolhidos
    float soma1 = 0, soma2 = 0;

    // Atributo 1
    switch(atributo1) {
        case 1:
            printf("%s: %d habitantes\n", carta1, populacao1);
            printf("%s: %d habitantes\n", carta2, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            printf("%s: %.2f km²\n", carta1, area1);
            printf("%s: %.2f km²\n", carta2, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("%s: %.2f bilhões\n", carta1, pib1);
            printf("%s: %.2f bilhões\n", carta2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            printf("%s: %d pontos\n", carta1, pontosturisticos1);
            printf("%s: %d pontos\n", carta2, pontosturisticos2);
            soma1 += pontosturisticos1;
            soma2 += pontosturisticos2;
            break;
        case 5:
            printf("%s: %.2f hab/km²\n", carta1, densidade1);
            printf("%s: %.2f hab/km²\n", carta2, densidade2);
            soma1 += densidade1;
            soma2 += densidade2;
            break;
    }

    // Atributo 2
    switch(atributo2) {
        case 1:
            printf("%s: %d habitantes\n", carta1, populacao1);
            printf("%s: %d habitantes\n", carta2, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            printf("%s: %.2f km²\n", carta1, area1);
            printf("%s: %.2f km²\n", carta2, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("%s: %.2f bilhões\n", carta1, pib1);
            printf("%s: %.2f bilhões\n", carta2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            printf("%s: %d pontos\n", carta1, pontosturisticos1);
            printf("%s: %d pontos\n", carta2, pontosturisticos2);
            soma1 += pontosturisticos1;
            soma2 += pontosturisticos2;
            break;
        case 5:
            printf("%s: %.2f hab/km²\n", carta1, densidade1);
            printf("%s: %.2f hab/km²\n", carta2, densidade2);
            soma1 += densidade1;
            soma2 += densidade2;
            break;
    }

    // Comparar as somas dos atributos
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1, soma1);
    printf("%s: %.2f\n", carta2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: %s venceu a rodada!\n", carta1);
    } else if (soma2 > soma1) {
        printf("\nResultado: %s venceu a rodada!\n", carta2);
    } else {
        printf("\nEmpate! Ambos têm a mesma soma.\n");
    }

    return 0;
}
