#include <stdio.h>

int main(void) {
    double nota, media, soma = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a %da) nota: \n", i+1);
        scanf("%lf", &nota);
        soma += nota;
    }
    media = soma / 10;
    printf("Media da sala: %.2lf \n", media);
    return 0;
}