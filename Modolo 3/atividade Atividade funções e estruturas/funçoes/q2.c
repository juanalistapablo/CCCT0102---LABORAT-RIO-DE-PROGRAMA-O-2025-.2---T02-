#include <stdio.h>
#include <stdlib.h>

// Protótipo da função
int Quantidade_Vogais(char str[]);

int main() {
    char texto[100];
    int total_vogais;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, 100, stdin);

    total_vogais = Quantidade_Vogais(texto);

    printf("A quantidade de vogais eh: %d\n", total_vogais);

    return 0;
}

int Quantidade_Vogais(char str[]) {
    int contador = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        
        char c = str[i];
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            
            contador++;
        }
    }

    return contador;
}
