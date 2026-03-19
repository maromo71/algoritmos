#include <stdio.h>
/******************************************************************************
/* 10.Receba um valor em dólar e a cotação atual. Exiba o valor correspondente
em reais. *********************************************************************/
int main(void) {
    double dolar, valor_cotacao, valor_reais;
    printf("Digite um valor em dolares: \n");
    scanf("%lf", &dolar);
    printf("Digite a cotacao da moeda hoje em reais: \n");
    scanf("%lf", &valor_cotacao);
    valor_reais = valor_cotacao * dolar;
    printf("Valor calculador em R$ %.2lf \n", valor_reais);
    return 0;
}