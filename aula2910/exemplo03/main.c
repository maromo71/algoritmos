#include <stdio.h>

int main(void) {
    double popA = 80000;
    double popB = 200000;
    int anos = 0;
    while (popA < popB) {
        popA *= 1.03;
        popB *= 1.015;
        anos++;
    }
    printf("Total em anos: %d \n", anos);
    printf("Pop. de A: %.0lf \n", popA);
    printf("Pop. de B: %.0lf \n", popB);
    return 0;
}