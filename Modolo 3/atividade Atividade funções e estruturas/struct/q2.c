#include <stdio.h>

struct Familia {
    char sobrenome_pai[50];
    char sobrenome_mae[50];
    int qtd_filhos;
    int qtd_filhas;
    int qtd_animais;
};

int main() {
    struct Familia f;

    printf("Digite o sobrenome do pai: ");
    scanf("%s", f.sobrenome_pai);

    printf("Digite o sobrenome da mae: ");
    scanf("%s", f.sobrenome_mae);

    printf("Quantidade de filhos homens: ");
    scanf("%d", &f.qtd_filhos);

    printf("Quantidade de filhas mulheres: ");
    scanf("%d", &f.qtd_filhas);

    printf("Quantidade de animais: ");
    scanf("%d", &f.qtd_animais);

    printf("\n--- Dados Cadastrados ---\n");
    printf("Sobrenome Pai: %s\n", f.sobrenome_pai);
    printf("Sobrenome Mae: %s\n", f.sobrenome_mae);
    printf("Filhos: %d\n", f.qtd_filhos);
    printf("Filhas: %d\n", f.qtd_filhas);
    printf("Animais: %d\n", f.qtd_animais);

    return 0;
}
