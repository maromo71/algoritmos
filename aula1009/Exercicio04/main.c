#include <stdio.h>
int main(void) {
    double peso, altura, imc;
    printf("Digite o peso: \n");
    scanf("%lf", &peso);
    printf("Digite a altura: (metros) \n");
    scanf("%lf", &altura);
    imc = peso / (altura * altura);
    printf("Imc da pessoa: %.2lf \n", imc);
    if (imc < 18.5) {
        printf("Abaixo do Peso \n");
        return 0;
    }
    if (imc <= 24.9) {
        printf("Peso normal \n");
        return 0;
    }
    if (imc <= 29.9 ) {
        printf("Excesso de Peso \n");
        return 0;
    }
    if (imc <= 34.9) {
        printf("Obesidade classe I \n");
        return 0;
    }
    if (imc <= 39.9) {
        printf("Obesidade classe II \n");
        return 0;
    }
    printf("Obesidade classe III\n");
    return 0;
}