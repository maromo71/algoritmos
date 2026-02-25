
# Guia Definitivo: Lógica de Programação e Algoritmos em C

**Material Didático Unificado**

## Introdução: O "Metal" da Programação

Aprender C não é apenas decorar comandos; é entender como o computador funciona por dentro. Diferente de linguagens modernas que escondem a sujeira, em C você gerencia a memória, os tipos de dados e o fluxo do processador.

Aqui, **0 é Falso** e **qualquer outra coisa é Verdadeiro**.

-----

## Parte 1: Entrada e Saída (Falando com a Máquina)

### 1\. `printf` (Saída)

Mostra dados na tela. Use máscaras para dizer o tipo do dado.

  * `%d` ou `%i`: Inteiros
  * `%.2f`: Reais (com 2 casas decimais)
  * `%c`: Caractere
  * `%s`: String (Texto)

### 2\. `scanf` (Entrada)

Lê do teclado. **Regra de Ouro:** Use o `&` antes da variável para dizer *onde* na memória guardar o dado.

**O Perigo do Buffer:**
Quando você digita um número e dá ENTER, o `\n` (enter) sobra na memória. A próxima leitura de texto vai "comer" esse enter.
**Solução:** Use um espaço antes do `%c`.

```c
int idade;
char sexo;
scanf("%d", &idade);
scanf(" %c", &sexo); // O espaço antes do %c limpa o lixo
```

### 3\. Strings (Texto)


```c
char nome[50];
gets(nome); // Variável, Tamanho, Entrada Padrão
```

-----

## Parte 2: Tomada de Decisões

### 1\. `if` / `else`

Cuidado com a confusão entre `=` (atribuição) e `==` (comparação).

### 2\. O Operador Ternário (`? :`)

Uma forma elegante de fazer um `if-else` simples em uma linha. Útil para atribuições rápidas.
**Sintaxe:** `(Condição) ? Valor_Se_Verdadeiro : Valor_Se_Falso;`

```c
// Exemplo:
int idade = 18;
printf("Status: %s\n", (idade >= 18) ? "Maior de Idade" : "Menor de Idade");

// Exemplo de Atribuição:
int maior = (a > b) ? a : b;
```

### 3\. `switch-case`

Ideal para menus. Lembre-se do `break`, ou ele executará todos os casos abaixo (efeito cascata).

-----

## Parte 3: Repetições (Loops)

1.  **`while`:** Testa antes. Pode não rodar nenhuma vez.
2.  **`do-while`:** Testa depois. Roda pelo menos uma vez (Perfeito para Menus).
3.  **`for`:** Controle total (Início; Condição; Incremento). Ideal para contagens.

-----

## Parte 4: Metodologia (Teste de Mesa)

Não tente adivinhar. Simule a CPU no papel.
Crie uma tabela com colunas para cada variável e execute linha a linha.

| Linha | Var A | Var B | Condição | Saída |
| :--- | :--- | :--- | :--- | :--- |
| 1 | 0 | ? | - | - |
| 2 | 1 | 5 | 1 \< 5 (V) | Entra no loop |

-----

# Compêndio de Exercícios Resolvidos (1 a 20)

Abaixo, a solução comentada para os desafios propostos. Estude a lógica utilizada.

## Nível Básico: Sintaxe e Matemática

### 01\. Etiqueta Formatada

```c
#include <stdio.h>
int main() {
    float preco = 45.50;
    printf("Produto: Mouse Gamer\n");
    printf("Preco..: R$ %8.2f\n", preco); // %8.2f alinha à direita ocupando 8 espaços
    return 0;
}
```

### 02\. Troca de Valores (Swap)

```c
#include <stdio.h>
int main() {
    int a = 10, b = 20, temp;
    temp = a; a = b; b = temp; // A lógica clássica do copo vazio
    printf("A: %d, B: %d\n", a, b);
    return 0;
}
```

### 03\. Conversor de Temperatura

```c
#include <stdio.h>
int main() {
    float c, f;
    printf("Celsius: "); scanf("%f", &c);
    // Atenção: 9.0 para garantir divisão de reais
    f = (c * 9.0/5.0) + 32; 
    printf("Fahrenheit: %.1f\n", f);
    return 0;
}
```

### 04\. Par ou Ímpar

```c
#include <stdio.h>
int main() {
    int n;
    printf("Numero: "); scanf("%d", &n);
    // Usando Ternário para decidir
    printf("Resultado: %s\n", (n % 2 == 0) ? "Par" : "Impar");
    return 0;
}
```

### 05\. O Maior de 3

```c
#include <stdio.h>
int main() {
    int a=10, b=50, c=30;
    if (a > b && a > c) printf("A maior");
    else if (b > c) printf("B maior");
    else printf("C maior");
    return 0;
}
```

### 06\. Vogais (Switch)

```c
#include <stdio.h>
int main() {
    char l = 'e';
    switch(l) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vogal\n"); break;
        default: printf("Consoante/Outro\n");
    }
    return 0;
}
```

### 07\. Tabuada (For)

```c
#include <stdio.h>
int main() {
    int n = 7, i;
    for(i=1; i<=10; i++) printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}
```

### 08\. Validação de Senha (Do-While)

```c
#include <stdio.h>
int main() {
    int senha;
    do {
        printf("Senha: "); scanf("%d", &senha);
    } while(senha != 1234);
    printf("Logado!\n");
    return 0;
}
```

### 09\. Fatorial

```c
#include <stdio.h>
int main() {
    int n=5, fat=1, i;
    for(i=1; i<=n; i++) fat *= i; // fat = fat * i
    printf("Fat: %d\n", fat);
    return 0;
}
```

### 10\. Somar até digitar 0

```c
#include <stdio.h>
int main() {
    int soma=0, n;
    printf("Digite (0 sai): "); scanf("%d", &n);
    while(n != 0) {
        soma += n;
        scanf("%d", &n);
    }
    printf("Total: %d\n", soma);
    return 0;
}
```

## Nível Intermediário: Lógica Aplicada

### 11\. Calculadora de IMC

```c
#include <stdio.h>
int main() {
    float p, a, imc;
    printf("Peso/Altura: "); scanf("%f %f", &p, &a);
    imc = p / (a * a);
    printf("IMC: %.2f\n", imc);
    if(imc < 18.5) printf("Abaixo");
    else if(imc < 25) printf("Normal");
    else printf("Acima");
    return 0;
}
```

### 12\. Ano Bissexto

```c
#include <stdio.h>
int main() {
    int ano;
    printf("Ano: "); scanf("%d", &ano);
    if((ano%4==0 && ano%100!=0) || (ano%400==0)) printf("Bissexto");
    else printf("Normal");
    return 0;
}
```

### 13\. Bhaskara

```c
#include <stdio.h>
#include <math.h> // Linkar com -lm no Linux
int main() {
    double a=1, b=-3, c=-10, d, x1, x2;
    d = b*b - 4*a*c;
    if(d < 0) printf("Sem raiz real");
    else {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("x1=%.2lf, x2=%.2lf", x1, x2);
    }
    return 0;
}
```

### 14\. Verificar Primo (Com Ternário)

```c
#include <stdio.h>
int main() {
    int n, i, primo = 1; // Assumimos que é primo (flag)
    printf("Num: "); scanf("%d", &n);
    if (n <= 1) primo = 0;
    for(i=2; i<n; i++) {
        if(n % i == 0) { primo = 0; break; }
    }
    printf("%s\n", (primo) ? "E Primo" : "Nao e Primo");
    return 0;
}
```

### 15\. Fibonacci

```c
#include <stdio.h>
int main() {
    int n, t1=0, t2=1, prox, i;
    printf("Termos: "); scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("%d, ", t1);
        prox = t1 + t2;
        t1 = t2; t2 = prox;
    }
    return 0;
}
```

### 16\. Contagem Regressiva

```c
#include <stdio.h>
int main() {
    int i;
    for(i=10; i>=0; i--) printf("%d...\n", i);
    printf("FOGO!\n");
    return 0;
}
```

### 17\. Adivinhação

```c
#include <stdio.h>
int main() {
    int segredo=42, chute;
    do {
        printf("Chute: "); scanf("%d", &chute);
        if(chute > segredo) printf("Menos...\n");
        if(chute < segredo) printf("Mais...\n");
    } while(chute != segredo);
    printf("Acertou!");
    return 0;
}
```

### 18\. Quadrado de Asteriscos (Loops Aninhados)

```c
#include <stdio.h>
int main() {
    int n=5, i, j;
    for(i=0; i<n; i++) {       // Linhas
        for(j=0; j<n; j++) {   // Colunas
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

### 19\. Caixa Eletrônico (Menu Persistente)

```c
#include <stdio.h>
int main() {
    int op; float saldo=1000, v;
    do {
        printf("\nSaldo: %.2f\n1.Saque 2.Deposito 3.Sair: ", saldo);
        scanf("%d", &op);
        switch(op) {
            case 1: 
                printf("Valor: "); scanf("%f", &v);
                (v <= saldo) ? saldo-=v : printf("Saldo Insuficiente!");
                break;
            case 2:
                printf("Valor: "); scanf("%f", &v);
                saldo += v; break;
            case 3: printf("Saindo..."); break;
            default: printf("Invalido");
        }
    } while(op != 3);
    return 0;
}
```

### 20\. Inversor de Número (Matemática)

```c
#include <stdio.h>
int main() {
    int n, inv=0;
    printf("Num: "); scanf("%d", &n); // Ex: 123
    while(n > 0) {
        inv = inv * 10 + (n % 10); // Desloca inv pra esquerda e soma o ultimo digito de n
        n /= 10; // Remove ultimo digito de n
    }
    printf("Inverso: %d", inv);
    return 0;
}
```

-----

# Desafios Nível Boss (Sem Respostas)

**Estes exercícios exigem pesquisa sobre Vetores (Arrays), Matrizes e Strings.**

21. **Bubble Sort:** Leia 10 números em um vetor e ordene-os em ordem crescente trocando posições.
22. **Palíndromo:** Verifique se uma palavra é igual de trás para frente (ex: "ARARA").
23. **Matriz Identidade:** Gere uma matriz N x N onde a diagonal principal é 1 e o resto é 0.
24. **Decimal para Binário:** Converta um número inteiro para binário usando divisões sucessivas por 2 (guarde os restos em um vetor).
25. **Validador de CPF:** Leia 9 dígitos e calcule o primeiro dígito verificador usando a regra da Receita Federal.
26. **Estatística de Turma:** Em um vetor de notas, ache a média, a maior nota, a menor nota e quantos ficaram acima da média.
27. **Criptografia de César:** Desloque cada letra de uma frase 3 posições no alfabeto.
28. **Triângulo de Floyd:** Imprima um triângulo retângulo com números sequenciais (1, 2 3, 4 5 6...).
29. **Interseção de Conjuntos:** Leia dois vetores e crie um terceiro apenas com os números que aparecem nos dois.
30. **Jogo da Velha Completo:** Crie uma matriz 3x3 jogável para dois usuários, verificando vitória nas linhas, colunas e diagonais.