#include <stdio.h>

int main(void) {
    double temp;
    double F, K, C;
    char l;
    printf("Digite uma temperatura e \n");
    printf("'C' para celsius\n");
    printf("'F' para fahrenheit\n");
    printf("'K' para kelvin\n");
    scanf("%lf %c", &temp, &l);
    switch (l) {
        case 'C':
        case 'c':
            printf("Celsius para Fahr..\n");
            F = temp * 9 / 5.0 + 32;
            printf("Fahrenheit: %.1f\n", F);
            printf("Celsius para Kelvin\n");
            K = temp + 273.15;
            printf("Kelvin: %.1f\n", K);
            break;
        case 'F':
        case 'f':
            printf("Fahrenheit para Celsius..\n");
            C = (temp - 32) * 5 / 9.0;
            printf("Celsius: %.1f\n", C);
            printf("Fahrenheit para Kelvin\n");
            K = (temp - 32) * 5 / 9.0 + 273.15;
            printf("Kelvin: %.1f\n", K);
            break;
        case 'K':
        case 'k':
            printf("Kelvin para Fahr..\n");
            F = (temp - 273.15) * 5 / 9.0 + 32.0;
            printf("Fahrenheit: %.1f\n", F);
            printf("Kelvin para Celsius\n");
            C = temp - 273.15;
            printf("Kelvin: %.1f\n", C);
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
