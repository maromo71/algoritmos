#include <stdio.h>

int main(void)
{
    int a, b, soma;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);
    soma = a + b;
    printf("O valor da soma e: %d \n", soma);
    return 0;
}