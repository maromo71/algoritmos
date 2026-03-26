#include <stdio.h>

int main(void) {
    int x = 10;
    x += 7;
    printf("Valor de x: %d\n", x); //17

    x++;
    printf("Valor de x: %d\n", x); //18

    int y = 10 + ++x; //pre incremento

    //int y = 10 + x++;  //pos incremento
    printf("Valor de y: %d\n", y);
    return 0;
}