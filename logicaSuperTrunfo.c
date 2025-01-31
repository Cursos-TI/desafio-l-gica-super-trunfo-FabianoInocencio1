#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    printf("Desafio Super Trunfo - Países\n");
    printf("\n**************************\n");
    
     int codigo, iniciar;
    float area, pib, DensidadePopulacional, PibPercapita, populacao, total;
    
     printf ("1-iniciar o jogo\n");
    printf ("2-Regras do jogo\n");
    printf ("3-sair\n");
    scanf ("%d",&iniciar);
    
    switch (iniciar){
    
    case 1:
    
     // Entrada para a primeira carta
    printf("Adicione o código da carta: \n");
    scanf("%d", &codigo);


    printf("Digite a área territorial (em KM²) da cidade 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    
       // Cálculos
    DensidadePopulacional = populacao / area;
    PibPercapita = pib / populacao*100;
    
    srand (time(0));
    // Geração de valores aleatórios para a população, área e PIB
    float populacao2 = rand() % 100000 + 100; 
    float area2 = rand() % 100000 + 100;  
    float pib2 = rand() % 100000 + 100;  
    // Cálculo da Densidade Populacional
   float  densidadePopulacional2 = populacao2 / area2;
    
    // Cálculo do PIB per capita
  float   pibPercapita2 = pib2 / populacao2 *100;
    
    printf("********************************\n");
    
    printf ("**Carta 1**\n");
    printf  ("Populacao %.2f:\n", populacao);
    printf ("Area: %.2f\n", area);
    printf ("PIB %.2f\n", pib);
    printf ("Densidade populacional %.2f\n", DensidadePopulacional);
    printf ("Pib Percapita %.1f %\n",PibPercapita);
    printf ("                     \n");
    printf ("**Carta 2**\n");
 
    printf ("Populacao: %d\n",populacao2);
    printf ("Area: %.2f\n ",area2);
    printf ("Pib: %.2f\n", pib2);
    printf ( "Densidade populacional %.2f\n", densidadePopulacional2);
    printf ("Pib Percapita: %.1f %\n ",pibPercapita2);
    printf ("*******************************\n");
    
    float resultado = DensidadePopulacional > densidadePopulacional2 ? 1:0;
    float resultado2 = PibPercapita < pibPercapita2 ? 1:0;
    
    if (resultado == 1 && resultado2 == 1 ){
        printf ("Parabéns você ganhou\n");
    } else{
        printf ("Que pena você perdeu\n");
    }  if (DensidadePopulacional == densidadePopulacional2 && PibPercapita == pibPercapita2) {

        printf ("Caramba!!! Empate...\n");
    }
    

    break;
    
   
   case 2:
   
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
    printf("3. O jogo continua até que todos as cartas sejam disputadas.\n");
    printf("4. O jogador com mais cartas ao final é o vencedor!\n");
    printf("\nBoa sorte e divirta-se!\n");

   break;
   
   case 3:
   printf ("saindo... até logo!!\n");
   break;
   
   default:
   printf("Opcão indisponível\n");
   
   
    }
   
  
    return 0;
}