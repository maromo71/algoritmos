#include <stdio.h>
/**********************************************
/*8.Leia o preço de custo de um produto e exiba
 *o valor de venda após um acréscimo de 30%
 * ********************************************/
int main(void) {
    double preco_custo, valor_venda;
    printf("Digite o valor do preco de custo: ");
    scanf("%lf", &preco_custo);
    valor_venda = preco_custo * 1.3;
    printf("Valor com acrescimo R$ %.2lf \n", valor_venda);
    return 0;
}