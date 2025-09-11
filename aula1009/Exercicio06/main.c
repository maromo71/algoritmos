#include <stdio.h>

int main(void) {
    char letra;
    printf("Sistema de Cores \n");
    printf("R Red, G Green, B blue, L Black\n");
    scanf("%c", &letra);
    switch (letra) {
        case 'R':
        case 'r':
            printf("Vermelho em Hexa #FF0000 \n");
            break;
        case 'G':
        case 'g':
            printf("Verde em Hexa #008000 \n");
            break;
        case 'B':
        case 'b':
            printf("Blue em Hexa #0000FF \n");
            break;
        case 'L':
        case 'l':
            printf("Black em Hexa #000000 \n");
            break;
        default:
            printf("Cor invalida\n");
    }
    return 0;
}
