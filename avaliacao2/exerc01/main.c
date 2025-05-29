#include <stdio.h>
// Programa que leia um número N e calcule a soma de todos
// os inteiros de 1 até N
int main(void)
{
    int N;
    do {
        printf("Digite um valor inteiro: [1 .. 1000]");
        scanf("%d", &N);
    }while (N<1 || N>1000);
    int soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    printf("Soma = %d", soma);
    return 0;
}