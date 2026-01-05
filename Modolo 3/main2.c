


#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função para comparar duas strings ignorando maiúsculas e minúsculas
int String_Iguais(char str1[], char str2[]) {
    int i; // Declara a variável de índice para usar no loop

    // Inicia o laço 'for' com i = 0.
    // O loop continua enquanto pelo menos uma das strings não chegar ao fim ('\0').
    // A cada repetição, incrementa o índice i em 1.
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        
        char c1 = str1[i]; // Pega o caractere atual da primeira string
        char c2 = str2[i]; // Pega o caractere atual da segunda string

        // Verifica se o caractere c1 é uma letra maiúscula (entre 'A' e 'Z')
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32; // Converte para minúscula somando 32 (tabela ASCII)
        }

        // Verifica se o caractere c2 é uma letra maiúscula (entre 'A' e 'Z')
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32; // Converte para minúscula somando 32 (tabela ASCII)
        }

        // Compara os dois caracteres já convertidos para minúsculo
        if (c1 != c2) {
            return 0; // Se forem diferentes, retorna 0 (falso) e encerra a função
        }
    }

    // Se o laço terminar sem encontrar diferenças, retorna 1 (verdadeiro)
    return 1;
}

// Função principal do programa
int main() {
    char s1[100], s2[100]; // Declara dois vetores de char para armazenar as palavras

    printf("Digite a primeira string: "); // Exibe mensagem na tela pedindo a 1ª string
    scanf("%s", s1); // Lê a primeira string digitada pelo usuário

    printf("Digite a segunda string: "); // Exibe mensagem na tela pedindo a 2ª string
    scanf("%s", s2); // Lê a segunda string digitada pelo usuário

    // Chama a função String_Iguais e verifica o resultado no 'if'
    if (String_Iguais(s1, s2)) {
        printf("As strings sao iguais.\n"); // Imprime se a função retornou 1 (verdadeiro)
    } else {
        printf("As strings sao diferentes.\n"); // Imprime se a função retornou 0 (falso)
    }

    return 0; // Retorna 0 para indicar que o programa finalizou com sucesso
}


#include <stdio.h>

// Protótipo da função
void imprimirPosicoes(char str[], char buscar);

int main() {
    char str[100];
    char buscar;

    // 1. Leitura de dados (Main)
    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    printf("Digite o caractere para ver as posicoes: ");
    scanf(" %c", &buscar); // O espaço antes do %c limpa o buffer

    // 2. Chamada da função
    // A função fará todo o trabalho de busca e impressão
    imprimirPosicoes(str, buscar);

    return 0;
}

// --- Implementação da Função ---
void imprimirPosicoes(char str[], char buscar) {
    int i;
    int encontrouAlgum = 0; // Flag para saber se achamos pelo menos um

    printf("O caractere '%c' aparece nas posicoes: ", buscar);

    // Percorre a string caractere por caractere
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == buscar) {
            printf("%d ", i);
            encontrouAlgum = 1; // Marca que encontramos
        }
    }

    // Se a flag continuou 0, significa que o if nunca foi verdadeiro
    if (encontrouAlgum == 0) {
        printf("(Nao encontrado)");
    }
    printf("\n");
}*/



#include <stdio.h>

// Protótipo da função
int contarOcorrencias(char str[], char busca);

int main() {
    char frase[100];
    char caractere;
    int resultado;

    // 1. Entrada de dados
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("Digite o caractere para contar: ");
    // O espaço antes do %c é crucial para limpar o buffer do teclado
    scanf(" %c", &caractere); 

    // 2. Chamada da função
    // A main "pergunta" para a função quantas vezes o caractere aparece
    resultado = contarOcorrencias(frase, caractere);

    // 3. Exibição do resultado
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, resultado);

    return 0;
}

// --- Função que realiza a contagem ---
// Recebe: a string completa e o caractere alvo
// Retorna: um número inteiro (o total de vezes)
int contarOcorrencias(char str[], char busca) {
    int i;
    int contador = 0;

    // Percorre a string até encontrar o terminador nulo '\0'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == busca) {
            contador++;
        }
    }

    return contador;
}



#include <stdio.h>
#include <string.h>

// Protótipo da função
void imprimirInverso(char str[]);

int main() {
    char frase[100];

    printf("Digite uma frase ou palavra: ");
    // O fgets pega o texto digitado e coloca na variável 'frase'
    fgets(frase, 100, stdin);

    // Chamada da função passando a string digitada
    imprimirInverso(frase);

    return 0;
}

// Função que recebe uma string e imprime ao contrário
void imprimirInverso(char str[]) {
    int i;
    int tamanho = strlen(str); // Calcula o tamanho

    printf("Inverso: ");
    
    // Loop que começa do final (tamanho - 1) e vai até o início (0)
    for (i = tamanho - 1; i >= 0; i--) {
        
        // Verificação importante:
        // O fgets captura o 'Enter' (\n) e coloca no final da string.
        // Se não fizermos esse IF, a saída pularia uma linha antes de começar a escrever.
        if (str[i] != '\n') {
            printf("%c", str[i]);
        }
    }
    printf("\n"); // Apenas para quebra de linha final estética
}*/


#include <stdio.h>
#include <stdlib.h>

char Quantvog(char texto[50]);

int main() {
	char nome[60];
	
	Quantvog(nome);

	
}

char Quantvog(char texto[]){
	int i;
	int contador = 0;
	int mostra;
	
	printf("digite seu texto\n");
	fgets(texto,100,stdin);
	/*if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            
            // 2. Se for letra, verifica se NÃO é vogal
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {*/
	 for(i = 0; texto[i] != '\0'; i++){
	 	char c = texto[i];
		 if( c =='a'|| c == 'e'|| c == 'i'|| c == 'o'|| c =='u'){
		 	contador++;
		 }
	 }	
	 mostra = printf("O seu texto tem  %d vogais", contador);
	 return mostra;
}
