#include <stdio.h>

// Definição das constantes de movimentação
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

void movimentarBispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: Diagonal superior direita (Cima e Direita)\n", i);
    }
    printf("\n");
}

void movimentarTorre() {
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Passo %d: Direita\n", i);
    }
    printf("\n");
}

void movimentarRainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= MOV_RAINHA; i++) {
        printf("Passo %d: Esquerda\n", i);
    }
    printf("\n");
}

int main() {
    // Exibir movimentação das peças
    movimentarBispo();
    movimentarTorre();
    movimentarRainha();

    return 0;
}