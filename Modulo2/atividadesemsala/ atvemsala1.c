/* Crie um programa que leia 100 valores e mostre-os na ordem inversa da leitura */
#include <stdio.h>
int main() {
    int vetor[100];

    // Ler 100 valores
    for (int i = 0; i < 100; i++) {
        printf("Digite o %dº valor: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            fprintf(stderr, "Entrada inválida\n");
            return 1;
        }
    }

    // Imprimir de trás pra frente
    printf("Os valores digitados (de trás pra frente):\n");
    for (int i = 99; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}   