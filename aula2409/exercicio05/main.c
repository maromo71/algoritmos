#include <stdio.h>

int main(void) {
    double valorEmprestimo, salario, valorParcela;
    int numParcelas;
    printf("Digite o valor do emprestimo: \n");
    scanf("%lf", &valorEmprestimo);
    printf("Digite o numero de parcelas: \n");
    scanf("%d", &numParcelas);
    printf("Digite o valor mensal do salario do solicitante: \n");
    scanf("%lf", &salario);

    valorParcela = valorEmprestimo / numParcelas;
    if (valorParcela <= (salario * 0.30)) {
        printf("Emprestimo APROVADO. Valor parcela R$ %.2lf\n", valorParcela);
    }else {
        printf("Emprestimo REPROVADO. Valor da parcela ultrapassa 30%% do salario\n");
    }

    return 0;
}