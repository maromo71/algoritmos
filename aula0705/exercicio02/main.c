#include <stdio.h>
// Exiba um menu (1-Somar, 2-Subtrair, 0-Sair) e execute a operação escolhida, usando
// do-while até o usuário sair
int main(void) {
    int a, b, opc;
    do {
        printf("Digite valor para a e b: \n");
        scanf("%d%d", &a, &b);
        do {
            printf("1. Somar \n");
            printf("2. Subtrair \n");
            printf("0. SAIR \n");
            scanf("%d", &opc);
        }while (opc <0 || opc>2);
        switch (opc) {
            case 1:
                printf("%d + %d = %d \n", a, b, a+b);
                break;
            case 2:
                printf("%d - %d = %d \n", a, b, a-b);
                break;
            case 0:
                printf("Acabou");
                return 0;
        }
    }while (opc !=0);

}