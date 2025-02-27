#include <stdio.h>

int main(void) {
    int valor1, valor2;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
    int soma = valor1 + valor2;
    printf("A soma de %d + %d = %d \n", valor1, valor2, soma);
    return 0;
}