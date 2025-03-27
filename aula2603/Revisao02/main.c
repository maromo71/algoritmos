#include <stdio.h>
/*
2. Crie um programa em C que receba a idade do usuário e verifique se ele é maior ou menor de
idade. Caso tenha 18 anos ou mais, exiba a mensagem "Maior de idade"; caso contrário, exiba
"Menor de idade".
 */
int main(void) {
    int idade;
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    if (idade < 18){
      printf("Menor de idade\n");
    }else{
      printf("Maior de idade\n");
    }
    //poderia ser realizado com o ternario
    idade < 18 ? printf("Menor de idade\n") : printf("Maior de idade\n");
    return 0;
}