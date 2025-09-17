#include <stdio.h>

int main(void) {
    double preco = 0.0, desconto = 0.0;
    double precoComDesconto = 0.0;
    int tipo = 0;
    printf("Digite o valor do total da compra: \n");
    scanf("%lf", &preco);
    printf("Digite o tipo de cliente: \n");
    printf("1. Regular, 2. Bronze, 3. Prata e 4. Ouro\n");
    scanf("%d", &tipo);
    switch (tipo) {
        case 1:
            precoComDesconto = preco;
            break;
        case 2:
            precoComDesconto = preco * 0.95; //preco - (preco * 5/100)
            break;
        case 3:
            precoComDesconto = preco * 0.90;
            break;
        case 4:
            precoComDesconto = preco * 0.85;
            break;
        default:
            printf("Compra com dados invalidos \n");
            return 1;
    }
    if (preco > 500.0) {
        precoComDesconto *= 0.95; // precoComDesconto = precoComDesconto * 0.95
    }
    printf("Valor Final da Compra: %.2lf\n", precoComDesconto);
    return 0;
}
