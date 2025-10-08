#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
    int vetor[N];
    int i, pos;

    srand(time(NULL));
    printf("Vetor original: ");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Digite a posição a ser removida (1 a %d): ", N);
    scanf("%d", &pos);

    pos = pos - 1;

    if (pos < 0 || pos >= N) {
        printf("Posição inválida!\n");
        return 1;
    }

    for (i = pos; i < N - 1; i++) {
        vetor[i] = vetor[i + 1];
    }

    printf("Vetor após remoção: ");
    for (i = 0; i < N - 1; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}