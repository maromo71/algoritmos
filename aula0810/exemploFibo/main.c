#include <stdio.h>
//20o termo da sequencia de fibonacci
int main(void) {
    int prox;
    int pri=1, seg=1;
    printf("%d ", pri);
    printf("%d ", seg);
    for (int i=3; i<=20; i++) {
        prox=pri+seg;
        printf("%d ", prox);
        pri = seg;
        seg = prox;
    }
    return 0;
}