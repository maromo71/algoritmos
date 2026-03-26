#include <stdio.h>

int main(void) {
    int idade;
    double salario;
    char nome[51];
    //operacoes de entrada de dados (scanf) - leitura
    printf("Digite o nome da pessoa: \n");
    scanf("%s", nome);
    printf("Digite a idade da pessoa: \n");
    scanf("%d", &idade);
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    //apresentar os dados na tela output (printf) - saida
    printf("Nome da pessoa: %s \n", nome);
    printf("Idade da pessoa: %d \n", idade);
    printf("Salario da pessoa: %.2lf \n", salario);
    return 0;
}