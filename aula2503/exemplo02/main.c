#include <stdio.h>

int main(void) {
    printf("Que mostre de 1 ate 101, apenas os impares\n");
    for (int i = 1; i <= 101; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Opcionalmente passando de 2 em 2, i=1\n");
    for (int i = 1; i <= 101; i+=2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}