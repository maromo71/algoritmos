#include <stdio.h>

int main(void) {
    int numero;
    int par=0, impar=0;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &numero);
    if (numero <=0) {
        printf("Valor invalido\n");
        return 0;
    }
    while (numero > 0) {
        int ult_digito = numero % 10;
        ult_digito % 2 == 0 ? par++ : impar++;
        numero /= 10;
    }
    printf("Total de numeros pares: %d\n", par);
    printf("Total de numeros impares: %d\n", impar);
    return 0;
}