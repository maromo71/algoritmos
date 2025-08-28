#include <stdio.h>
/* Dada uma entrada em metros, calcule o
 * equivalente em cm e milimetros
 */
int main(void) {
    double metros, centimetros, milimetros;
    printf("Digite a quantidade de metros: \n");
    scanf("%lf", &metros);
    centimetros = metros * 100;
    milimetros = metros * 1000;
    printf("Metros: %.2lf\n", metros);
    printf("Centimetros: %.2lf\n", centimetros);
    printf("Milimetros: %.2lf\n", milimetros);
    return 0;
}