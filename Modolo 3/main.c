#include <stdio.h>

#define TAM 4 // Define o tamanho fixo de 4 posicoes

// Função que calcula a combinacao linear
// Recebe: vetor1, escalar1, vetor2, escalar2 e o vetor de resultado
void Combinacao_Linear(float v1[], float k1, float v2[], float k2, float resultado[]) {
    int i;
    for (i = 0; i < TAM; i++) {
        // Multiplica cada vetor pelo seu escalar e soma os resultados
        resultado[i] = (k1 * v1[i]) + (k2 * v2[i]);
    }
}

int main() {
    float vetA[TAM], vetB[TAM], vetResultado[TAM];
    float alpha, beta; // Os escalares (coeficientes)
    int i;

    // 1. Leitura do Vetor A
    printf("--- Digite os 4 valores do Vetor A ---\n");
    for (i = 0; i < TAM; i++) {
        printf("Posicao %d: ", i);
        scanf("%f", &vetA[i]);
    }

    // 2. Leitura do Vetor B
    printf("\n--- Digite os 4 valores do Vetor B ---\n");
    for (i = 0; i < TAM; i++) {
        printf("Posicao %d: ", i);
        scanf("%f", &vetB[i]);
    }

    // 3. Leitura dos Escalares (as constantes da combinacao)
    printf("\n--- Definicao dos Escalares ---\n");
    printf("Digite o multiplicador (escalar) para o Vetor A: ");
    scanf("%f", &alpha);
    printf("Digite o multiplicador (escalar) para o Vetor B: ");
    scanf("%f", &beta);

    // 4. Chamada da Funcao
    Combinacao_Linear(vetA, alpha, vetB, beta, vetResultado);

    // 5. Exibicao do Resultado
    printf("\n--- Resultado da Combinacao Linear ---\n");
    // Ex: R = 2*A + 3*B
    printf("Formula: R = (%.1f * A) + (%.1f * B)\n\n", alpha, beta);
    
    printf("Vetor Gerado: [ ");
    for (i = 0; i < TAM; i++) {
        printf("%.2f ", vetResultado[i]);
    }
    printf("]\n");

    return 0;
}





#include <stdio.h>


int verificar_nula(int mat[3][3]) {
    int i, j;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            // Se encontrar APENAS UM número diferente de 0,
            // já sabemos que a matriz não é nula.
            // O "return 0" encerra a função imediatamente.
            if(mat[i][j] != 0) {
                return 0; // Falso (Não é nula)
            }
        }
    }
    
    // Se o loop terminou e não retornou 0, significa que todos são 0.
    return 1; // Verdadeiro (É nula)
}

int main() {
    int mat[3][3];
    int i, j;

    // 1. Leitura da matriz
    printf("--- Digite os valores da Matriz 3x3 ---\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // 2. Chamada da função e Exibição
    // Como a função retorna 1 (verdadeiro) ou 0 (falso), podemos usar direto no if
    if (verificar_nula(mat)) {
        printf("\nResultado: A matriz E NULA (todos os elementos sao 0).\n");
    } else {
        printf("\nResultado: A matriz NAO E NULA.\n");
    }

    return 0;
}




#include <stdio.h>

void encontrar_maior(int vetor[10]) {
    // Passo 1: Inicialização
    // Assumimos que o primeiro elemento é o maior até que se prove o contrário
    int maior_valor = vetor[0];
    int posicao = 0;

    // Passo 2: Varredura
    // Começamos do 1 porque o 0 já é o nosso "maior_valor" atual
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior_valor) {
            maior_valor = vetor[i]; // Atualiza o valor
            posicao = i;            // Atualiza a posição (índice)
        }
    }

    // Passo 3: Resultado
    printf("\n--- RESULTADO ---\n");
    printf("O maior valor e: %d\n", maior_valor);
    
    // Mostramos a posição do computador (0-9) e a humana (1-10)
    printf("Ele esta no indice: %d (Posicao %d)\n", posicao, posicao + 1);
}

int main() {
    int numeros[10];
    int i;

    // Leitura do vetor
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Chamada da função
    encontrar_maior(numeros);

    return 0;
}





#include <stdio.h>


int verificar_paralelismo(float v1[], float v2[], int n) {
    float k = 0;
    int k_definido = 0; // Funciona como um interruptor (booleano)

    for (int i = 0; i < n; i++) {
        // Caso especial: Divisão por zero
        if (v2[i] == 0) {
            // Se v2 é 0, v1 TAMBÉM deve ser 0 para ser paralelo.
            // Se v1 for diferente de 0, impossível serem paralelos.
            if (v1[i] != 0) {
                return 0; 
            }
            // Se ambos sao 0, continuamos para o proximo numero
        } 
        else {
            // Se ainda não definimos a razão (k), definimos agora
            if (k_definido == 0) {
                k = v1[i] / v2[i];
                k_definido = 1; // Marcamos que já temos uma referencia
            } 
            else {
                // Se já temos uma razão, a atual deve ser IGUAL a ela
                if (v1[i] / v2[i] != k) {
                    return 0; // Quebrou a proporção, não é paralelo
                }
            }
        }
    }
    
    return 1; // Se o loop terminou sem erros, são paralelos
}

int main() {
    int n;

    // 1. Ler o tamanho
    printf("Qual o tamanho dos vetores? ");
    scanf("%d", &n);

    // VLA (Variable Length Array) - Cria vetores do tamanho que o usuario pediu
    float vetorA[n], vetorB[n];

    // 2. Ler vetor A
    printf("\n--- Digite o Vetor A ---\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetorA[i]);
    }

    // 3. Ler vetor B
    printf("\n--- Digite o Vetor B ---\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetorB[i]);
    }

    // 4. Verificar e mostrar resultado
    if (verificar_paralelismo(vetorA, vetorB, n)) {
        printf("\nRESULTADO: Os vetores SAO paralelos!\n");
    } else {
        printf("\nRESULTADO: Os vetores NAO sao paralelos.\n");
    }

    return 0;
}




#include <stdio.h>
#include <math.h> // Necessário para sqrt() e pow()


float calcular_modulo(float vetor[], int tamanho) {
    float soma_quadrados = 0.0;
    int i;

    for (i = 0; i < tamanho; i++) {
        // Elevamos o elemento ao quadrado e somamos
        // Pode ser vetor[i] * vetor[i] ou pow(vetor[i], 2)
        soma_quadrados += vetor[i] * vetor[i];
    }

    // Retorna a raiz quadrada da soma
    return sqrt(soma_quadrados);
}

int main() {
    // Exemplo: Vetor (3, 4) -> Módulo deve ser 5 (Triângulo 3-4-5)
    float vetor_teste[2]; 
    
    printf("--- Calculo de Modulo ---\n");
    printf("Digite a coordenada X: ");
    scanf("%f", &vetor_teste[0]);
    
    printf("Digite a coordenada Y: ");
    scanf("%f", &vetor_teste[1]);

    // Passamos o vetor e o tamanho dele (2)
    float resultado = calcular_modulo(vetor_teste, 2);

    printf("\nO modulo do vetor e: %.2f\n", resultado);

    return 0;
}






#include <stdio.h>
#include <math.h> // Necessaria para usar sqrt() (raiz quadrada)

// 1. Funcao que calcula apenas o Delta
float Calcular_Delta(float a, float b, float c) {
    return (b * b) - (4 * a * c);
}

// 2. Funcao que calcula e mostra as raizes (Bhaskara)
void Calcular_Raizes(float a, float b, float delta) {
    float x1, x2;

    // Caso 1: Delta negativo (Nao existem raizes reais)
    if (delta < 0) {
        printf("\nDelta negativo (%.2f). A equacao nao possui raizes reais.\n", delta);
    } 
    // Caso 2: Delta igual a zero (Uma unica raiz real)
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("\nDelta e zero. A equacao possui uma raiz unica:\n");
        printf("X = %.2f\n", x1);
    } 
    // Caso 3: Delta positivo (Duas raizes reais distintas)
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("\nDelta positivo (%.2f). A equacao possui duas raizes:\n", delta);
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }
}

int main() {
    float a, b, c, delta;

    printf("--- Calculadora de Bhaskara ---\n");
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    // Validacao simples: Se A for 0, nao e equacao de 2 grau
    if (a == 0) {
        printf("Erro: O valor de 'A' nao pode ser zero em equacoes de 2 grau.\n");
        return 1;
    }
    
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    // Passo 1: Calcular Delta
    delta = Calcular_Delta(a, b, c);

    // Passo 2: Calcular as Raizes usando o Delta encontrado
    Calcular_Raizes(a, b, delta);

    return 0;
}



#include <stdio.h>

// --- Protótipos das Funções ---
void lerMatriz(int mat[2][2], char nome);
void multiplicarMatrizes(int A[2][2], int B[2][2], int R[2][2]);
void imprimirMatriz(int mat[2][2]);

int main() {
    int matA[2][2], matB[2][2], resultado[2][2];

    // 1. Leitura usando a função
    lerMatriz(matA, 'A');
    lerMatriz(matB, 'B');

    // 2. Cálculo
    multiplicarMatrizes(matA, matB, resultado);

    // 3. Exibição
    printf("\n--- Matriz Resultado (A * B) ---\n");
    imprimirMatriz(resultado);

    return 0;
}

// --- Implementação das Funções ---

// Função para ler os dados da matriz
// O parâmetro 'nome' serve apenas para o printf ficar bonito (A ou B)
void lerMatriz(int mat[2][2], char nome) {
    int i, j;
    printf("--- Digite a Matriz %c (2x2) ---\n", nome);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j); // Adicionei um prompt para guiar o usuario
            scanf("%d", &mat[i][j]);
        }
    }
}

// Função que realiza a multiplicação AxB
void multiplicarMatrizes(int A[2][2], int B[2][2], int R[2][2]) {
    int i, j, k;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            R[i][j] = 0; // Importante: Zera o acumulador
            
            // O laço 'k' faz o produto escalar (linha de A * coluna de B)
            for(k = 0; k < 2; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Função para imprimir qualquer matriz 2x2
void imprimirMatriz(int mat[2][2]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        printf("| ");
        for(j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("|\n");
    }
}

#include <stdio.h>


float calcular_determinante_2x2(float m[2][2]) {
    float diag_principal = m[0][0] * m[1][1];
    float diag_secundaria = m[0][1] * m[1][0];
    
    return diag_principal - diag_secundaria;
}

int main() {
    float matriz[2][2];
    int i, j;

    // 1. Leitura da Matriz
    printf("--- Digite a Matriz 2x2 ---\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // 2. Chamada da Função
    float resultado = calcular_determinante_2x2(matriz);

    // 3. Exibição
    printf("\n-----------------------------\n");
    printf("O Determinante 2x2 e: %.2f\n", resultado);
    printf("-----------------------------\n");

    return 0;
}
*/




