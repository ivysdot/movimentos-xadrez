#include <stdio.h>

int main() {
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    int j = 1;
    printf("Movimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    printf("Movimento do Cavalo:\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    for (int x = 1; x <= movimentosBaixo; x++) {
        printf("Baixo\n");

        if (x == movimentosBaixo) {
            int y = 1;
            while (y <= movimentosEsquerda) {
                printf("Esquerda\n");
                y++;
            }
        }
    }

    return 0;
}
