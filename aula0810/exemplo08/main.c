#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        int aleatorio = (rand() % 1000) + 1;
        printf("%d\n", aleatorio);
    }
    return 0;
}