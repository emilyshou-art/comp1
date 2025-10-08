#include <stdio.h>

#define N 4

void intercalaVetores(int v1[], int v2[], int v3[], int n) {
    for (int i = 0; i < n; i++) {
        v3[2 * i] = v1[i];
        v3[2 * i + 1] = v2[i];
    }
}

int main() {
    int v1[N], v2[N], v3[2 * N];
    int i;

    printf("Digite os %d elementos do primeiro vetor:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os %d elementos do segundo vetor:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &v2[i]);
    }

    intercalaVetores(v1, v2, v3, N);

    printf("Vetor intercalado: ");
    for (i = 0; i < 2 * N; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}