#include <stdio.h>

int calculaDigitoVerificador(int num) {
    int x1, x2, x3, soma;
    x1 = num / 100;         
    x2 = (num / 10) % 10;   
    x3 = num % 10;          

    soma = x1 * 1 + x2 * 2 + x3 * 3;
    return ((soma % 11) % 10);
}

int main() {
    int numero;
    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    printf("Dígito verificador: %d\n", calculaDigitoVerificador(numero));
    return 0;
}