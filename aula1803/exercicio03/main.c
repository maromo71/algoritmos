#include <stdio.h>
/**************************************************************************
 *3. Receba o valor de um produto e exiba o novo valor com 10% de desconto.
 **************************************************************************/
int main(void) {
    double valor, novoValor;
    printf("Digite o valor do produto em R$: ");
    scanf("%lf", &valor);
    novoValor = valor * 0.90;
    printf("Valor com desconto R$ %.2lf \n", novoValor);
    return 0;
}