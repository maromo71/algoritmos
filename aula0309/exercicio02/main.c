#include <stdio.h>

int main(void) {
    int horas;
    printf("Digite a hora cheia atual \n");
    scanf("%d", &horas);
    if (horas < 12) {
        printf("Bom dia \n");
    }else if ( horas < 18) {
        printf("Boa tarde \n");
    }else {
        printf("Boa noite \n");
    }
    return 0;
}