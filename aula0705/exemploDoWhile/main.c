#include <stdio.h>

int main(void) {
    int n, soma = 0;
    do { //laço principal

        do { //laço interno de validação

            printf("Digite o valor entre 0..99 [0 para sair]\n");
            scanf("%d", &n);

        }while (n<0 || n>99); //condição incorreta (o que nao pode)

        soma+= n; //soma só os validos

    }while (n!=0); // condição de saída

    printf("Valor da soma: %d \n", soma);
    return 0;
}