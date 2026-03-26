#include <stdio.h>
/*
Cálculo de Quadrados: Elabore um programa que apresente
como resultado os quadrados dos números inteiros existentes
na faixa de valores de 15 a 200
*/
int main(void) {
    for (int i=15; i<=200; i++) {
        printf("%d \n", i*i);
    }
    return 0;
}