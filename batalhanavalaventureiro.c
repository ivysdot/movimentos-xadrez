#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;

    int linhaH = 1, colunaH = 2;
    int linhaV = 5, colunaV = 7;
    int linhaD1 = 0, colunaD1 = 0;
    int linhaD2 = 3, colunaD2 = 7;

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

    if (linhaD1 + tamanhoNavio <= 10 && colunaD1 + tamanhoNavio <= 10) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaD1 + i][colunaD1 + i] == 3) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < tamanhoNavio; i++) {
                tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
            }
        }
    }

    if (linhaD2 + tamanhoNavio <= 10 && colunaD2 - tamanhoNavio + 1 >= 0) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro
