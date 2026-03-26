#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite tres valores: \n");
    scanf("%d %d %d", &a, &b, &c);
    //
    a = a + b * c;
    //abreviado
    //a += b * c;
    printf("Valor final de a: %d\n", a);
    return 0;
}