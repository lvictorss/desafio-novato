#include <stdio.h>

int main(){

    char estadoCarta1, estadoCarta2;
    char codigoCarta1[2], codigoCarta2[2];
    char nomeCidadeCarta1[10], nomeCidadeCarta2[20];
    int populacaoCarta1, populacaoCarta2;
    float areaCidadeCarta1, areaCidadeCarta2;
    float pibCarta1, pibCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;

    printf("Bem vindo ao Super Trunfo!\n");
    printf("Vamos começar registrando a primeira carta...\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o codigo da carta ex:(01, 03, 05): ");
    scanf(" %s", codigoCarta1);
    printf("Digite o nome da cidade da carta (max 10 caracteres): ");
    scanf(" %s", nomeCidadeCarta1);
    printf("Digite a população da carta: ");
    scanf(" %d", &populacaoCarta1);
    printf("Digite a area da cidade da carta: ");
    scanf(" %f", &areaCidadeCarta1);
    printf("Digite o PIB da cidade da carta: ");
    scanf(" %f", &pibCarta1);
    printf("Digite o numero de pontos turísticos da cidade da carta: ");
    scanf(" %d", &pontosTuristicosCarta1);

    printf("Massa! Vamos cadastrar a segunda carta!\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta2);
    printf("Digite o codigo da carta ex:(01, 03, 05): ");
    scanf(" %s", codigoCarta2);
    printf("Digite o nome da cidade da carta (max 10 caracteres): ");
    scanf(" %s", nomeCidadeCarta2);
    printf("Digite a população da carta: ");
    scanf(" %d", &populacaoCarta2);
    printf("Digite a area da cidade da carta: ");
    scanf(" %f", &areaCidadeCarta2);
    printf("Digite o PIB da cidade da carta: ");
    scanf(" %f", &pibCarta2);
    printf("Digite o numero de pontos turísticos da cidade da carta: ");
    scanf(" %d", &pontosTuristicosCarta2);

    printf("Show! As duas cartas foram cadastradas com sucesso, aqui vai os detalhes\n");
    printf("----- Carta 1 -----\n");
    printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nPontos turisticos: %d\n", estadoCarta1, estadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCidadeCarta1, pibCarta1, pontosTuristicosCarta1);
    printf("-------------------\n\n");

    printf("----- Carta 2 -----\n");
    printf("Estado: %c\nCodigo: %c%s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nPontos turisticos: %d\n", estadoCarta2, estadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCidadeCarta2, pibCarta2, pontosTuristicosCarta2);
    printf("-------------------\n");

    return 0;
}