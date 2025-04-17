#include <stdio.h>

int main(void) {
    int somapar = 0;
    for (int i =2; i<=50; i+=2) {
        somapar+= i;
    }
    printf("Soma dos pares: %d \n", somapar);
    return 0;
}