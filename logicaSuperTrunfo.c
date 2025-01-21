#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Desafio Super Trunfo - Países\n");
    printf("\n**************************\n");

    int codigoDaCarta1, codigoDaCarta2, populacao1, populacao2;
    char nome1[50], nome2[50];
    float area1, area2, pib1, pib2, DensidadePopulacional1, DensidadePopulacional2, PibPercapita1, PibPercapita2;

    // Entrada para a primeira carta
    printf("Adicione o código da carta 1: \n");
    scanf("%d", &codigoDaCarta1);

    printf("Adicione o nome da cidade 1: \n");
    scanf("%s", nome1);

    printf("Digite a área territorial (em KM²) da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);

    // Entrada para a segunda carta

     printf("\n*******************\n");

    printf("Adicione o código da carta 2: \n");
    scanf("%d", &codigoDaCarta2);

    printf("Adicione o nome da cidade 2: \n");
    scanf("%s", nome2);

    printf("Digite a área territorial (em KM²) da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    // Cálculos
    DensidadePopulacional1 = populacao1 / area1;
    PibPercapita1 = pib1 / populacao1;

    DensidadePopulacional2 = populacao2 / area2;
    PibPercapita2 = pib2 / populacao2; 


    // Exibindo as informações da primeira carta
    printf("\n----- Informações da primeira carta -----\n");
    printf("Código da carta 1: %d\n", codigoDaCarta1);
    printf("Cidade: %s\n", nome1);
    printf("Área Territorial: %.2f KM²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("População: %d\n", populacao1);
    printf("Densidade Populacional: %.2f habitantes por KM²\n", DensidadePopulacional1);
    printf("PIB Per Capita: %.2f\n", PibPercapita1);

    // Exibindo as informações da segunda carta
    printf("\n----- Informações da segunda carta -----\n");
    printf("Código da carta 2: %d\n", codigoDaCarta2);
    printf("Cidade: %s\n", nome2);
    printf("Área Territorial: %.2f KM²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("População: %d\n", populacao2);
    printf("Densidade Populacional: %.2f habitantes por KM²\n", DensidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", PibPercapita2);

   
    //Lógica do jogo 

    printf ("\n**** RESULTADO*****\n");

   if (DensidadePopulacional1 > DensidadePopulacional2 && PibPercapita1 < PibPercapita2) {
     printf("%s Ganhou\n", nome1);
} else {
    printf("%s Ganhou\n", nome2);
}
    return 0;
}
