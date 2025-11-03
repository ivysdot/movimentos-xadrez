#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;

    int linhaH = 1, colunaH = 2;
    int linhaV = 5, colunaV = 7;
    int linhaD1 = 0, colunaD1 = 0;
    int linhaD2 = 3, colunaD2 = 7;

    if (colunaH + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaH][colunaH + i] = 3;
    }

    if (linhaV + tamanhoNavio <= 10) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) if (tabuleiro[linhaV + i][colunaV] == 3) sobreposicao = 1;
        if (!sobreposicao) for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaV + i][colunaV] = 3;
    }

    if (linhaD1 + tamanhoNavio <= 10 && colunaD1 + tamanhoNavio <= 10) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) if (tabuleiro[linhaD1 + i][colunaD1 + i] == 3) sobreposicao = 1;
        if (!sobreposicao) for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    if (linhaD2 + tamanhoNavio <= 10 && colunaD2 - tamanhoNavio + 1 >= 0) {
        int sobreposicao = 0;
        for (int i = 0; i < tamanhoNavio; i++) if (tabuleiro[linhaD2 + i][colunaD2 - i] == 3) sobreposicao = 1;
        if (!sobreposicao) for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    int cone[5][5] = {0};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (j >= 2 - i && j <= 2 + i) cone[i][j] = 1;

    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i == 2 || j == 2) cruz[i][j] = 1;

    int octaedro[5][5] = {0};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (j >= 2 - i && j <= 2 + i && i <= 2) octaedro[i][j] = 1;
    for (int i = 3; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (j >= i - 2 && j <= 6 - i) octaedro[i][j] = 1;

    int origemConeLinha = 0, origemConeColuna = 4;
    int origemCruzLinha = 5, origemCruzColuna = 2;
    int origemOctaedroLinha = 6, origemOctaedroColuna = 7;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cone[i][j] == 1) {
                int x = origemConeLinha + i;
                int y = origemConeColuna + j - 2;
                if (x >= 0 && x < 10 && y >= 0 && y < 10 && tabuleiro[x][y] == 0) tabuleiro[x][y] = 5;
            }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cruz[i][j] == 1) {
                int x = origemCruzLinha + i - 2;
                int y = origemCruzColuna + j - 2;
                if (x >= 0 && x < 10 && y >= 0 && y < 10 && tabuleiro[x][y] == 0) tabuleiro[x][y] = 5;
            }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (octaedro[i][j] == 1) {
                int x = origemOctaedroLinha + i - 2;
                int y = origemOctaedroColuna + j - 2;
                if (x >= 0 && x < 10 && y >= 0 && y < 10 && tabuleiro[x][y] == 0) tabuleiro[x][y] = 5;
            }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
