#include <stdio.h>

int main(void) {
    int n;
    int atual = 1, anterior=0, proximo=0;
    printf("Sequencia N de Fibonacci: Onde N >= 2\n");
    printf("Digite o termo desejado da sequencia: \n");
    scanf("%d", &n);
    printf("Termo 0 = %d \n", 0);
    printf("Termo 1 = %d \n", 1);
    for (int i=2; i<=n; i++) {
        proximo = atual + anterior;
        printf("Termo %d = %d \n", i, proximo);
        anterior = atual;
        atual = proximo;
    }
    return 0;
}