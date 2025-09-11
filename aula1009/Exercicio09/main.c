#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 0) {
        printf("Idade invalida\n");
        return 1;
    }
    if (idade <=12) {
        printf("Crianca\n");
        return 0;
    }
    if (idade <=17) {
        printf("Adolescente\n");
        return 0;
    }
    if (idade <=59) {
        printf("Adulto\n");
        return 0;
    }
    printf("Idoso\n");
    return 0;
}