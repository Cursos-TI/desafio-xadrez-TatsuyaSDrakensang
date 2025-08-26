#include <stdio.h>

int main() {
    // --- TORRE ---
    // Torre move 5 casas para a direita (usando for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // --- BISPO ---
    // Bispo move 5 casas na diagonal "cima e direita" (usando while)
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
    printf("\n");

    // --- RAINHA ---
    // Rainha move 8 casas para a esquerda (usando do-while)
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}