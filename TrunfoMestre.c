#include <stdio.h>

int main(){
    
    //Super Trunfo
    
    char estado, estado2;
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    int turistico, turistico2;
    float area, area2;
    float pib, pib2;
    float densidadeplp, densidadeplp2;
    float pibcapita, pibcapita2;

    //Informações da Carta 1

    printf("Carta 1 \n");

    printf("Digite o estado(Ex: A, B, C) \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta(Ex: A1, A2, A3): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite a área2: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico); 


    //Informações Carta 2

    printf("Carta 2 \n");

    printf("Digite o estado(Ex: A, B, C) \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(Ex: A1, A2, A3): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico2);

    //Calculando Densidade e Pib Per Capita

    densidadeplp = (float) populacao / area;

    pibcapita = (float) pib / populacao; 

    densidadeplp2 = (float) populacao2 / area2;

    pibcapita2 = (float) pib2 / populacao2; 



    //Visualização da carta de maneira menos poluída 
    
    printf("\n");

    // Carta 1
    
    printf("Carta 1 \n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);
    printf("A Densidade Populacional é: %f\n", densidadeplp);
    printf("A renda Per Capita é: %f\n", pibcapita);

    //Visualização da carta de maneira menos poluída 

    printf("\n");

    // Carta 2



    printf("Carta 2 \n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("A Densidade Populacional é: %f\n", densidadeplp2);
    printf("A renda Per Capita é: %f\n", pibcapita2);
    

    //Visualização mais clara

    printf("\n");

    //Calculando o poder da Carta1 e Carta2

    float SuperPoder = (float) populacao + area + pib + pibcapita + turistico;

    float SuperPoder2 = (float) populacao2 + area2 + pib2 + pibcapita2 + turistico2;


    //Comparação das cartas

    printf("Comparação das Cartas\n");

    printf("\n");

    printf("Resultado 0 para carta 2, e resultado 1 para carta 1\n");

    printf("\n");

    printf("População: Carta %d\n", populacao > populacao2);
    printf("Área: Carta %d\n", area > area2);
    printf("Pib: Carta %d\n", pib > pib2);
    printf("Pontos Turísticos: Carta %d\n", turistico > turistico2);
    printf("Densidade Populacional: Carta %d\n", densidadeplp < densidadeplp2);
    printf("Pib per Capita: Carta %d\n", pibcapita > pibcapita2);
    printf("Super Poder: Carta %d", SuperPoder > SuperPoder2);




    return 0;



}