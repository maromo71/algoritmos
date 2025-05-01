#include <stdio.h>

int main(void) {
    //15 elementos da sequencia de fibonnacci
    int pri = 0;
    printf("%d \n", pri);
    int seg = 1;
    printf("%d \n", seg);
    for (int i =3; i<=15; i++) {
        int prox = pri + seg;
        printf("%d \n", prox);
        pri = seg;
        seg = prox;
    }
    return 0;
}