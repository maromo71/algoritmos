#include <stdio.h>

int main(void) {
    int num;
    printf("Digite o valor para a piramide: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) { //laco externo (num de linhas)
        for (int j=1; j<=i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}