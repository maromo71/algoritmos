#include <stdio.h>

int main(void) {
    int idade, autorizacao;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua autorizacao: \n");
    printf("1 - Autorizado e 2 - Nao autorizado \n");
    scanf("%d", &autorizacao);
    if (idade >= 18) {
        printf("Pode se matricular\n");
    }else if (idade >=16 && autorizacao) {
        printf("Pode se matricular com autorizacao\n");
    }else {
        printf("Nao pode se matricular");
    }
    return 0;
}