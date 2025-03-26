#include <stdio.h>

int main(void) {
    double valor;
    printf("Digite o valor da compra: \n");
    scanf("%lf", &valor);
    //valor = se valor maior ou igual a 1000, desconto de 10%,
    //caso contrario desconto de 5%
    valor *= valor >=1000 ? 0.90 : 0.95;

    printf("Valor a pagar: %.2lf\n", valor);
    return 0;
}