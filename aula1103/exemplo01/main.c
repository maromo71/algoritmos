#include <stdio.h>

int main(void) {
    double salario = 5000.0;
    //mera curiosidade
    printf("End: %d \n", &salario);

    double percentual = 0.05;
    //
    printf("End: %d \n", &percentual);
    double aumento = salario * percentual;
    printf("End: %d \n", &aumento);
    double novoSalario = salario + aumento;
    printf("End: %d \n", &novoSalario);

    printf("Novo salario R$ %.2lf \n", novoSalario);
    return 0;
}