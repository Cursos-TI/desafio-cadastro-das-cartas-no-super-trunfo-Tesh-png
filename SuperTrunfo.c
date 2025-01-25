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

struct Cidade cidade;  //variável que irá guardar a cidade          // Diferença em 'Cidade' com "C" e 'cidade' com "c".


// agora usaremos o printf e o scanf, para leitura e impressão de dados.

printf("Digite o código da cidade (ex:A01,A02...):" );
scanf("%s", cidade.codigo);
                                              // o scanf irá receber dados da variável struct Cidade 
printf("População:" );
scanf("%d", &cidade.populacao);

printf("Área (km²):" );
scanf("%f", &cidade.area);

printf("PIB:" );
scanf("%f", &cidade.pib);

printf("Números de pontos turísticos: " );
scanf("%d", &cidade.pontosturisticos);
//AGORA VAMOS EXIBIR OS DADOS CADASTRADOS.

printf("\n Dados da cidade cadastrada: \n");
printf("Código da cidade: %s \n", cidade.codigo);
printf("População: %d \n", cidade.populacao);
printf("Área: %.2f km² \n", cidade.area);
printf("PIB: %.2f \n", cidade.pib);
printf("Pontos turísticos: %d \n" , cidade.pontosturisticos);
return 0;











}