#include <stdio.h>

int main() {
    int N;
    int fatorial = 1;
    do {
        scanf("%d", &N);
    }while (N < 0 || N > 12);
    for (int i = 2; i <= N; i++) {
        fatorial *= i;
    }
    printf("%d\n", fatorial);
    return 0;
}