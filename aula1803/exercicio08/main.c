#include <stdio.h>
/*********************************************************
* 8. Leia dois valores inteiros (A e B) e efetue a troca
* dos valores, de forma que a variável A passe a possuir
* o valor de B e vice-versa. Exiba os valores trocados
**********************************************************/
int main(void) {
    int a, b, troca;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    troca = a; //preciso de uma variavel para pivô
    a = b;
    b = troca;
    printf("Valores trocados: %d e %d \n", a, b);
    return 0;
}