#include <stdio.h>

// -------------------- TORRE ---------------------
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// -------------------- RAINHA ---------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------- BISPO ---------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    for (int i = 0; i < casas; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal (1 vez por casa para simular diagonal)
            printf("Cima Direita\n");
        }
    }
}

// -------------------- CAVALO ---------------------
void moverCavaloComplexo(int movimentos) {
    printf("\nMovimento do Cavalo (Cima e Direita):\n");
    for (int m = 0; m < movimentos; m++) {
        int subidas = 0, direita = 0;

        // loop para subir 2 casas
        for (int i = 0; i < 3; i++) {
            if (subidas < 2) {
                printf("Cima\n");
                subidas++;
                continue;
            }
            // quando já subiu 2, sai do loop
            break;
        }

        // depois de subir, vai para a direita 1 casa
        int j = 0;
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }
}

// -------------------- MAIN ---------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    moverBispoComLoops(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavaloComplexo(movimentosCavalo);

    return 0;
}

