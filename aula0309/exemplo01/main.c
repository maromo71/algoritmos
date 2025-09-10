#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um valor:  \n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero %d eh par\n", num);
    }else {
        printf("O numero %d eh impar\n", num);
    }
    return 0;
}