#include <stdio.h>

int main(void) {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    switch (codigo) {
        case 1:
            printf("Class: Alimento nao perecivel \n");
            break;
        case 2:
        case 3:
        case 4:
            printf("Class: Alimento perecivel \n");
            break;
        case 5:
        case 6:
            printf("Class: Vestuario \n");
            break;
        case 7:
            printf("Class: Higiene Pessoal \n");
            break;
        case 8:
        case 9:
        case 10:
            printf("Class: Utensilios domesticos \n");
            break;
        default:
            printf("Opcao invalida \n");
    }
    return 0;
}
