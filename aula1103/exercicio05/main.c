#include <stdio.h>

int main(void) {
    double media, nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    media = (nota1 * 3 + nota2 * 7) / 10;
    printf("Media ponderada: %.2lf\n", media);
    return 0;
}