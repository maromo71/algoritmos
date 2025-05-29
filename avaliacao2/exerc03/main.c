#include <stdio.h>
//Escreva um programa em C que leia um primeiro L. Em seguida
//leia L numeros inteiros e calcule a media apenas dos numeros
//que sao maiores que zero.
int main(void)
{
    int N, L;
    do {
        printf("Digite o limite: \n");
        scanf("%d", &L);
    }while (L < 1 || L > 100);

    int cont =0;
    int soma = 0;
    for (int i = 0; i < L; i++) {
        do {
            printf("Digite um valor entre -1000 e 1000\n");
            scanf("%d", &N);
        }while ( N < -1000 || N > 1000);
        if ( N > 0) {
            soma += N;
            cont++;
        }
    }
    double media = 0;
    if (cont > 0) {
        media = (double)soma / cont;
    }
    printf("Media: %.2lf\n", media);

    return 0;
}