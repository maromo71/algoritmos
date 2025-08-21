#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, soma, media;
    printf("Digite a primeira nota \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota \n");
    scanf("%f", &nota3);
    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    printf("A media do aluno eh %.2f \n", media);
    return 0;
}