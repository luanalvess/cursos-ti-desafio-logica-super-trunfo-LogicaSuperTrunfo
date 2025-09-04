#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira cidade
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;
    
    // Declaração de variáveis para a segunda cidade
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    
    printf("------ Primeira Carta ------\n\n");

    // Coleta de dados da primeira cidade
    printf("Insira o estado: ");
    scanf("%s", estado);

    printf("Codigo do estado: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Tamanho populacional: ");
    scanf("%d", &populacao);

    printf("Extensao territorial: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico);

    printf("\n");

    printf("------ Segunda Carta ------\n\n");

    // Coleta de dados da segunda cidade
    printf("Insira o estado: ");
    scanf("%s", estado2);

    printf("Codigo do estado: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Tamanho populacional: ");
    scanf("%d", &populacao2);

    printf("Extensao territorial: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico2);

    printf("\n\n");

    //---
    // Impressão da primeira carta
    // O cálculo foi movido para cá, após a entrada de dados.
    float densidade = (populacao / area);
    float capital = (pib / populacao);

    printf("----------- Primeira Carta -------------\n");
    printf("O estado e: %s\n", estado);
    printf("O codigo e: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Quantidade de populacao: %d\n", populacao);
    printf("Tamanho da area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", turistico);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %f Reais\n", capital);

    printf("\n\n");

    //---
    // Impressão da segunda carta
    // O cálculo também foi movido para cá.
    float densidade2 = (populacao2 / area2);
    float capital2 = (pib2 / populacao2);

    printf("---------- Segunda Carta ---------\n");
    printf("O estado e: %s\n", estado2);
    printf("O codigo e: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Quantidade de populacao: %d\n", populacao2);
    printf("Tamanho da area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %f Reais\n", capital2);

    return 0;
}
