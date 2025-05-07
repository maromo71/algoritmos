#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int magico = (int) (rand() % 1000) + 1;
    //printf("Magico:  %d \n", magico);
    int palpite;
    int cont = 0; //contar as tentativas
    while (1) {
        cont++; //adiciona um na contagem
        printf("Tentativa: %d - Digite o seu palpite [1..1000] \n", cont);
        scanf("%d", &palpite);

        if (magico == palpite) {
            printf("Voce eh um sortudo. Ganhou \n");
            return 0;
        }else {
            if (cont==10) {
                printf("Suas chances terminaram...\n");
                printf("O numero magico era: %d \n", magico);
                return 0;
            }
            printf("Infelizmente nao foi dessa vez \n");
            if (palpite < magico) {
                printf("Seu palpite foi baixo..\n");
            }else {
                printf("Seu palpite foi alto..\n");
            }
        }
    }
}