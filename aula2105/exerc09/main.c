/* Exercício 9: MDC por Subtração */
#include <stdio.h>

int main() {
    int a, b;
    do {
        scanf("%d %d", &a, &b);
    }while (a < 1 || b < 1 || a > 1000 || b > 1000);
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    printf("%d\n", a);
    return 0;
}
