#include <stdio.h>

int main() {
    int N;
    printf("Digite N: ");
    scanf("%d", &N);

    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}
