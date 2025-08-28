#include <stdio.h>

int main(void) {
    int casado = 0;
    int a = 150;
    double salario = 23450;
    char letra = 'X';
    char nome[51] = "Maromo";
    printf("%d \n", a);
    printf("%.2lf \n", salario);
    printf("%c \n", letra);
    printf("%s \n", nome);
    if (casado) {
        printf("Casado\n");
    }else {
        printf("Sortudo \n");
    }
    return 0;
}