#include <stdio.h>

int main(){

    //Xadrez Nível Novato

    //Declaração das variavéis

    int bispo = 1, rainha = 1;

   //Inicando loop do Bispo 

    do
    {
        printf("%d Bispo moveu Cima Direita\n", bispo);

        bispo ++;
    } while (bispo <= 5);

    //Melhor divisão de cada variavel

    printf("\n");

    //Inicando loop da Rainha

    while (rainha <= 8)
   {
        printf("%d Rainha Moveu para Esquerda\n", rainha);

        rainha ++;
   }

   //Melhor divisão de cada variavel

   printf("\n");

   //Inicando loop da Torre

   for (int torre = 1; torre <= 5; torre++)
   {
    printf("%d Torreu moveu para Direita\n", torre);
   }
   
    return 0;


}