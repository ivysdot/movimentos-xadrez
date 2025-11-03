
#include <stdio.h>

int main() {
   
    
    int casas_torre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

  

    int casas_bispo = 5;
    int i = 1;
    printf("\n=== Movimento do BISPO ===\n");
    while (i <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }


    int casas_rainha = 8;
    int j = 1;
    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casas_rainha);

    printf("\nSimulação concluída!\n");
    return 0;
}
