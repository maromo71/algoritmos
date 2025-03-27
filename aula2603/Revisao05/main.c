#include <stdio.h>
/*
5. Desenvolva um programa em C para avaliar a aprovação de um empréstimo bancário. O
programa deve solicitar três informações: valor solicitado do empréstimo, número de parcelas e
salário mensal do solicitante. O empréstimo será aprovado se o valor das parcelas não ultrapassar
30% do salário mensal do solicitante.
 */
int main(void) {
    double valorEmprestimo, salarioMensal;
    int numParcelas;
    printf("Digite o valor do emprestimo: \n");
    scanf("%lf", &valorEmprestimo);
    printf("Digite seu salario atual: \n");
    scanf("%lf", &salarioMensal);
    printf("Digite o numero de parcelas: \n");
    scanf("%d". & numParcelas);
    if (valorEmprestimo / numParcelas <= salarioMensal * 30 / 100) {
        printf("Seu emprestimo foi aprovado\n");
    } else {
        printf("Emprestimo nao pode ser concedido por questoes de renda\n");
    }
    return 0;
}
