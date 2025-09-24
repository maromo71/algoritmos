#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3, media, notaExame, mediaFinal;
    printf("Digite as 03 notas do aluno \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("Media inicial: %.2lf \n", media);
    if (media >= 7) {
        printf("Aluno aprovado\n");
    }else if (media >= 3) {
        printf("Aluno em Exame. \n");
        printf("Digite a nota do exame: \n");
        scanf("%lf", &notaExame);
        mediaFinal = (media + notaExame)/2;
        if (mediaFinal >=5) {
            printf("Aluno aprovado pelo exame \n");
        }else {
            printf("Aluno reprovado pelo exame \n");
        }
    }else {
        printf("Aluno reprovado \n");
    }
    return 0;
}