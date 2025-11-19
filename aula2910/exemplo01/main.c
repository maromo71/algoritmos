#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int contador = 0;
    srand(time(NULL));
    int magico = (rand() % 1000) + 1;
    // Repitacao (laco while)
    while (1) {
        int palpite;
        //verificando condicao de termino sem acerto
        if (contador == 10) {
            printf("Infelizmente suas chances terminaram\n");
            printf("O numero magico era %d \n", magico);
            return 0; //finalizar
        }
        printf("Tentativa %2d -> digite um palpite: ", contador+1);
        scanf("%d", &palpite);
        contador++;
        // comparar
        if (magico == palpite) {
            printf("Parabens voce eh um feliz ganhador \n");
            return 0;  //finalizar
        }else {
            printf("Puts! nao foi desta vez\n");
            if (magico > palpite) {
                printf("Poxa! Seu palpite foi baixo\n");
            }else {
                printf("Poxs! Seu palpite foi alto \n");
            }
        }
    }
}