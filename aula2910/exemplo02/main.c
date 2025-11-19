#include <stdio.h>

int main(void) {
    int soma = 0;
    int cont = 0;
    //enquanto soma foi menor ou igual a 500
    while (soma <= 500) {
        int n;
        printf("Digite um valor inteiro: \n");
        scanf("%d", &n);
        //verifico se eh par
        if ( n % 2 == 0) soma+= n;
        //soma um no contador
        cont++;
    }
    printf("Total da soma dos pares: %d \n", soma);
    printf("Qtd de elementos entrados: %d \n", cont);
    return 0;
}