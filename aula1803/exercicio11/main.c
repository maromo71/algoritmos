#include <stdio.h>
/*******************************************************************
 * 11.Leia um número inteiro e exiba o seu quadrado e o seu cubo
 * ****************************************************************/
int main(void) {
    int num, quadrado, cubo;
    printf("Digite um numero: ");
    scanf("%d", &num);
    quadrado = num * num;
    cubo = num * num * num;
    printf("O quadrado de %d eh ==> %d \n", num, quadrado);
    printf("O cubo de %d eh ==> %d \n", num, cubo);
    return 0;
}