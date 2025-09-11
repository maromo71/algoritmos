#include <stdio.h>
//Biblioteca para manipular STRINGS
#include <string.h>
int main(void) {
    char senha[21];
    char usuario[21];
    fflush(stdin);
    printf("Digite o usuario e senha:\n");
    scanf("%s %s", usuario, senha);
    //a funcao strcmp compara duas string. Quando iguais retorna 0
    if (strcmp(senha, "admin123")==0) {
        printf("Bem vindo %s! Nivel de acesso Adminsitrador\n", usuario);
        return 0;
    }
    if (strcmp(senha, "user456")==0) {
        printf("Bem vindo %s! Nivel de acesso Usuario Padrao\n", usuario);
        return 0;
    }
    printf("Senha incorreta\n");
    return 0;
}