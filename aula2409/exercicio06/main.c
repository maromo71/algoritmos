#include <stdio.h>

int main(void) {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    if (codigo == 1) {
        printf("Class: Alimento nao perecivel \n");
    }else if (codigo >=2 && codigo <=4) {
        printf("Class: Alimento perecivel \n");
    }else if (codigo == 5 || codigo == 6) {
        printf("Class: Vestuario\n");
    }else if (codigo == 7) {
        printf("Class: Higiene Pessoal \n");
    }else if (codigo >=8 && codigo <=10) {
        printf("Class: Utens. Domestico \n");
    }else {
        printf("Opcao invalida \n");
    }
    return 0;
}