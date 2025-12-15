#include <stdio.h>

int Quadrado_Magico(int mat[3][3]) {
    int i, j, soma, referencia = 0;

    for (j = 0; j < 3; j++) {
        referencia += mat[0][j];
    }

    for (i = 1; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
        if (soma != referencia) return 0;
    }

    for (j = 0; j < 3; j++) {
        soma = 0;
        for (i = 0; i < 3; i++) {
            soma += mat[i][j];
        }
        if (soma != referencia) return 0;
    }

    if (mat[0][0] + mat[1][1] + mat[2][2] != referencia) return 0;
    if (mat[0][2] + mat[1][1] + mat[2][0] != referencia) return 0;

    return 1;
}

int main() {
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (Quadrado_Magico(matriz)) {
        printf("E um Quadrado Magico\n");
    } else {
        printf("Nao e um Quadrado Magico\n");
    }

    return 0;
}
