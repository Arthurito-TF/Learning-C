#include <stdio.h>

int main(){

    //Super Trunfo
    
    char estado;
    char estado2;
    char codigo[50];
    char codigo2[50];
    char cidade2[50];
    char cidade[50];
    int populacao, populacao2;
    int turistico, turistico2;
    float area, area2;
    float pib, pib2;

    //Informações da Carta 1

    printf("Digite o estado(Ex: A, B, C) \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta(Ex: A1, A2, A3): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área2: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico); 

    //Informações Carta 2

    printf("Digite o estado(Ex: A, B, C) \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(Ex: A1, A2, A3): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico2);

    //Visualização da carta de maneira menos poluída 
    
    printf("\n");

    // Carta 1

    printf("Carta 1 \n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);

    //Visualização da carta de maneira menos poluída 

    printf("\n");

    // Carta 2

    printf("Carta 2 \n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);




    return 0;



}
