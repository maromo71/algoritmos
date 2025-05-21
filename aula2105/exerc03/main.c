/* Exercício 3: Múltiplos de 3 */
#include <stdio.h>

int main() {
    int N;
    do {
        scanf("%d", &N);
    }while (N<1 || N>1000);
    for (int i = 3; i <= N; i+=3) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
