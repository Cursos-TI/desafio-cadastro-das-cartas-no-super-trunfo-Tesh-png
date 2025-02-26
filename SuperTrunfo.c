#include <stdio.h>

/* Para iniciar terei que uma "estrutura" para armazenar alguns
dados da cidade. Usarei o struct */

struct Cidade {  
    char codigo[5]; // código da cidade (ex: A01, B02...)
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

/*  Aqui estão alguns dados que foram pedidos para fazer o jogo */
};

int main() {
    struct Cidade cidade[2]; // variável que irá guardar as cidades
    int i;

    printf("=== Cadastro das Cidades ===\n\n");

    // Agora iremos cadastrar as cidades 
    for (i = 0; i < 2; i++) {  
        printf("-> Cadastro da cidade %d\n", i + 1);

        printf("  Código da cidade: ");
        scanf("%s", cidade[i].codigo);

        printf("  População: ");
        scanf("%d", &cidade[i].populacao);

        printf("  Área em km²: ");  // Aqui usamos o printf e o scanf, para leitura e impressão de dados.
        scanf("%f", &cidade[i].area);

        printf("  PIB (em bilhões): ");
        scanf("%f", &cidade[i].pib);

        printf("  Número de pontos turísticos: ");
        scanf("%d", &cidade[i].pontosturisticos);

        printf("  Cidade %s cadastrada com sucesso!\n\n", cidade[i].codigo);
    }

    // AGORA VAMOS EXIBIR OS DADOS CADASTRADOS.

    printf("\n=== Lista das Cidades Cadastradas ===\n");
    for (i = 0; i < 2; i++) {
        printf("\nCidade %s:\n", cidade[i].codigo);
        printf("  - População: %d habitantes\n", cidade[i].populacao);
        printf("  - Área: %.2f km²\n", cidade[i].area);
        printf("  - PIB: %.2f bilhões\n", cidade[i].pib);
        printf("  - Pontos turísticos: %d\n", cidade[i].pontosturisticos);
    }

    printf("\nCadastro concluído!\n");

    return 0;
}
