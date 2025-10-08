#include <stdio.h>

int main(void) {
    int idade, autorizacao;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite \n");
    printf("1. Para Autorizacao ou \n");
    printf("0. Para nao Autorizado \n");
    scanf("%d", &autorizacao);
    if (idade >= 18) {
        printf("Pode-se matricular \n");
    }else if (idade >= 16 && autorizacao) {
        printf("Pode-se matricular com autorizacao \n");
    }else {
        printf("Nao pode-se matricular\n");
    }
    return 0;
}