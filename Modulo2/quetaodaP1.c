#include <stdio.h>
int main() {
    int n,i;
    printf("Digite um numero de vezes que voce quer escolher um numero: ");
    scanf("%d", &i);

    for(n<=i){
        scanf("%d", &n);
    }
    printf("O numero escolhido foi: %d\n", n);
    return 0;       
}