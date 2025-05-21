/* Exercício 3: Múltiplos de 3 */
#include <stdio.h>

int main() {
    int N;
    int primeiro = 1;
    do {
        scanf("%d", &N);
    }while (N<1 || N>100);
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
