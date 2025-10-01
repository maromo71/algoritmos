#include <stdio.h>

int main(void) {
    int x, y;
    printf("Digite dois numros inteiros: ");
    scanf("%d", &x, &y);
    //dados dois numeros, se o primeiro foi maior que o
    //segundo imprime "1" senao imprime "0"
    printf("Resultado: %d", (x > y) ? 1 : 0);
    return 0;
}