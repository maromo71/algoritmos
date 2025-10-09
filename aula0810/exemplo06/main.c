#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d\n", i);
        if (i == 5) break;
    }
    // saida 1 3 5
    return 0;
}