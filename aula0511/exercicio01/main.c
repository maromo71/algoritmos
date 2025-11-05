#include <stdio.h>

int main(void) {
    int opcao;
    do {
        int a, b;
        printf("Menu Calculadora\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &opcao);
        if (opcao == 0) break;
        printf("Digite o primeiro valor: \n");
        scanf("%d", &a);
        printf("Digite o segundo valor: \n");
        scanf("%d", &b);
        switch (opcao) {
            case 1:
                printf("Soma de %d + %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("Subtracao de %d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("Multiplicacao de %d * %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Impossivel calcular\n");
                } else {
                    printf("Divisao de %d / %d = %d\n", a, b, a / b);
                }
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (1);
    printf("Fim do programa \n");
    return 0;
}
