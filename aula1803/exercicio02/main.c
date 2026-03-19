#include <stdio.h>
/*******************************************************************
 *2. Leia dois números reais e imprima a média aritmética entre eles
 *******************************************************************/
int main(void) {
    double n1, n2, media;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &n1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &n2);
    media = (n1 + n2) / 2;
    printf("Media: %.1lf\n", media);
    return 0;
}