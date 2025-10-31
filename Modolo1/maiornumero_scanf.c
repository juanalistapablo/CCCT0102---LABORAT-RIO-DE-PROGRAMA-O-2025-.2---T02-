#include <stdio.h>

int main() {
    int i, numero, soma = 0, maior = numero; // o primeiro número é o maior até agora

    for(i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        soma += numero;

        if(numero > maior) {
            maior = numero;
        }
    }

    printf("\nO maior número é: %d\n", maior);
    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}
