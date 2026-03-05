#include <stdio.h>

int main(void) {
    int x = 10;
    char letra = 'a';
    int y = 10;
    printf("Ender de x: %p \n", &x);
    printf("Ender de l: %p \n", &letra);
    printf("Ender de y: %p \n", &y);
    return 0;
}