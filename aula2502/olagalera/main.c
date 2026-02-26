#include <stdio.h>

int main(void) {
    //O printf imprime a frase e o \n pula uma linha
    char nome[50];
    printf("Ola galera da Fatec\n");
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Oi %s \n", nome);
    return 0;
}