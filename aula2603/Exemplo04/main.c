#include <stdio.h>

int main(void) {
    int n;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    if (n < 0){
      printf("Elemento negativo\n");
    } else {
      if (n == 0){
        printf("Elemento igual a zero\n");
      }else{
        if (n < 10){
          printf("Elemento entre 1 e 9\n");
        }else{
          printf("Elemento maior ou igual a 10\n");
        }
      }
    }
    return 0;
}