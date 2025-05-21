/* Exercício 10: Soma de Primos */
#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    do {
        scanf("%d", &n);
    }while (n<1 || n>1000);
    for (int i = 2; i <= n; i++) {
        int eh_primo = 1;
        // Verifica se i é primo
        if (i <= 1) {
            eh_primo = 0;
        } else {
            for (int j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    eh_primo = 0;
                    break;
                }
            }
        }
        // Se for primo, faz a soma
        if (eh_primo) {
            soma += i;
        }
    }
    printf("Soma final: %d\n", soma);
    return 0;
}