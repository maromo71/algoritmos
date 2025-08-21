#include <stdio.h>

int main(void)
{
    float pi=3.145, r, area;
    printf("Digite o valor do raio: \n");
    scanf("%f", &r);
    area = pi * (r*r);
    printf("O valor do area eh: %.2f\n", area);
    return 0;
}