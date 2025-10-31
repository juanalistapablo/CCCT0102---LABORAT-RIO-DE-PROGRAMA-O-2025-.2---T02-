/* Crie um programa que leia 100 valores e mostre-os na ordem inversa da leitura os impares */
#include <stdio.h>
int main() {
    int vetor[100]; 
    // Ler 100 valores
    for (int i = 0; i < 100; i++) {
        printf("Digite o %dº valor: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            fprintf(stderr, "Entrada inválida\n");              
            return 1;
        }
    }       
