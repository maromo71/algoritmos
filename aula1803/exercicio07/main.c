#include <stdio.h>
/***********************************************************************
 *7. Receba o raio de uma circunferência e calcule sua área*************
 **********************************************************************/
int main(void) {
    double raio, area;
    double pi = 3.141592653589793;
    printf("Calculo da area da circunferencia \n");
    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);
    area = pi * (raio * raio);
    printf("Area da circunferencia: %.2lf\n", area);
    return 0;
}