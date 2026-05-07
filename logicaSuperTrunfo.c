#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    unsigned long int population1, population2;
    int attractions1, attractions2;
    char codigoEstado1, codigoEstado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[50], nomeCidade2[50];
    float area1, area2, pib1, pib2, densidadepop1, densidadepop2,
    pibPerCapita1, pibPerCapita2, densPopul1, densPopul2, super1, super2;
    
    float superPoder1, superPoder2, inversoDensidade1, inversoDensidade2;

    printf("----Crie a Carta 1---- \n");

    printf("Digite o Estado da carta 1: \n");
    scanf(" %c", &codigoEstado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%ld", &population1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &attractions1);

    densidadepop1 = (float)population1 / area1;
    pibPerCapita1 = (float)pib1 / population1;

    inversoDensidade1 = 1.0 / densidadepop1;

    super1 = (float) population1 + area1 + pib1 + attractions1, pibPerCapita1 + inversoDensidade1;

    printf("----Crie a Carta 2---- \n");

    printf("Digite o Estado da carta 2: \n");
    scanf(" %c", &codigoEstado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%ld", &population2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &attractions2);

    densidadepop2 = (float)population2 / area2;
    pibPerCapita2 = (float)pib2 / population2;

    inversoDensidade2 = 1.0 / densidadepop2;

    super2 = (float) population2 + area2 + pib2 + attractions2, pibPerCapita2 + inversoDensidade2;

    // printf("Carta 1: \n");
    // printf("Estado: %c \n", codigoEstado1);
    // printf("Código: %s \n", codigoCarta1);
    // printf("Nome da Cidade: %s \n", nomeCidade1);
    // printf("População: %ld \n", population1);
    // printf("Área: %.2f \n", area1);
    // printf("PIB: %.2f \n", pib1);
    // printf("Número de Pontos Turísticos: %d \n", attractions1);
    // printf("Densidade populacional: %.2f \n", densidadepop1);
    // printf("PIB per Capita: %.2f \n", pibPerCapita1);

    // printf("--------------------------- \n");

    // printf("Carta 2: \n");
    // printf("Estado: %c \n", codigoEstado2);
    // printf("Código: %s \n", codigoCarta2);
    // printf("Nome da Cidade: %s \n", nomeCidade2);
    // printf("População: %ld \n", population2);
    // printf("Área: %.2f \n", area2);
    // printf("PIB: %.2f \n", pib2);
    // printf("Número de Pontos Turísticos: %d \n", attractions2);
    // printf("Densidade populacional: %.2f \n", densidadepop2);
    // printf("PIB per Capita: %.2f \n", pibPerCapita2);

    printf("---------RESULTADO POPULAÇÃO---------\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, population1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, population2);

    if(population1 > population2){
        printf("Carta 1 (%s) venceu!", nomeCidade1);
    } else if(population1 < population2){
        printf("Carta 2 (%s) venceu!", nomeCidade2);
    } else {
        printf("Empate!");
    }

    return 0;

    return 0;
}
