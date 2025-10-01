#include <stdio.h>

int main(void) {
    int idade;
    double preco;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade <= 12) {
        preco = 15.00;
    }else if (idade <= 17) {
        preco = 20.00;
    }else if (idade >= 60){
        preco = 10.00;
    }else {
        preco = 30.00;
    }
    printf("Preco do ingresso: %.2lf\n", preco);
    return 0;
}