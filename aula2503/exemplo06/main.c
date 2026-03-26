#include <stdio.h>

int main(void) {
    int maior, menor, numero;
    for (int i=1; i<=10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(i==1) {
            maior = numero;
            menor = numero;
        }
        if (maior < numero) maior = numero;
        if (menor > numero) menor = numero;
    }
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
    return 0;
}