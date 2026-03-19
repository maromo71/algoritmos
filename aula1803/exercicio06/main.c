#include <stdio.h>
/**********************************************************************
* 6. Leia um valor em metros e exiba o correspondente em centímetros e
* milímetros
* *********************************************************************/
int main(void) {
    double metros, centimetros;
    printf("Digite o valor em metros: ");
    scanf("%lf", &metros);
    centimetros = metros * 100;
    printf("%.2lf em metros corresponde a %.2lf em centimetros.\n", metros, centimetros);
    return 0;
}