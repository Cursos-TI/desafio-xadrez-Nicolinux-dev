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

    printf("\n"); // separador visual
    
    // Movimentos "L" do Cavalo: 2 casas para baixo e 1 para a esquerda
    int movimentos_cavalo = 1; // Quantidade de vezes que o cavalo se move 
    
    for (int m = 1; m <= movimentos_cavalo; m++) { // loop externo com for
        int i = 1;
        while (i <= 2) { // loop interno para duas casas para baixo
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n"); // uma casa perpendicularmente
    }

    return 0;
}
