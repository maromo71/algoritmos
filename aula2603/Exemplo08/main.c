#include <stdio.h>

int main(void) {
    char letra;
    printf("Digite uma letra: \n");
    letra = getchar(); //ler uma unica letra use o getchar()
    printf("Letra: %c \n", letra);
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vogal \n");
            break;
        default:
            printf("Nao vogal \n");
            break;
    }
    return 0;
}
