/* Exercício 7: Sequência de Fibonacci */
#include <stdio.h>
int main()
{
    int n;
    long pri_termo = 1, prox_termo = 1, fibo_atual;
    do {
        scanf("%d", &n);
    }while (n<3 || n>20);
    for (int i = 3; i <= n; i++) {
        fibo_atual = pri_termo + prox_termo;
        pri_termo = prox_termo;
        prox_termo = fibo_atual;
    }
    printf("%ld\n", fibo_atual);

    return 0;
}
