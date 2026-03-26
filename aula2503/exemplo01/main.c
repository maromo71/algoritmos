#include <stdio.h>

int main(void) {
    printf("Contagem de 1 a 10\n");
    //laco que se repete 10 vezes
    for (int i = 1; i <= 10;i++) { //i++ incrementa 1 ao valor de i
        printf("%d \n", i); //imprime o valor de i na passagem
    }
    //laco que se repete 10 vezes imprimindo de 10 ate 1
    for (int i = 10; i>0; i--) {
        printf("%d \n", i);
    }
    return 0;
}