/* Exercício 1: Soma de Números Até Zero */
#include <stdio.h>
int main() {
    int x, soma = 0;
    do{
        do { //
            scanf("%d", &x);
        }while (x < -1000 || x > 1000);//novo x
        soma += x;
    } while (x != 0); //saida
    printf("%d\n", soma);
    return 0;
}

