#include <stdio.h>


int main(){

   
    //Super Trunfo em Lógica C

    //Declaração das Variáveis 

    int populacao1 = 75;
    int populacao2 = 75;
    float area1 = 22.0; 
    float area2 = 66.0;
    float pib1 = 35;
    float pib2 = 25;
    int turisticos1 = 55;
    int turisticos2 = 55;

    //Declarando varial Densidade Populacional

    float densidadeplp1, densidadeplp2;

    //Calculando Densidade e PIB per capita

   densidadeplp1 = (float) populacao1 / area1;


   densidadeplp2 = (float) populacao2 / area2;

   //Menu Interativo

   int opcao;

   printf("*** Super Trunfo Aventureiro ***\n");
   printf("Escolha o atributo a ser comparado\n");

   printf("1. População\n");
   printf("2. Area\n");
   printf("3. PIB\n");
   printf("4. Pontos Turisticos\n");
   printf("5. Densidade Populacional\n");
   scanf("%d", &opcao);

   //Aplicação do Switch e If-else-If

   switch (opcao)
   {
   case 1:
    
   if(populacao1 > populacao2)
    {
        printf("População de Carta 1 venceu");

    }else if(populacao1 < populacao2){

        printf("População de Carta 2 venceu");

    }else{

        printf("Empate");
    }
    break;

    case 2:
  
    if(area1 > area2)
    {
        printf("Area de Carta 1 venceu");

    }else if(area1 < area2){

        printf("Area de Carta 2 venceu");

    }else{

        printf("Empate");
    }

    break;

    case 3:
  
    if(pib1 > pib2)
    {
        printf("PIB de Carta 1 venceu");

    }else if(pib1 < pib2){

        printf("PIB de Carta 2 venceu");

    }else{

        printf("Empate");
    }
    break;

    case 4:

    if(turisticos1 > turisticos2)
    {
        printf("Pontos Turisticos de Carta 1 venceu");

    }else if(turisticos1 < turisticos2){

        printf("Pontos Turisticos de Carta 2 venceu");

    }else{

        printf("Empate");
    }

    break;

    case 5:

    if(densidadeplp1 < densidadeplp2)
    {
        printf("Densidade populacional de Carta 1 venceu");

    }else if(densidadeplp1 > densidadeplp2){

        printf("Densidade populacional de Carta 2 venceu");

    }else{

        printf("Empate");
    }
    
    break;

    default:
   
    printf("Opção inválida");
   
    break;

    
   
   
   }



 


}