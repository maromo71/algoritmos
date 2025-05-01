#include <stdio.h>

int main(void) {
    int n;
    printf("Digite o valor para tabuadas [1..10]\n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) { //para n tabuadas
        printf("Tabuada do %d: \n", i);
        for (int j=1; j<=10; j++) { //para cada tabuada i, multiplico por j (até 10)
            printf("%2d X %2d = %3d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}