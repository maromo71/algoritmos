#include <stdio.h>

int main(void) {
    int senhaCorreta = 1234;
    int senha;
    for (int i = 0; i < 3; i++) {
        printf("Digite a senha: \n");
        scanf("%d", &senha);
        if (senha == senhaCorreta) {
            printf("Acesso permitido\n");
            return 0;
        }
    }
    printf("Tentativas terminadas\n");
    printf("Rode novamente\n");
    return 0;
}