#include <stdio.h>

int main() {
    int N;              // entrada
    int i;              // contador do laço
    int quadrado;       // guarda i*i de cada passo
    int soma;           // acumula a soma

    printf("Digite N (>=3): ");
    scanf("%d", &N);

    if (N < 3) {                         // valida a entrada
        printf("N precisa ser >= 3.\n");
        return 0;
    }

    i = 3;                               // começa em 3
    soma = 0;                            // soma inicia em 0

    while (i <= N) {                     // repete até chegar em N
        quadrado = i * i;               // calcula i^2
        soma = soma + quadrado;         // adiciona na soma
        i = i + 1;                      // avança para o próximo i
    }

    printf("Soma de i^2 de 3 ate %d = %d\n", N, soma);
    return 0;
}
