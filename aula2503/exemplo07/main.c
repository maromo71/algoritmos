#include <stdio.h>
/*
*Somatório Simples: Construa um programa que calcule e
* apresente a soma dos cem primeiros números
* naturais (1 + 2 + 3 + ... + 99 + 100)
**/
int main(void) {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("Somatorio simples de 1..100: %d \n", soma);
    return 0;
}