#include <stdio.h>
#include <string.h>
/*
 * Programa que recebe o nome a idade e altura
 * de uma pessoa e exibe na tela
 */
int main(void) {
    char nome[51];
    int idade;
    float altura;
    printf("Digite seu nome: \n");
    //fgets(nome, sizeof(nome), stdin);
    //nome[strlen(nome)-1] = '\0';
    scanf("%[^\n]", nome);
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    printf("Digite a altura: \n");
    scanf("%f", &altura);

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    return 0;
}