#include <stdio.h>

int main(void) {
    double preco;
    int idade;
    printf("Digite a idade da pessoa: \n");
    scanf("%d", &idade);
    if (idade <= 12) {
        preco = 15.00;
    }else if (idade <= 17) {
        preco = 20.00;
    }else if (idade < 60) {
        preco = 30.00;
    }else {
        preco = 10.00;
    }
    printf("Preco do ingresso R$ %.2lf \n", preco);
    return 0;
}