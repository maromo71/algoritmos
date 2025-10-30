#include <stdio.h>
//determinar se o numero entrado pelo usuario eh primo ou nao
int main(void) {
    int n;
    printf("Digite um numero inteiro maior de que 1: \n");
    scanf("%d", &n);
    for (int i=2; i< (n/2); i++) {
        if (n % i == 0) {
            printf("Numero nao eh primo \n");
            return 0;
        }
    }
    printf("Numero eh primo\n");
    return 0;
}