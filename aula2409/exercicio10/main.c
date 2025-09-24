#include <stdio.h>

int main(void) {
    double precoEtiqueta, valorFinal;
    int codigo;
    printf("Digite o preco de etiqueta do produto \n");
    scanf("%lf", &precoEtiqueta);

    printf("\nDigite o codigo da condicao de pagamento \n");
    printf("1.. A vista em dinheiro ou cheque \n");
    printf("2.. A vista com cartao de credito \n");
    printf("3.. em 02 vezes \n");
    printf("4.. em 03 vezes \n");
    scanf("%d", &codigo);
    switch (codigo) {
        case 1:
            valorFinal = precoEtiqueta * 0.90;
            printf("Valor final com 10%% de desconto: R$ %.2lf \n", valorFinal);
            break;
        case 2:
            valorFinal = precoEtiqueta * 0.95;
            printf("Valor final com 5%% de desconto: R$ %.2lf \n", valorFinal);
            break;
        case 3:
            valorFinal = precoEtiqueta;
            printf("Valor final em 2x de R$ %.2lf \n", valorFinal / 2);
            break;
        case 4:
            valorFinal = precoEtiqueta * 1.10;
            printf("Valor final em 3x de R$ %.2lf \n", valorFinal / 3);
            break;
        default:
            printf("Valor invalido\n");
            return 1;
    }

    return 0;
}
