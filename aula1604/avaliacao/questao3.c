#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade da pessoa: \n");
    scanf("%d", &idade);
    if (idade < 16) {
        printf("Nao pode iniciar o processo\n");
    }else if (idade <=17) {
        printf("Pode iniciar o processo com autorizacao dos pais\n");
    }else {
        printf("Pode iniciar normalmente\n");
    }
    return 0;
}