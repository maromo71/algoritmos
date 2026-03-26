#include <stdio.h>

int main(void) {
    int a = 1, b = 2, c = 3;

    int resultado = !(a > b && b > c);

    printf("Resultado: %d\n", resultado);
    return 0;
}