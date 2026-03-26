#include <stdio.h>
/* Somar 10 valores entrados pelo usuario */
int main(void) {
    int soma = 0;
    int numero; //sera informado pelo usuario 10 vezes
    for (int i=1; i<=10; i++) {
        printf("Digite o %d. numero: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    printf("Soma: %d\n", soma);
    return 0;
}