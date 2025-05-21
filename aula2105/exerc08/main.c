/* Exercício 8: Menor Triangular */
#include <stdio.h>
int main() {
    int x;
    do {
        scanf("%d", &x);
    }while (x < 1 || x > 1000);
    int triangular = 0;
    for (int i = 1; triangular < x; i++) {
        triangular += i;
    }
    printf("%d\n", triangular);
    return 0;
}
