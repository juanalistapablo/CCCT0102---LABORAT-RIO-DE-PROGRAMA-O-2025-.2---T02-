#include <stdio.h>

int main() {
    int N;            // quantidade de valores
    int valor;        // valor lido agora
    int menor;        // menor valor encontrado
    int posicao;      // posicao (1-baseada) do menor
    int i;            // contador de quantos ja li

    printf("Quantos valores vai digitar? ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    // lê o primeiro e usa como inicial
    printf("Digite o 1o valor: ");
    scanf("%d", &valor);
    menor = valor;        // até agora, este é o menor
    posicao = 1;          // posição dele é 1
    i = 2;                // próximo será o 2o

    while (i <= N) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);

        if (valor < menor) {    // achou menor novo?
            menor = valor;      // atualiza menor
            posicao = i;        // guarda posicao
        }

        i = i + 1;              // avança no contador
    }

    printf("Menor valor = %d\n", menor);
    printf("Posicao = %d\n", posicao);   // 1 para o 1o, 2 para o 2o, etc.
    return 0;
}
