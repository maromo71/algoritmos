#include <stdio.h>

int main(void) {
    int seguro;
    double salario;
    printf("Digite 1 se possui seguro ou 0 se não possui:\n");
    scanf("%d", &seguro);
    printf("Digite o salario:\n");
    scanf("%lf", &salario);
    if (salario < 2000.0 && seguro==1){
      salario *= 1.10;
    }else{
      salario *= 1.07;
    }
    printf("Novo valor do salario: %.2lf\n", salario);
    return 0;
}