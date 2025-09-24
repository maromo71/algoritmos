#include <stdio.h>

int main(void) {
    double salario, bonus;
    int tempoServico;
    printf("Digite o salario do funcionario \n");
    scanf("%lf", &salario);
    printf("Digite o tempo de servico em anos \n");
    scanf("%d", &tempoServico);
    if (tempoServico >= 5) {
        bonus = salario * 0.20;
    }else {
        bonus = salario * 0.10;
    }
    printf("O valor do bonus eh R$ %.2lf \n", bonus);
    return 0;
}