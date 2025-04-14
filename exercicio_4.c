#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função para exibir o array
void exibe_array(int valores[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
}

int main() {
    int N;

    // Solicita ao usuário um valor para N
    printf("Digite a quantidade de numeros (N > 0): ");
    scanf("%d", &N);

    // Verifica se N é válido
    if (N <= 0) {
        printf("Valor invalido. N deve ser maior que 0.\n");
        return 1;
    }

    int numeros[N];

    // Lê os N números do usuário
    printf("Digite %d numeros inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordena o array em ordem crescente
    qsort(numeros, N, sizeof(int), comparar);

    // Exibe os números ordenados
    printf("Numeros em ordem crescente:\n");
    exibe_array(numeros, N);

    // Calcula a mediana
    double mediana;
    if (N % 2 == 0) {
        // Se N é par, média dos dois valores centrais
        mediana = (numeros[N/2 - 1] + numeros[N/2]) / 2.0;
    } else {
        // Se N é ímpar, o valor central é a mediana
        mediana = numeros[N/2];
    }

    // Exibe a mediana
    printf("A mediana dos valores informados é: %.2f\n", mediana);

    return 0;
}

