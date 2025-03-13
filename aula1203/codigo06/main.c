#include <stdio.h>
//else e opcional
int main(void) {
    int valor;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("Valor e par\n");
    }
    printf("Acabou \n");
    return 0;
}