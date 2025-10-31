#include <stdio.h>

int main() {
    int vetor [5], i;
    for (int i = 0; i <5 ; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Os valores digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
/* Digite o 1º valor: 2
Digite o 2º valor: 2
Digite o 3º valor: 2
Digite o 4º valor: 2
Digite o 5º valor: 2
Os valores digitados foram:
2
2
2
2
2 */
