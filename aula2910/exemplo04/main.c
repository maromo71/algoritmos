#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor de 1 a 9: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n"); //pular linha
    }
    return 0;
}