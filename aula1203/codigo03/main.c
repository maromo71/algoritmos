#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &c);
    //processamento
    a+= b * c;   //equivale-se a = a + b * c
    printf("O valor de a e: %d\n", a);
    return 0;
}