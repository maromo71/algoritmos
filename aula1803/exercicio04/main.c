#include <stdio.h>
/******************************************************************
 *4. Leia a base e a altura de um triângulo e calcule a sua área
 ******************************************************************/
int main(void) {
    double base, altura;
    printf("Digite a base do triangulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%lf", &altura);
    double area = (base * altura)/2;
    printf("Area do triangulo: %.2lf\n", area);
    return 0;
}