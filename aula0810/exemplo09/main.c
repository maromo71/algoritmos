#include <stdio.h>

int main(void) {
    int qtd;
    int melhorVolta=0;
    double melhorTempo, tempo;
    printf("Digite a qtd de voltas a ser computada:\n");
    scanf("%d", &qtd);
    for (int i =1; i<=qtd; i++) {
        printf("Digite o tempo da volta %d a ser computado:\n", i);
        scanf("%lf", &tempo);
        if (i==1 || tempo < melhorTempo) {
            melhorTempo = tempo;
            melhorVolta = i;
        }
    }
    printf("Melhor tempo computado: %.2lf segundos\n", melhorTempo);
    printf("Este tempo ocorreu na volta: %d \n", melhorVolta);
    return 0;
}