#include <stdio.h>
//Tabuada de um numero dado pelo usuario
int main(void) {
    for (int i=1; i<=10; i++) {
        printf("Tabuada do %d \n", i);
        printf("=-=-=-=-=-=-=-\n");
        for (int j=1; j<=10; j++) {
            printf("[%3d X %3d = %3d]\n",i, j, i * j);
        }
        printf("\n"); //pular uma linha entre as tabuadas
    }
    return 0;
}