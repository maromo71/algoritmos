#include <stdio.h>

int main(void) {
    int n, x, cont = 0;
    do {
        printf("Digite a quantidade de valores a serem testados:\n");
        scanf("%d", &n);
    }while (n < 1 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("Digite o valor: \n");
        scanf("%d", &x);
        if (x % 2 == 0) cont++;
    }
    printf("Quantidade de pares: %d\n", cont);
    return 0;
}
