#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois valores\n");
    scanf("%d %d", &a, &b);
    if (a % b == 0) {
        printf("Eh divisivel exato\n");
    }else {
        printf("Nao eh divisivel exato \n");
    }
    return 0;
}