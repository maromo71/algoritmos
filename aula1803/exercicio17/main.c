#include <stdio.h>
/***********************************************************************
* 17 Leia uma quantidade de tempo em segundos e converta para o formato:
* horas, minutos e segundos
* **********************************************************************/
int main(void) {
    int tempo;
    int horas, minutos, segundos;
    printf("Digite um tempo em segundos: \n");
    scanf("%d", &tempo);
    // Calcula as horas inteiras
    horas = tempo / 3600;
    // O que sobra das horas vira minutos (operador % pega o resto)
    minutos = (tempo % 3600) / 60;
    // 3. O que sobra dos minutos são os segundos
    segundos = tempo % 60;
    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
    return 0;
}