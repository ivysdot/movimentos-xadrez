#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;

    int linhaH = 2;
    int colunaH = 3;

    int linhaV = 5;
    int colunaV = 6;

    if (colunaH + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
        }
    }

    if (linhaV + tamanhoNavio <= 10) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 3) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < tamanhoNavio; i++) {
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
