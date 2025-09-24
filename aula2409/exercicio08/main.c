#include <stdio.h>

int main(void) {
    double nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    media = (nota1 + nota2) / 2;
    if (media > 10) {
        printf("Media invalida. Redigite \n");
        return 1;
    }
    if (media == 10) {
        printf("Aprovado com distincao \n");
    }else if (media >= 7) {
        printf("Aprovado \n");
    }else if (media >= 3) {
        printf("Exame \n");
    }else {
        printf("Reprovado \n");
    }
    return 0;
}