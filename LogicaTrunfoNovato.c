#include <stdio.h>

int main(){

    //Super Trunfo em Lógica C

    //Declaração das Variáveis 

    int populacao1 = 60;
    int populacao2 = 75;
    float area1 = 26.0; 
    float area2 = 66.0;
    float pib1 = 35;
    float pib2 = 25;
    int turisticos1 = 85;
    int turisticos2 = 55;

    //Declarando variáveis, Densidade Populacional e PIB per Capita

    float densidadeplp1, densidadeplp2, pibcapita1, pibcapita2;

    //Calculando Densidade e PIB per capita

   densidadeplp1 = (float) populacao1 / area1;

    pibcapita1 = (float) pib1 / populacao1; 

    densidadeplp2 = (float) populacao2 / area2;

    pibcapita2 = (float) pib2 / populacao2; 

    //Teste das estruturas de decisão, verificando se é verdadeira ou falsa

    if(populacao1 > populacao2){
        printf("Populaçao 1 venceu!\n");
    }else{
        printf("População 2 venceu!\n");
    }

    if(area1 > area2){
        printf("Area 1 venceu!\n");
    }else{
        printf("Area 2 venceu!\n");
    }

    if(pib1 > pib2){
        printf("Pib 1 venceu!\n");
    }else{
        printf("Pib 2 venceu!\n");
    }

    if(turisticos1 > turisticos2){
        printf("Pontos Turisticos 1 venceu!\n");
    }else{
        printf("Pontos Turisticos 2 venceu!\n");
    }

    if(densidadeplp1 < densidadeplp2){
        printf("Densidade populacional 1 venceu!\n");
    }else{
        printf("Densidade populacional 2 venceu!\n");
    }

    if(pibcapita1 > pibcapita2){
        printf("Pib per Capita 1 venceu!\n");
    }else{
        printf("Pib per Capita 2 venceu!\n");
    }

    
}