#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arredonda(float x) {
    if (x >= 0)
        return (int)(x + 0.5f);
    else
        return (int)(x - 0.5f);
}

int main() {
    char entrada[32];
    float valor;

    printf("Digite um valor decimal: ");
    scanf("%s", entrada);

    for (int i = 0; entrada[i]; i++) {
        if (entrada[i] == ',') entrada[i] = '.';
    }

    valor = strtof(entrada, NULL);

    printf("Valor arredondado: %d\n", arredonda(valor));
    return 0;
}