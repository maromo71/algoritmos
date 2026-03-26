#include <stdio.h>

int main(void) {
    double estoqueMedio, qtdMaxima, qtdMinima;
    //entrada
    printf("Digite a quantidade maxima: \n");
    scanf("%lf", &qtdMaxima);
    printf("Digite a quantidade minima: \n");
    scanf("%lf", &qtdMinima);
    //processamento
    estoqueMedio = (qtdMaxima + qtdMinima) / 2;
    //saida
    printf("Estoque medio: %.2lf \n", estoqueMedio);
    return 0;
}