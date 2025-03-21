#include <stdio.h>


int main(){

   
    //Super Trunfo em Lógica C

    //Declaração das Variáveis 

    int populacao1 = 75;
    int populacao2 = 60;
    float area1 = 22.0; 
    float area2 = 66.0;
    float pib1 = 66;
    float pib2 = 25;
    int turisticos1 = 55;
    int turisticos2 = 65;

    //Variavel referente ao resultado do primeiro e segundo atribudo a ser escolhido para comparação

    int resultado1, resultado2;

    //Declarando variavel Densidade Populacional

    float densidadeplp1, densidadeplp2;

    //Calculando Densidade e PIB per capita

   densidadeplp1 = (float) populacao1 / area1;


   densidadeplp2 = (float) populacao2 / area2;

   //Variavéis dos atribudos selecionados

   char primeiroAtribudo, segundoAtributo;

   //Iniciando o jogo Super Trunfo

   printf("*** Super Trunfo Mestre ***\n");
   printf("Você deve escolher o atributo a ser comparado\n");

   //Primero Atribudo de comparação

   printf("A. População\n");
   printf("B. Area\n");
   printf("C. PIB\n");
   printf("D. Pontos Turisticos\n");
   printf("E. Densidade Populacional\n");

   printf("Escolha a comparação: ");
   scanf(" %c", &primeiroAtribudo);

   //Guardando informação dependo da escolha 

   switch (primeiroAtribudo)
   {
case 'A':
case 'a': 
   printf("Você escolher População!\n");
   resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;

case 'B':
case 'b':
printf("Você escolher a Area!\n");
resultado1 = area1 > area2 ? 1 : 0;
break;

case 'C':
case 'c':
printf("Você escolher PIB!\n");
resultado1 = pib1 > pib2 ? 1 : 0;
break;

case 'D':
case 'd':
printf("Você escolher Pontos Turisticos!\n");
resultado1 = turisticos1 > turisticos2 ? 1 : 0;
break;

case 'E':
case 'e': 
printf("Você escolher Densidadade Populacional!\n");
resultado1 = densidadeplp1 < densidadeplp2 ? 1 : 0;
break;
   
   default:
printf("Opção de jogo inválida\n");
    break;
   }

   //Inicio do Segundo Atributo de comparação

   printf("ATENÇÃO\n");
   printf("Escolha o atributo a ser comparado, que seja diferente do primeiro\n");

   printf("A. População\n");
   printf("B. Area\n");
   printf("C. PIB\n");
   printf("D. Pontos Turisticos\n");
   printf("E. Densidade Populacional\n");

   printf("Escolha a comparação: ");
   scanf(" %c", &segundoAtributo);

   //IF para evitar de ser escolhido o mesmo atributo

   if(primeiroAtribudo == segundoAtributo)
   {
    printf("Você não pode escolher o mesmo atributo!!");
   }else
   {
   
    //Iniciando Switch do segundo atribudo caso não seja o mesmo que o segundo

    switch (segundoAtributo)
    {
 case 'A':
 case 'a': 
    printf("Você escolher População!\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
     break;
 
 case 'B':
 case 'b':
 printf("Você escolher a Area!\n");
 resultado2 = area1 > area2 ? 1 : 0;
 break;
 
 case 'C':
 case 'c':
 printf("Você escolher PIB!\n");
 resultado2 = pib1 > pib2 ? 1 : 0;
 break;
 
 case 'D':
 case 'd':
 printf("Você escolher Pontos Turisticos!\n");
 resultado2 = turisticos1 > turisticos2 ? 1 : 0;
 break;
 
 case 'E':
 case 'e': 
 printf("Você escolher Densidadade Populacional!\n");
 resultado2 = densidadeplp1 < densidadeplp2 ? 1 : 0;
 break;
    
    default:
 printf("Opção de jogo inválida\n");
     break;
    }

    //Exibição dos Resultados das Comparações

    if(resultado1 && resultado2)
    {
        printf("Parabéns, você ganhou\n");
    }else if(resultado1 != resultado2)
    {
        printf("Empatou\n");
    }else
    {
        printf("Você Perdeu!!\n");
    }
 

   }






}