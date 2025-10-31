#include <stdio.h>

int main() {
    int i;
    float num, soma = 0.0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);
        soma = soma + num;
      
    }
printf("A soma dos valores digitados e: %.2f\n", soma);
    return 0;
}
/* Digite o 1º valor: 1
Digite o 2º valor: 1
Digite o 3º valor: 1
Digite o 4º valor: 1
Digite o 5º valor: 1
Digite o 6º valor: 1
Digite o 7º valor: 1
Digite o 8º valor: 1
Digite o 9º valor: 1
Digite o 10º valor: 1
A soma dos valores digitados e: 10.00 */
