#include <stdio.h>

int main(void) {
    int idade;
    int soma = 0;
    double media;
    for (int i = 1; i<=5; i++) {
        printf("Digite a idade da pessoa: %d \n", i);
        scanf("%d", &idade);
        soma += idade;
    }
    media = soma / 5;
    printf("A media das idades = %.2lf \n", media);
    return 0;
}