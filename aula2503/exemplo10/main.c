#include <stdio.h>
/* Dados 20 valores pelo usuario, mostre ao final,
 * quantos sao:
 * a) pares
 * b) negativos
 * c) maiores que 30
 * d) divisiveis exatos por 7
 */
int main(void) {
    int tot_pares = 0, tot_negativos =0, maior_30 = 0, div_7 =0, num;
    for (int i =1; i<=20; i++) {
        printf("Digite o %d. valor: ", i);
        scanf("%d", &num);
        if (num % 2 ==0) tot_pares++;
        if (num < 0) tot_negativos++;
        if (num> 30 ) maior_30++;
        if (num % 7 ==0) div_7++;
    }
    printf("Total de pares: %d \n", tot_pares);
    printf("Total de negativos: %d \n", tot_negativos);
    printf("Total de Numeros Maiores que 30: %d \n", maior_30);
    printf("Total de Numeros divisiveis por 7: %d \n", div_7);
    return 0;
}