#include <stdio.h>

int main(void) {
    double cotacaoDolar, valorDolar, valorReal;
    printf("Digite o valor do dolar (cambio) no dia de hoje: \n");
    scanf("%lf", &cotacaoDolar);
    printf("Digite o valor em dolares no seu bolso: \n");
    scanf("%lf", &valorDolar);
    valorReal = valorDolar * cotacaoDolar;
    printf("Valor em Reais: %.2lf", valorReal);
    return 0;
}