#include <stdio.h>
/***********************************************************************/
/* 1. Leia um número inteiro e exiba o seu sucessor e o seu antecessor. *
/***********************************************************************/
int main(void) {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d, %d", num-1, num+1);
}
