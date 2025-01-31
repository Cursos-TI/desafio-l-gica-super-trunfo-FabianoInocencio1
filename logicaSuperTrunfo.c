#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Cabeçalho do jogo
    printf("Desafio Super Trunfo - Países\n");
    printf("\n**************************\n");

    // Declaração das variáveis
    int codigo, iniciar;
    float area, pib, DensidadePopulacional, PibPercapita, populacao;
    
    // Menu de opções
    printf("1 - Iniciar o jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    scanf("%d", &iniciar); // Leitura da opção escolhida

    switch (iniciar) {
    case 1:
        // Entrada de dados para a primeira carta
        printf("Adicione o código da carta: \n");
        scanf("%d", &codigo);  // Leitura do código da carta

        // Coleta de informações da cidade 1
        printf("Digite a área territorial (em KM²) da cidade 1: \n");
        scanf("%f", &area);

        printf("Digite o PIB da cidade 1: \n");
        scanf("%f", &pib);

        printf("Digite a população da cidade: \n");
        scanf("%f", &populacao);

        // Cálculos para a cidade 1
        DensidadePopulacional = populacao / area;
        PibPercapita = pib / populacao;

        // Inicializando a geração de números aleatórios
        srand(time(0));

        // Geração de valores aleatórios para a cidade 2
        float populacao2 = rand() % 100000 + 100; 
        float area2 = rand() % 100000 + 100;  
        float pib2 = rand() % 100000 + 100;

        // Cálculo da Densidade Populacional para a cidade 2
        float densidadePopulacional2 = populacao2 / area2;

        // Cálculo do PIB per capita para a cidade 2
        float pibPercapita2 = pib2 / populacao2;

        // Exibição das cartas
        printf("********************************\n");

        // Carta 1
        printf("**Carta 1**\n");
        printf("População: %.2f\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Densidade populacional: %.2f\n", DensidadePopulacional);
        printf("PIB per capita: %.2f\n", PibPercapita); // Corrigido o formato de %.1f para %.2f para maior precisão
        printf("\n");

        // Carta 2
        printf("**Carta 2**\n");
        printf("População: %.2f\n", populacao2);  // Corrigido o formato de %d para %.2f (para mostrar o valor correto como float)
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Densidade populacional: %.2f\n", densidadePopulacional2);
        printf("PIB per capita: %.2f\n", pibPercapita2);
        printf("*******************************\n");

        // Comparando as cartas
        if (DensidadePopulacional > densidadePopulacional2 && PibPercapita > pibPercapita2) {
            printf("Parabéns, você ganhou!\n");
        } else if (DensidadePopulacional == densidadePopulacional2 && PibPercapita == pibPercapita2) {
            printf("Caramba!!! Empate...\n");
        } else {
            printf("Que pena, você perdeu.\n");
        }

        break;

    case 2:
        // Exibição das regras do jogo
        printf("\nRegras do Jogo:\n");
        printf("=========================================\n");
        printf("O Super Trunfo de Países é um jogo de cartas onde o objetivo é comparar os valores das\n");
        printf("informações de cada país e vencer as rodadas. Cada carta possui as seguintes informações:\n");
        printf("- PIB (Produto Interno Bruto)\n");
        printf("- População\n");
        printf("- Área total\n");
        printf("\nComo jogar:\n");
        printf("1. Cada jogador escolhe uma carta de seu baralho.\n");
        printf("2. O jogador que escolher a carta com o valor mais alto em uma das categorias (PIB, população ou área)\n");
        printf("   vence a rodada e pega a carta do adversário.\n");
        printf("3. O jogo continua até que todas as cartas sejam disputadas.\n");
        printf("4. O jogador com mais cartas ao final é o vencedor!\n");
        printf("\nBoa sorte e divirta-se!\n");

        break;

    case 3:
        // Finalizando o jogo
        printf("Saindo... até logo!!\n");
        break;

    default:
        // Caso a opção seja inválida
        printf("Opção indisponível\n");
        break;
    }

    return 0;
}