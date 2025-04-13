#include <stdio.h>

int main()
{
    char carta1[3], carta2[3];                // Códigos das cartas
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

    // MENU DE COMPARAÇÃO DAS CARTAS CADASTRADAS 

    int opcao;
    printf("\n==== MENU DE COMPARAÇÃO ====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (%s) x %s (%s)\n", cidade1, estado1, cidade2, estado2);

    switch(opcao) {
        case 1:
        printf("Atributo: População\n");
        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: %s venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: %s venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosturisticos1);
            printf("%s: %d pontos\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com uma opção de 1 a 5.\n");
            break;
    }

    return 0;
}

