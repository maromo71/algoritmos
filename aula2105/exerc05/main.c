/* Exercício 5: Soma de Dígitos */
#include <stdio.h>
int main() {
    int x, soma = 0;
    do {
        scanf("%d", &x);
    }while (x<0 || x>1000000);
    while (x > 0) {
        soma += x % 10;
        x /= 10;
    }
    printf("%d\n", soma);
    return 0;
}
