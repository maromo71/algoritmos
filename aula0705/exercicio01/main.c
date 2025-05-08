//contagem regressiva de N até 0
#include <stdio.h>

int main(void) {
    int n;
    do { //validar
        printf("Digite o valor inicial: [Maior que zero]\n");
        scanf("%d", &n);
    }while (n<0);

    //contar regressivamente
    while (n >= 0) {
        printf("%d\n", n--);
    }
    return 0;
}