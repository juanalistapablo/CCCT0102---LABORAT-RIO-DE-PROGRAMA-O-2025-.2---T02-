//EscrevaumprogramaemCqueleiatrêsnúmeros(n1,n2en3),calculaemostrao
//resultadodaexpressão: n1+n2)/n3
#include<stdio.h>
int main() {
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O maior valor e: %d\n", n1);
    } else if (n2 > n1) {
        printf("O maior valor e: %d\n", n2);
    } else {
        printf("Nao tem valor maior, ambos sao iguais.\n");
    }
    return 0;
}

