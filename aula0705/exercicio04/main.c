#include <stdio.h>

int main(void) {
    int num;
    int cont_digito = 0;
    printf("Digite um numero maior que zero \n");
    scanf("%d", &num);

    do {
        num /= 10;
        cont_digito++;
    }while (num > 0);
    printf("O numero possui: %d digitos\n", cont_digito);
    return 0;
}