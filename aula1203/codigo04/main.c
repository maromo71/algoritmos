#include <stdio.h>

int main(void) {
    float nota1, nota2, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    media = (nota1 * 3 + nota2 * 7) / 10;
    printf("Media: %.2f", media);
    return 0;
}