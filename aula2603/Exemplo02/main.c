#include <stdio.h>

int main(void) {
    int x;
    printf("Entre com valor de x: \n");
    scanf("%d", &x);
    //apresentar o para o usuario, se o numero é par
    if (x % 2 == 0)
        printf("Elemento par\n");
    else
        printf("Elemento impar\n");
    return 0;
}