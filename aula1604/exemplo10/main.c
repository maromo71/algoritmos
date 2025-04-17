#include <stdio.h>

int main(void) {
    int cont=0; //qtd de multiplos de 3
    for (int i = 3; i<=100; i+=3) {
        printf("%d\n", i);
        cont++; //acumula um em cada passagem
    }
    printf("Total de multiplos de 3.:  %d\n", cont);
    return 0;
}