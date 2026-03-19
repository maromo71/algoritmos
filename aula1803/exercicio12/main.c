#include <stdio.h>
/************************************************************
* 12.Peça ao usuário dois números inteiros e exiba o resto  *
* da divisão do primeiro pelo segundo                       *
* ***********************************************************/
int main(void) {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("O resto da divisao de %d por %d = %d \n", n1, n2, n1 % n2);
    return 0;
}