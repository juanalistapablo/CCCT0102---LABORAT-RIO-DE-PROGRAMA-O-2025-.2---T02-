#include <stdio.h>

int main() {
    int vetor[5];

    // Ler 5 valores normalmente (índices 0..4)
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            fprintf(stderr, "Entrada inválida\n");
            return 1;
        }
    }

    // Imprimir de trás pra frente
    printf("Os valores digitados (de trás pra frente):\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

