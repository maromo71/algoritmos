#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int num = (rand() % 5) + 1;
    int palpite;
    printf("Digite seu palpite: \n");
    scanf("%d", &palpite);
    if (num==palpite) {
        printf("Parabens! Voce Acertou\n");
    }else {
        printf("Voce errou. O numero era %d.\n", num);
    }
    return 0;
}