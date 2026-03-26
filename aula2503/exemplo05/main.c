#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%2d X %2d = %3d \n", n, i, n * i);
    }
    return 0;
}