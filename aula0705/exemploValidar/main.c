#include <stdio.h>

int main(void) {
    int opcao;
    do {
        printf("Menu do Boteco\n");
        printf("1. Cerveja Gelada\n");
        printf("2. Pizza Calabresa \n");
        printf("3. Refrigerante \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &opcao);
    }while (opcao < 1 || opcao > 3);

    switch (opcao) {
        case 1:
            printf("Boa pedida, faca um brinde \n");
            break;
        case 2:
            printf("Pizza Grande de Calabresa em promocao\n");
            break;
        case 3:
            printf("Refrigerante em falta \n");
    }
    return 0;
}