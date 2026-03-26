#include <stdio.h>

int main(void) {
    int pri =1, seg =1, prox =0;
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n <= 2) {
        printf("Numero invalido\n");
        return 1;
    }
    for (int i =3; i <= n; i++) {
        prox = pri + seg;
        pri = seg;
        seg = prox;
    }
    printf("O termo da pos %d ==> %d\n", n, prox);
    return 0;
}