#include <stdio.h>
int main(){
    char estado[20], CodigoDaCarta[20], cidade[20],estado2[20], CodigoDaCarta2[20], cidade2[20];
    int populacao, NumerosDePontosTuristico,populacao2, NumerosDePontosTuristico2;
    float AreaEmKm, pib, AreaEmKm2, pib2;
    float dencidadePopulacial, dencidadePopulacional2, pibPerCapita, pibPerCapita2;


    printf("Carta 01\n");
    printf("nome do estado\n");
    scanf("%S", &estado);
    printf("digite o codigo da carta\n");
    scanf("%s", &CodigoDaCarta);
    printf("nome da cidade\n");
    scanf("%s", &cidade);
    printf("qual a populacao\n");
    scanf("%d", &populacao);
    printf("qual a area (em KM)\n");
    scanf("%f", &AreaEmKm);
    printf("qual o pib:\n"),
    scanf("%f", &pib);
    printf("qual o numero de pontos turisticos:\n");
    scanf("%d", &NumerosDePontosTuristico);

    dencidadePopulacial = populacao / AreaEmKm;
    pibPerCapita = pib / populacao;

    printf("Carta 01\n");
    printf("EStado: %s\n", estado);
    printf("Código: %s\n", CodigoDaCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", AreaEmKm);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", NumerosDePontosTuristico);
    printf("Densidade Populacional: %f\n", dencidadePopulacial);
    printf("PIB per Capita: %f\n", pibPerCapita);

    
    printf("Carta 02\n");
    printf("nome do estado\n");
    scanf("%s", &estado2);
    printf("digite o codigo da carta\n");
    scanf("%s", &CodigoDaCarta2);
    printf("nome da cidade\n");
    scanf("%s", &cidade2);
    printf("qual a populacao\n");
    scanf("%d", &populacao2);
    printf("qual a area (em KM)\n");
    scanf("%f", &AreaEmKm2);
    printf("qual o pib:\n"),
    scanf("%f", &pib2);
    printf("qual o numero de pontos turisticos:\n");
    scanf("%d", &NumerosDePontosTuristico2);

    dencidadePopulacional2 = populacao2 / AreaEmKm2;
    pibPerCapita2 = pib2 / populacao2;

    printf("Carta 02\n");
    printf("EStado: %s\n", estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", AreaEmKm2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumerosDePontosTuristico2);
    printf("Densidade Populacional: %f\n", dencidadePopulacional2);
    printf("PIB per Capita: %f\n", pibPerCapita2);


    return 0;

}

