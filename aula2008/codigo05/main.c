#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    //printf("O numero digitado foi: %d\n", num);
    //printf("E este valor esta na posicao: %lld \n", &num);
    num % 2 == 0 ? printf("par\n") : printf("impar\n");
    return 0;
}