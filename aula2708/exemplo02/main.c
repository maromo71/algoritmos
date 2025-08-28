#include <stdio.h>

int main(void) {
    double x, y;
    printf("Digite um numero: \n");
    scanf("%lf", &x);
    printf("Digite outro numero: \n");
    scanf("%lf", &y);
    double soma = x + y;
    printf("Soma = %.2lf\n", soma);
    return 0;
}