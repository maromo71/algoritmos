#include <stdio.h>

int main(void) {
    int num, par=0, impar=0;
    for (int i=0; i<10; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if (num % 2 == 0) {
            par++;
        }
    }
    impar = 10 - par;
    printf("Quantidade de numeros pares: %d \n", par);
    printf("Quantidade de numeros impares: %d \n", impar);
    return 0;
}