#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult)
{
    int tn, pot;
    *ult = *n % 10;
    pot = 1;
    tn = *n;
    while (tn >= 10) {
        tn = tn / 10;
        pot *= 10;
    }
    *pri = *n / pot;
    *n = *n % pot;
    *n = *n / 10;
}

int main() {
    int n, copia, pri, ult, palindromo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    copia = n;

    while (copia >= 10) { 
        removeExtremos(&copia, &pri, &ult);
        if (pri != ult) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("O número é palíndromo!\n");
    else
        printf("O número NÃO é palíndromo!\n");

    return 0;
}