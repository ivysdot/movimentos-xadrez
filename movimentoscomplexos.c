#include <stdio.h>

void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(casas - 1);
}

void moverTorreEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            printf("Cima-Direita\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas == 0) return;
    moverTorreCima(casas);
    moverTorreBaixo(casas);
    moverTorreEsquerda(casas);
    moverTorreDireita(casas);
    moverBispo(casas);
}

void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) {
            if (i % 2 == 0) continue;
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    int casas = 3;
    int movimentosCavalo = 4;

    moverTorreCima(casas);
    moverTorreBaixo(casas);
    moverTorreEsquerda(casas);
    moverTorreDireita(casas);

    printf("\n");

    moverBispo(casas);

    printf("\n");

    moverRainha(casas);

    printf("\n");

    moverCavalo(movimentosCavalo);

    return 0;
}
