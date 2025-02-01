#include <stdio.h>


/* Para iniciar terei que uma "estrutura" para armazenar alguns
dados da cidade. Usarei o struct*/

struct Cidade{  
 
 char codigo[5]; //código da cidade (ex: Cidade A01...)
 int populacao;
 float area;
 float pib;
 int pontosturisticos;

/*  Aqui estão alguns dados que foram dedidos para fazer o jogo*/
};

int main(){

struct Cidade cidade[32];  //variável que irá guardar a cidade          
char estados[] = "ABCDEFGH";  // Letras dos estados
    int i, j;
     printf("=== Cadastro das Cidades ===\n\n");

     // Agora iremos cadastrar as cidades
     for (i = 0; i < 8; i++) {  
        for (j = 0; j < 4; j++) {  
            int indice = i * 4 + j;
            sprintf(cidade[indice].codigo, "%c%02d", estados[i], j + 1);

            printf("-> Cadastro da cidade %s\n", cidade[indice].codigo);

            printf("  População: ");
            scanf("%d", &cidade[indice].populacao);

            printf("  Área em km²: ");                 // Aqui usamos o printf e o scanf, para leitura e impressão de dados.

            scanf("%f", &cidade[indice].area);

            printf("  PIB (em bilhões): ");
            scanf("%f", &cidade[indice].pib);

            printf("  Número de pontos turísticos: ");
            scanf("%d", &cidade[indice].pontosturisticos);

            printf("  Cidade %s cadastrada com sucesso!\n\n", cidade[indice].codigo);
        }
    }

//AGORA VAMOS EXIBIR OS DADOS CADASTRADOS.

printf("\n=== Lista das Cidades Cadastradas ===\n");
    for (i = 0; i < 32; i++) {
        printf("\nCidade %s:\n", cidade[i].codigo);
        printf("  - População: %d habitantes\n", cidade[i].populacao);
        printf("  - Área: %.2f km²\n", cidade[i].area);
        printf("  - PIB: %.2f bilhões\n", cidade[i].pib);
        printf("  - Pontos turísticos: %d\n", cidade[i].pontosturisticos);
    }

    printf("\nCadastro concluído! Boa sorte no jogo Super Trunfo!\n");

    return 0;
}











