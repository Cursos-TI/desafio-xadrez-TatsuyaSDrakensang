#include <stdio.h>

// --- TORRE (recursiva) ---
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // caso base
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// --- BISPO (recursiva + loops aninhados) ---
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // caso base

    // loop externo = vertical
    for (int v = 1; v <= 1; v++) {
        // loop interno = horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d)\n", atual);
        }
    }

    moverBispo(casas, atual + 1); // chamada recursiva
}

// --- RAINHA (recursiva) ---
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // caso base
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1);
}

// --- CAVALO (loops complexos) ---
void moverCavalo() {
    int casasVertical = 2;   // duas casas para cima
    int casasHorizontal = 1; // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    // loop externo = vertical
    for (int v = 1; v <= casasVertical; v++) {
        if (v == 2) {
            // Exemplo de continue: ignorar iteração extra
            continue;
        }
        printf("Cima (%d)\n", v);
    }

    // loop interno = horizontal
    int h = 1;
    while (h <= casasHorizontal) {
        printf("Direita (%d)\n", h);
        // Exemplo de break: parar após a primeira execução
        break;
    }
}

int main() {
    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5, 1);
    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8, 1);
    printf("\n");

    // CAVALO
    moverCavalo();
    printf("\n");

    return 0;
}