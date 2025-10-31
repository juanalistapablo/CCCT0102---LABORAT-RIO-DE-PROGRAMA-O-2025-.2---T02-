#include<stdio.h>
int main() {
    int num, cont,maior=num, i;
    cont=0;
    for (i = 1; i <= 3; i++) {
        printf("digite o %dº número: ", i);
        scanf("%d", &num);
        cont = cont + num;
        if(maior>num){
            maior=num;
        }
    }
        printf("A soma dos números digitados é: %d\n", cont);
        printf("O maior número digitado é: %d\n", maior);
    return 0;
}