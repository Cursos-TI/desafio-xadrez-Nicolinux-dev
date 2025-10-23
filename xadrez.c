#include <stdio.h>

int main() {
    // Simulação de movimentos de peças de xadrez

    // Torre: 5 casas para a direita
    for (int torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    printf("\n"); // separador visual

    // Bispo: 5 casas na diagonal (Cima, Direita)
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    printf("\n"); // separador visual

    // Rainha: 8 casas para a esquerda
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}
