#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
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
    for (int i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
