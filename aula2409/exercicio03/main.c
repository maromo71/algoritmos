#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    int maior;
    printf("Digite 03 valores inteiros \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    printf("Maior valor: %d \n", maior);
    return 0;
}