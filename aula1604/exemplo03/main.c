#include <stdio.h>

int main(void) {
    double preco;
    printf("Digite o preco da fruta: \n");
    scanf("%lf", &preco);
    for (int i=1; i<=10; i++) {
        printf("%2d fruta(s) custa(m) R$ %6.2lf \n", i, preco * i);
    }
    return 0;
}