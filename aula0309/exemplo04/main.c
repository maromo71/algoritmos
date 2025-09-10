#include <stdio.h>

int main(void) {
    int opcao;
    printf("Menu Principal\n");
    printf("1. Pizza Mussarela\n");
    printf("2. Pizza Portuguesa\n");
    printf("3. Pizza Catupiry\n");
    printf("4. Pizza Marguerita\n");
    printf("Escolha sua opcao \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("P. Mussarela R$ 89.00\n");
            break;
        case 2:
            printf("P. Pizza Portuguesa R$ 64.00\n");
            break;
        case 3:
            printf("P. Catupriry R$ 91.00\n");
            break;
        case 4:
            printf("P. Marguerita R$ 89.00 \n");
            break;
        default:
            printf("Opcao Invalida\n");
    }
    return 0;
}