#include <stdio.h>
/*********************************************************
* 9. Calcule o salário líquido de um funcionário: leia o
* salário bruto e subtraia 8% de INSS e 5% de sindicato.
* *******************************************************/
int main(void) {
    double salario_bruto, salario_liquido;
    printf("Digite o salario bruto do funcionario: ");
    scanf("%lf", &salario_bruto);
    salario_liquido = salario_bruto * 0.87; // Descontando 13 %
    printf("Salario liquido: %.2lf\n", salario_liquido);
    return 0;
}