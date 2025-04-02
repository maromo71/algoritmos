#include <stdio.h>

int main(void) {
    double preco;
    printf("Digite o valor do produto\n");
    scanf("%lf", &preco);
    int condicao;
    printf("Digite a condicao do produto [1..4]\n");
    scanf("%d", &condicao);
    switch (condicao) {
        case 1:
            printf("A Vista em dinheiro ou cheque\n");
            preco *= 0.9;
            break;
        case 2:
            printf("A Vista com cartao de credito\n");
            preco*=0.95;
            break;
        case 3:
            printf("Em duas vezes, preco normal\n");
            break;
        case 4:
            printf("Em tres vezes, preco com acrescimo\n");
            preco *= 1.10;
            break;
        default:
            printf("Escolha invalida\n");
            return 1;
    }
    printf("Valor a pagar: %.2lf \n", preco);
    return 0;
}