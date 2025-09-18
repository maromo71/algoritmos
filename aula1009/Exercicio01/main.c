#include <stdio.h>
#include <stdlib.h>

int main() {
    int ladoA, ladoB, ladoC;
    printf("Digite os tres lados do triangulo (ex: 3 4 5): ");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {

        // Classificacao com swtich
        // Para o switch: 0 para escaleno,
        // 1 para isósceles, 2 para equilátero
        switch ( (ladoA == ladoB) + (ladoB == ladoC) + (ladoA == ladoC) ) {

            case 3: // Todos os lados são iguais (ladoA == ladoB e ladoB == ladoC e ladoA == ladoC)
                printf("Eh um triangulo equilatero");
                break;

            case 1: // Dois lados são iguais
                printf("Eh um triangulo isosceles");
                break;

            case 0: // Nenhum lado é igual
                printf("Eh um triangulo escaleno");
                break;
        }

        // ---
        // Verificação do triângulo retângulo usando if
        // Ordena os lados para garantir que o ladoC seja o maior, facilitando a verificação
        int maiorLado = ladoA;
        int lado1 = ladoB;
        int lado2 = ladoC;

        if (ladoB > maiorLado) {
            maiorLado = ladoB;
            lado1 = ladoA;
            lado2 = ladoC;
        }

        if (ladoC > maiorLado) {
            maiorLado = ladoC;
            lado1 = ladoA;
            lado2 = ladoB;
        }

        // Usa 'long long' para evitar overflow em cálculos com números grandes
        if (lado1 * lado1 + lado2 * lado2 == maiorLado * maiorLado) {
            printf(" e retangulo.\n");
        } else {
            printf(".\n");
        }

    } else {
        printf("Nao eh um triangulo valido.\n");
    }

    return 0;
}