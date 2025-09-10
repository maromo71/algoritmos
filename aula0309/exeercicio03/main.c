#include <stdio.h>

int main(void) {
    float altura;
    char sexo;
    float peso_ideal;
    printf("Digite a altura: (em metros)\n");
    scanf("%f", &altura);
    printf("Digite 'm' para masculino ou 'f' feminino\n");
    scanf(" %c", &sexo);
    if (sexo == 'm') {
        peso_ideal = (72.7f * altura) - 58;
    }else {
        peso_ideal = (62.1f * altura) - 44.7f;
    }
    printf("O peso ideal eh %.2f \n", peso_ideal);
    return 0;
}