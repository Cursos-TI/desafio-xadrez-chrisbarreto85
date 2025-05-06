#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para mover o Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Movimento do Bispo com loops aninhados (simula movimentação diagonal)
void moverBispoComLoops(int passos) {
    printf("Movimento do Bispo com Loops Aninhados:\n");
    for (int vertical = 0; vertical < passos; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

// Movimento do Cavalo usando loops aninhados com condições
void moverCavalo() {
    printf("Movimento do Cavalo (em L - 2 Cima, 1 Direita):\n");
    int movimentos = 3; // Número de movimentos do Cavalo

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0 || j == 1) {
                printf("Cima\n");
            } else if (j == 2) {
                printf("Direita\n");
                break; // Quebra após o movimento em "L"
            }
        }
        printf("\n"); // Separador entre movimentos
    }
}

int main() {
    // Movimento da Torre usando recursão
    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo usando recursão
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita - Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // Movimento do Bispo usando loops aninhados
    moverBispoComLoops(5);
    printf("\n");

    // Movimento da Rainha usando recursão
    printf("Movimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo com loops aninhados
    moverCavalo();

    return 0;
}