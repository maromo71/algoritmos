#include <stdio.h>

int main(void) {
    double grao = 1;
    double total = 0;
    for (int i = 1; i <=64; i++) {
        printf("Total de grao na casa %d = %.0lf\n", i, grao);
        total += grao;
        grao*=2; //dobrando
    }
    printf("Total em graos a pagar: %.0lf\n", total);
    return 0;
}