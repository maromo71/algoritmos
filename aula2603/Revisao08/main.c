#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Numero eh par\n");
    }else {
        printf("Numero eh impar\n");
    }
    //ou
    num % 2 == 0 ? printf("Numero eh par") : printf("Numero eh impar");
    return 0;
}