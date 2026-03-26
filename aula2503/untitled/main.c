#include <stdio.h>
#include <string.h>

int main(void) {
    char caracter1, caracter2;
    fflush(stdin);
    printf("Digite o primeiro caracter: \n");
    scanf("%c", &caracter1);
    fflush(stdin);
    printf("Digite o segundo caracter: \n");
    scanf("%c", &caracter2);
    for (int i = 1; i<=5; i++) {
        printf("%c", caracter1);
        printf("%c", caracter2);
    }
    return 0;
}
