#include <stdio.h>
/*
3. Escreva um programa em C que receba três números inteiros distintos e identifique qual deles é o
maior, exibindo-o ao usuário.
 */
int main(void) {
    int a, b, c;
    printf("Digite tres valores inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);
    int maior = a; //maior recebe o primeiro valor
    if (maior < b) maior = b; //se o maior for menor que b, o maior recebe b
    if (maior < c) maior = c; //se o maior for menor que c, o maior recebe c
    printf("O maior valor eh: %d", maior);
    return 0;
}