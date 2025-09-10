#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade < 5) {
        printf("Sem categoria");
    }else if (idade <=10) {
        printf("Categoria infantil");
    }else if (idade <=16) {
        printf("Catogira juvenil");
    }else if (idade < 18) {
        printf("Catogira juvenil B");
    }else {
        printf("Adulto");
    }
    return 0;
}