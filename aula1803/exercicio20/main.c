#include <stdio.h>
/**************************************************
/* Leia dois valores booleanos (0 ou 1) e exiba
 * o resultado das operações lógicas AND, OR e NOT
 * sobre eles.
 * ***********************************************/
int main(void) {
    int v1, v2;
    printf("Digite 1 ou 0 para booleano: \n");
    scanf("%d", &v1);
    printf("Digite 1 ou 0 para o segundo booleano \n");
    scanf("%d", &v2);
    int operacao_and = v1 && v2;
    int operacao_or = v1 || v2;
    int not_v1 = !v1;
    int not_v2 = !v2;
    printf("Para os Booleanos entrados: [%d] [%d]:\n", v1, v2);
    printf("Operacao AND Resulta em: [%d] \n", operacao_and);
    printf("Operaco OR resulta em [%d] \n", operacao_or);
    printf("Not V1: [%d], Not V2 [%d]\n", not_v1, not_v2);
    return 0;
}