#include <stdio.h>

int main(void) {
    int cod_produto;
    printf("Digite o coodigo do produto: ");
    scanf("%d", &cod_produto);
    switch (cod_produto) {
        case 1:
            printf("Alimento nao perecivel\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecivel \n");
            break;
        case 5:
        case 6:
            printf("Vestuario\n");
            break;
        case 7:
            printf("Higiene Pessoal \n");
            break;
        case 8:
        case 9:
        case 10:
            printf("Utensilios Domesticos\n");
            break;
        default:
            printf("Codigo invalido\n");
    }
    return 0;
}