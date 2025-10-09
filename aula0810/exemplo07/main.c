#include <stdio.h>

int main(void) {
    int maior, num;
    for (int i = 1; i<= 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (i == 1) maior = num;
        if (num > maior) maior = num;
    }
    printf("Maior numero: %d\n", maior);
    return 0;
}