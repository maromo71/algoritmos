#include <stdio.h>
// Escreva um programa que leia um número N e determine
//se é uma potência de 2
int main(void)
{
    int N;
    do {
        printf("Digite um numero [1..1000] \n");
        scanf("%d", &N);
    }while (N < 1 || N > 1000000);
    // Se N for 1, é uma potência de 2 (2^0)
    if (N == 1) {
        printf("SIM\n");
        return 0;
    }
    int cont = 0;
    while (N % 2 == 0 && N > 1) {
        N /= 2;
    }
    N == 1 ? printf("SIM\n") : printf("NAO\n");


    return 0;
}