#include <stdio.h>
/*
 * Receber tres notas (reais) referentes a notas
 * de um aluno. Calcular a média aritmética
 */
int main(void) {
    double nota1, nota2, nota3, media;
    printf("Digite uma nota: \n");
    scanf("%lf", &nota1);
    printf("Digite uma nota: \n");
    scanf("%lf", &nota2);
    printf("Digite uma nota: \n");
    scanf("%lf", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.2lf\n", media);
    return 0;
}