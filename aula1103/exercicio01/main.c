#include <stdio.h>

int main(void) {
    int a = 10 + 5 * 3;
    printf("a: %d\n", a); //25
    int b = (8 > 5) && (3 != 3);
    printf("b: %d\n", b); // 0
    int c = !(4 < 2);
    printf("c: %d\n", c); //1
    return 0;
}