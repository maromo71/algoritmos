#include <stdio.h>

int main(void) {
    int dia, mes, ano;
    int bissexto = 0; //Comecando com falso
    printf("digite dia mes e ano separados por espacos: \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    //definindo se ano é bissexto ou nao
    // ano deve divisível por 4, mas não por 100,
    // a menos que seja divisível por 400 é bissexto
    if ((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0) {
        bissexto = 1;
    }
    if (dia < 0 || dia > 31) {
        printf("Data Invalida!");
        return 0;
    }
    if (mes < 0 || mes > 12) {
        printf("Data Invalida!");
        return 0;
    }
    if (ano < 0) {
        printf("Data Invalida!");
        return 0;
    }
    if (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("Data Invalida!");
            return 0;
        }
        if (mes == 2 && !bissexto) {
            if (dia >= 29) {
                printf("Data Invalida!");
                return 0;
            }
        }
    }
    if (mes == 1 || mes==3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia > 31) {
            printf("Data Invalida!");
            return 0;
        }
    }
    printf("Data Valida!");
    return 0;
}