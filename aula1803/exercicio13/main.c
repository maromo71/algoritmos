#include <stdio.h>
/*******************************************************************************
* 13.Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a
* apenas em dias (considere o ano com 365 dias e o mês com 30 dias). ***********
* ******************************************************************************/
int main(void) {
    int anos, meses, dias;
    printf("Digite sua idade em anos, meses e dias, separados por espaco: ");
    scanf("%d %d %d", &anos, &meses, &dias);
    int idade_dias = anos * 365 + meses * 30 + dias;
    printf("Sua idade aproximada em dias: %d \n", idade_dias);
    return 0;
}