#include <stdio.h>

int main(void) {
    float x, y, z, media;
    // o \n pula uma linha
    printf("Digite o primeiro valor: \n");
    // o & significa endereco de memoria da variavel q precede
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &z);
    media = (x+y+z)/3;
    printf("A media eh: %.2f \n", media);
    return 0; //como o main espera um int, retornamos 0
    //0 indica que tudo correu bem ate esta linha
}
