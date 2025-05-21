/* Exercício 6: Primo ou Não */
#include <stdio.h>

int main() {
    int n;
    int eh_primo = 1;
    do {
        scanf("%d", &n);
    }while (n < 1 || n > 1000);
    if (n <= 1) {
        eh_primo = 0;
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }
    eh_primo ? printf("SIM\n") : printf("NÃO\n");
    return 0;
}