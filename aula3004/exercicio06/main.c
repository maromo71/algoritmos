#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um valor positivo: \n");
    scanf("%d", &num);
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        //verifico se é divisivel por i
        if (num % i == 0) {
            soma = soma + i;
        }
    }
    printf("soma dos divisores exatos: %d \n", soma);
    return 0;
}