#include <stdio.h>

int main(void) {
    //variável declarada
    int num;
    //Mensagem para o usuario
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    //Comparando
    if (num % 2 == 0) {
      printf("Valor par\n");
    }else{
      printf("Valor impar\n");
    }
    return 0;
}