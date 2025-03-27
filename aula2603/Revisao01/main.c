#include <stdio.h>
/*Desenvolva um programa em C que receba as notas de duas avaliações
de um aluno, calcule a média final da disciplina de Programação
e exiba essa média. Ao final, o programa deve informar se
o aluno está aprovado (média final maior ou igual a 7) ou reprovado.*/

int main(void) {
    float nota1, nota2, media;
    printf("Digite a nota 1 e a nota 2 do aluno: \n");
    scanf("%f%f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media final do aluno eh: %.2f\n", media);
    media >= 7 ? printf("O aluno foi aprovado!\n") : printf("O aluno foi reprovado!\n");
    return 0;
}