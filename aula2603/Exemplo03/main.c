#include <stdio.h>

int main(void) {
    int x;
    printf("Entre com valor de x: \n");
    scanf("%d", &x);
    //apresentar o para o usuario, se o numero é par
    if (x % 2 == 0){
        printf("Elemento par\n");
        printf("Outra mensagem\n")
    } else {
        printf("Elemento impar\n");
        printf("Executei\n");
    }

    return 0;
}