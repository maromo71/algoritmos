#include <stdio.h>

int main(void) {
    double x, y;
    char operacao;
    printf("Digite dois valores e o sinal de operacao: \n");
    scanf("%lf %lf %c", &x, &y, &operacao);
    switch (operacao) {
        case '+':
            printf("O resultado eh %.1lf \n", x + y);
            break;
        case '-':
            printf("O resultado eh %.1lf \n", x - y);
            break;
        case '*':
            printf("O resultado eh %.1lf \n", x * y);
            break;
        case '/':
            y ? printf("O resutlado eh %.1lf\n", x / y) : printf("O resultado eh impossivel\n");
            break;
        default:
            printf("Operacao invalida\n");
    }
    return 0;
}
