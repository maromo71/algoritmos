#include <stdio.h>

int main(void) {
    //verifica se um num eh par ou impar
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    int resto = num % 2;
    if (resto == 0) {
        //entao
        printf("Numero %d eh par\n", num);
    } else {
        //senao
        printf("Numero %d eh impar\n", num);
    }
    return 0;
}
