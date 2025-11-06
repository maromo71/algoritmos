#include <stdio.h>

int main(void) {
    int n, soma = 0,  somaPar = 0 , somaMaiorQ100 = 0;
    printf("Somatorias\n");
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do.) valor: ", i);
        scanf("%d", &n);
        soma += n;
        if (n > 100) somaMaiorQ100 +=n;
        if (n % 2 == 1) continue;
        somaPar += n;
    }
    printf("Soma total: %d \n", soma);
    printf("Soma maior 100: %d \n", somaMaiorQ100);
    printf("Soma dos pares: %d \n", somaPar);
    return 0;
}