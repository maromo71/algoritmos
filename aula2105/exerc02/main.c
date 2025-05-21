/* Exercício 2: Contagem de Pares */
#include <stdio.h>
int main() {
    int N, numero, pares = 0;
    do {
        scanf("%d", &N);
    }while (N < 1 || N > 100);
    for (int i = 0; i < N; i++) {
        do {
            scanf("%d", &numero);
        }while (numero < -1000 || numero > 1000);
        if (numero % 2 == 0) {
            pares++;
        }
    }
    printf("%d\n", pares);
    return 0;
}