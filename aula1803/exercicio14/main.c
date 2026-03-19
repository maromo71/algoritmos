#include <stdio.h>
/*******************************************************
*14.Receba o valor de uma conta de restaurante e calcule
* a taxa de serviço  (10%) e o valor total a ser pago.
* ******************************************************/
int main(void) {
    double valor, taxa;
    printf("Digite o valor da conta do restaurante: ");
    scanf("%lf", &valor);
    taxa = valor * 0.10;
    double valor_pagar = valor + taxa;
    printf("Valor do pagamento no caixa R$ %.2lf\n", valor_pagar);
    return 0;
}