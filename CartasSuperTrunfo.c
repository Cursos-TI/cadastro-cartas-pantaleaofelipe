#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    //Declaração de variáveis
    char estado1, estado2;
    char codCarta1[4], codCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int qtdPontosTuristicosCidade1, qtdPontosTuristicosCidade2;

    // Solicitação de dados ao usuário(a)

    // 1ª carta:
    printf("Bem-vindo(a) ao jogo Super Trunfo Países!\n");
    printf("Jogador(a), insira abaixo os dados para o registro da 1ª carta. \n");

    printf("\n");

    printf("Digite a letra que corresponde ao estado (UF): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf(" %s", codCarta1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacaoCidade1);

    printf("Área: ");
    scanf("%f", &areaCidade1);

    printf("PIB: ");
    scanf("%f", &pibCidade1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicosCidade1);

    system("cls");

    // 2ª carta:
    printf("Agora, insira os dados de registro da 2ª carta: ");

    printf("\n");

    printf("Digite a letra que corresponde ao estado (UF): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf(" %s", codCarta2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacaoCidade2);

    printf("Área: ");
    scanf("%f", &areaCidade2);

    printf("PIB: ");
    scanf("%f", &pibCidade2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicosCidade2);

    system("cls");

    // Apresentação de dados para o usuário(a):

    printf("Os dados registrados foram: \n\n");

    printf("Carta 1\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\n\n", 
        estado1, codCarta1, nomeCidade1, populacaoCidade1, areaCidade1/100.0, pibCidade1/100.0, qtdPontosTuristicosCidade1);

    printf("Carta 2\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\n\n", 
        estado2, codCarta2, nomeCidade2, populacaoCidade2, areaCidade2/100.0, pibCidade2/100.0, qtdPontosTuristicosCidade2);

    return 0;

}