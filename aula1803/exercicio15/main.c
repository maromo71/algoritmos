#include <stdio.h>
/************************************************************************
* 15.Leia dois números inteiros e exiba o resultado das quatro operações
* básicas entre eles
* **********************************************************************/
int main(void) {
    int n1, n2, soma, subt, mult, divisao;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;
    divisao = n1 / n2;
    printf("Soma: %d \n", soma);
    printf("Subtracao: %d \n", subt);
    printf("Multiplicacao: %d \n", mult);
    printf("Divisao: %d \n", divisao);
    return 0;
}