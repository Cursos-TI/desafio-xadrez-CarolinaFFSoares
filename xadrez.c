#include <stdio.h>

int main(){

int casastorre = 5;
//MOVENDO A TORRE 5 CASAS A DIREITA
printf("Movimento da torre:\n");
for(int i = 1; i <= casastorre; i++) {
    printf("Direita!\n"); //IMPRIMINDO A DIREÇÃO DA TORRE

}
int casasbispo = 5;
int casasandandas = 0;
//MOVENDO O BISPO 5 CASAS A DIAGONAL CIMA,DIREITA
printf("Movendo o bispo:\n");
while(casasandandas <= casasbispo ){
    printf ("Cima, Direita!\n");
    casasandandas++;
}

int casasrainha = 8;
int casasandandasrainha = 0;
//MOVENDO A RAINHA 8 CASAS
printf ("Movendo a rainha:\n");
do{
    printf ("Esqueda!\n");
    casasandandasrainha++;
} while (casasandandasrainha < casasrainha);

 // Movimento do CAVALO
 int movimentosCavalo = 1; // Simulando 1 movimento em L
 int i; // variável para o for
 int j; // variável para o while

 printf("\nMovimento do Cavalo:\n");

 // Loop externo: número de vezes que faremos o movimento completo
 for (int m = 0; m < movimentosCavalo; m++) {
     // Primeiro loop interno: duas casas para baixo (usando for)
     for (i = 0; i < 2; i++) {
         printf("Baixo\n");
     }

     // Segundo loop interno: uma casa para a esquerda (usando while)
     j = 0;
     while (j < 1) {
         printf("Esquerda\n");
         j++;
     }
 }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
