#include <stdio.h>
/********************************************************************
 * 5. Converta uma temperatura digitada em Celsius para Fahrenheit
 * *****************************************************************/
int main(void) {
    double celcius, fahrenheit;
    printf("Digite a temperatura em celcius: ");
    scanf("%lf", &celcius);
    fahrenheit = (celcius * 1.8) + 32;
    printf("Temperatura em Fahrenheit %.2lf \n", fahrenheit);
    return 0;
}