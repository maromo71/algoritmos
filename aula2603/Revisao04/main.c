#include <stdio.h>
/*
4. Uma empresa decidiu conceder bônus aos seus funcionários com base no tempo de serviço.
Funcionários com 5 anos ou mais na empresa recebem um bônus de 20% sobre o salário; os demais
recebem um bônus de 10%. Desenvolva um programa em C que receba o salário e o tempo de
serviço do funcionário, calcule e mostre o valor do bônus.
 */
int main(void) {
    double salario, bonus;
    int tempoServico;
    printf("Digite o salario do funcionario: \n");
    scanf("%lf", &salario);
    printf("Digite o tempo de servico do funcionario: \n");
    scanf("%d", &tempoServico);
    //bonus recebe 20% do salario se o tempo de servico for maior ou igual a 5
    //ou 10% do salario se o tempo de servico for menor que 5
    bonus = tempoServico >=5 ? salario * 0.2 : salario * 0.1;
    printf("O bonus do funcionario eh: %.2lf\n", bonus);
    return 0;
}