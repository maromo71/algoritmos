#include <stdio.h>

int main(void) {
    int opcao;
    printf("Escolha a categoria de produtos\n");
    printf("1. Eletronicos \n");
    printf("2. Vestuario \n");
    printf("3. Alimentos \n");
    printf("4. Livros \n");
    printf("Faca sua escolha: \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Escolheu Eletronicos\n");
            break;
        case 2:
            printf("Escolheu Vestuario\n");
            break;
        case 3:
            printf("Escolheu Alimentos\n");
            break;
        case 4:
            printf("Escolheu Livros\n");
            break;
        default:
            printf("Codigo Invalido\n");
    }
    return 0;
}
