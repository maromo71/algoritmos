#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite primeiro valor: \n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &c);
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("O maior valor e: %d\n", maior);
    return 0;
}