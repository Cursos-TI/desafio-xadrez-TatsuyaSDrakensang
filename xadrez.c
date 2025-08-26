#include <stdio.h>

int main() {
    // --- TORRE ---
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // --- BISPO ---
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
    printf("\n");

    // --- RAINHA ---
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);
    printf("\n");

    // --- CAVALO ---
    // Cavalo move 2 casas para baixo + 1 para a esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo: casas para baixo (for obrigatório)
    for (int k = 1; k <= casasBaixo; k++) {
        printf("Baixo (%d)\n", k);
    }

    // Loop interno: casas para a esquerda (while aninhado)
    int l = 1;
    while (l <= casasEsquerda) {
        printf("Esquerda (%d)\n", l);
        l++;
    }

    return 0;
}