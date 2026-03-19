/*************************************************************************
 * 16.Receba três notas de um aluno com seus respectivos pesos e calcule a
    média ponderada
 *************************************************************************/
#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3, peso1, peso2, peso3;
    double media; //media ponderada
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite o peso da nota 1: ");
    scanf("%lf", &peso1);
    printf("Digite o peso da nota 2: ");
    scanf("%lf", &peso2);
    printf("Digite o peso da nota 3: ");
    scanf("%lf", &peso3);
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("Media ponderada do aluno: %.2lf\n", media);
    return 0;
}