#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarRand() {
    srand(time(0));  // Inicializa o gerador de números aleatórios com a hora atual
}

// Função para gerar pontos turísticos aleatórios
int gerarPontosTuristicos() {
    return rand() % 500 + 1;  // Gera um número aleatório entre 1 e 500
}

// Função para calcular o poder da carta
double calcularPoder(double populacao, double area, double pib, int pontosTuristicos) {
    double densidade = populacao / area;
    double pibPerCapita = pib / populacao;
    return pibPerCapita + pontosTuristicos + densidade;
}

int main() {
    int escolha, carta, pontosjogador = 0;
    int continuar = 1;

    do {  // Loop principal do menu
        printf("Escolha uma opção:\n");
        printf("1 - Jogar\n");
        printf("2 - Regras\n");
        printf("3 - Pontuação\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1:  // Opção para Jogar
                do {  // Loop dentro da opção "Jogar"
                    printf("Digite o DDD da cidade:\n");
                    printf("11 - São Paulo\n");
                    printf("21 - Rio de Janeiro\n");
                    printf("85 - Ceará\n");
                    printf("96 - Amapá\n");
                    printf("Carta: ");
                    scanf("%d", &carta);
                    printf("\n");

                    double poderesjogador = 0;
                    switch (carta) {
                        case 11:  // São Paulo
                            {
                                double populacaoSP = 12396372;
                                double areaSP = 1521;
                                double pibSP = 700000000000;
                                int pontosTuristicosSP = gerarPontosTuristicos();
                                poderesjogador = calcularPoder(populacaoSP, areaSP, pibSP, pontosTuristicosSP);

                                printf("São Paulo\n");
                                printf("Pontos turísticos: %d\n", pontosTuristicosSP);
                                printf("População: %.0f\n", populacaoSP);
                                printf("Área: %.0f km²\n", areaSP);
                                printf("PIB: %.2f bilhões de R$\n", pibSP / 1000000000);  // PIB em bilhões
                                printf("Densidade Demográfica: %.2f\n", populacaoSP / areaSP);
                                printf("PIB per capita: %.2f\n", pibSP / populacaoSP);
                                printf("Poderes da carta: %.2f\n", poderesjogador);
                            }
                            break;
                        
                        case 21:  // Rio de Janeiro
                            {
                                double populacaoRJ = 6748000;
                                double areaRJ = 1255;
                                double pibRJ = 600000000000;
                                int pontosTuristicosRJ = gerarPontosTuristicos();
                                poderesjogador = calcularPoder(populacaoRJ, areaRJ, pibRJ, pontosTuristicosRJ);

                                printf("Rio de Janeiro\n");
                                printf("Pontos turísticos: %d\n", pontosTuristicosRJ);
                                printf("População: %.0f\n", populacaoRJ);
                                printf("Área: %.0f km²\n", areaRJ);
                                printf("PIB: %.2f bilhões de R$\n", pibRJ / 1000000000);  // PIB em bilhões
                                printf("Densidade Demográfica: %.2f\n", populacaoRJ / areaRJ);
                                printf("PIB per capita: %.2f\n", pibRJ / populacaoRJ);
                                printf("Poderes da carta: %.2f\n", poderesjogador);
                            }
                            break;

                        case 85:  // Ceará
                            {
                                double populacaoCE = 9187000;
                                double areaCE = 148920;
                                double pibCE = 150000000000;
                                int pontosTuristicosCE = gerarPontosTuristicos();
                                poderesjogador = calcularPoder(populacaoCE, areaCE, pibCE, pontosTuristicosCE);

                                printf("Ceará\n");
                                printf("Pontos turísticos: %d\n", pontosTuristicosCE);
                                printf("População: %.0f\n", populacaoCE);
                                printf("Área: %.0f km²\n", areaCE);
                                printf("PIB: %.2f bilhões de R$\n", pibCE / 1000000000);  // PIB em bilhões
                                printf("Densidade Demográfica: %.2f\n", populacaoCE / areaCE);
                                printf("PIB per capita: %.2f\n", pibCE / populacaoCE);
                                printf("Poderes da carta: %.2f\n", poderesjogador);
                            }
                            break;

                        case 96:  // Amapá
                            {
                                double populacaoAP = 877000;
                                double areaAP = 142815;
                                double pibAP = 15000000000;
                                int pontosTuristicosAP = gerarPontosTuristicos();
                                poderesjogador = calcularPoder(populacaoAP, areaAP, pibAP, pontosTuristicosAP);

                                printf("Amapá\n");
                                printf("Pontos turísticos: %d\n", pontosTuristicosAP);
                                printf("População: %.0f\n", populacaoAP);
                                printf("Área: %.0f km²\n", areaAP);
                                printf("PIB: %.2f bilhões de R$\n", pibAP / 1000000000);  // PIB em bilhões
                                printf("Densidade Demográfica: %.2f\n", populacaoAP / areaAP);
                                printf("PIB per capita: %.2f\n", pibAP / populacaoAP);
                                printf("Poderes da carta: %.2f\n", poderesjogador);
                            }
                            break;

                        default:
                            printf("Opção inválida!\n");
                            continue;
                    }

                    // Cálculo para o computador
                    int computador;
                    double poderescomputador;
                    computador = rand() % 4 + 1;

                    switch (computador) {
                        case 1:  // São Paulo
                            {
                                double populacaoSP = 12396372;
                                double areaSP = 1521;
                                double pibSP = 700000000000;
                                int pontosTuristicosSP = gerarPontosTuristicos();
                                poderescomputador = calcularPoder(populacaoSP, areaSP, pibSP, pontosTuristicosSP);

                                printf("São Paulo (Computador)\n");
                                printf("Pontos turísticos: %d\n", pontosTuristicosSP);
                                printf("População: %.0f\n", populacaoSP);
                                printf("Área: %.0f km²\n", areaSP);
                                printf("PIB: %.2f bilhões de R$\n", pibSP / 1000000000);  // PIB em bilhões
                                printf("Densidade Demográfica: %.2f\n", populacaoSP / areaSP);
                                printf("PIB per capita: %.2f\n", pibSP / populacaoSP);
                                printf("Poderes da carta: %.2f\n", poderescomputador);
                            }
                            break;
                        // Outras opções do computador podem ser adicionadas aqui...
                    }

                    // Cálculo do vencedor
                    printf("\n");
                    if (poderesjogador == poderescomputador) {
                        printf("Empate\n");
                    } else if (poderesjogador > poderescomputador) {
                        printf("Jogador ganhou\n");
                        pontosjogador++;
                    } else {
                        printf("Computador ganhou\n");
                    }

                    printf("Pontuação: %d \n", pontosjogador);

                    // Pergunta se o jogador deseja continuar jogando
                    if (poderesjogador < poderescomputador) {
                        printf("\nGame Over! Deseja continuar jogando? (1 - Sim / 0 - Não): ");
                        scanf("%d", &continuar);
                    }

                } while (continuar != 0);  // O jogo continuará até que o jogador escolha sair (continuar = 0)
                break;

            case 2:
                printf("Regras do jogo\n");
                printf("O jogo Super Trunfo Estados consiste em competir com o computador, onde cada jogador tem um conjunto de cartas com dados sobre diferentes estados.\n");
                printf("Cada carta contém várias opções com valores numéricos, como população, área, PIB, entre outros.\n");
                printf("Durante o jogo, o jogador escolhe uma dessas opções e disputa com o computador, comparando os valores das cartas.\n");
                printf("Quem tiver o maior valor na opção escolhida vence a rodada e fica com a carta do adversário.\n");
                printf("O jogo continua até que todas as cartas sejam disputadas, e o vencedor é aquele que tiver mais cartas ao final.\n");
                break;

            case 3:
                printf("Pontuação: %d\n", pontosjogador);
                if (pontosjogador < 5) {
                    // Nenhum nível é exibido, já que a pontuação está abaixo de 5
                } else if (pontosjogador <= 10) {
                    printf("Nivel Aventureiro\n");
                } else if (pontosjogador <= 20) {
                    printf("Nivel Desbravador\n");
                } else if (pontosjogador <= 30) {
                    printf("Nivel Mestre\n");
                } else {
                    printf("Nivel Desconhecido\n");
                }
                break;

            case 0:
                printf("Saindo do jogo\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

        printf("\nQuer voltar à opção de menu? 1 sim || 0 não\n");
        printf("Escolha: ");
        scanf("%d", &continuar);

    } while (continuar != 0);  // O loop continuará até o jogador escolher 0 para sair

    printf("Até a próxima e parabéns por sua conquista: nível: %d", pontosjogador);

    return 0;
}
