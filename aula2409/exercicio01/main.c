#include <stdio.h>

int main(void) {
    double n1, n2, media;
    printf("Digite a nota 1 e a nota 2 do aluno: \n");
    scanf("%lf %lf", &n1, &n2);
    if (n1 < 0|| n2 < 0 ) {
        printf("Notas devem ser maiores que 0");
        return 0;
    }
    if (n1 > 10|| n2 > 10) {
        printf("Notas devem ser menores que 10");
        return 0;
    }
    media = (n1 + n2) / 2;
    printf("Media: %.1lf\n", media);
    if (media >=7.0) {
        printf("Aluno aprovado\n");
    }else {
        printf("Aluno reprovado\n");
    }
    return 0;
}