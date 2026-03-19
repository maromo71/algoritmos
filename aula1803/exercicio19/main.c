#include <stdio.h>
/* 19.Receba a distância percorrida por um carro e o total de combustível
consumido, e calcule o consumo médio (km/l). */
int main(void) {
    double distancia, total_comb, consumo_medio;
    printf("Digite a distancia percorrida pelo carro: ");
    scanf("%lf", &distancia);
    printf("Digite o total de combustivel consumido em litros: ");
    scanf("%lf", &total_comb);
    consumo_medio = distancia / total_comb;
    printf("Consumo medio: %.2lf km/l \n", consumo_medio);
    return 0;
}