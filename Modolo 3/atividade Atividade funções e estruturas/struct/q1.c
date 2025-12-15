#include <stdio.h>
#include <math.h>

struct Complexo {
    float real;
    float imaginaria;
};

int main() {
    struct Complexo z;
    float modulo;

    printf("Digite a parte real (a): ");
    scanf("%f", &z.real);

    printf("Digite a parte imaginaria (b): ");
    scanf("%f", &z.imaginaria);

    modulo = sqrt((z.real * z.real) + (z.imaginaria * z.imaginaria));

    printf("O modulo de z eh: %.2f\n", modulo);

    return 0;
}
