<link rel="stylesheet" href="estilo.css">

> Caros Alunos,
Criei uma nova lista com 10 enunciados inéditos, usando o mesmo padrão anterior. Todos destacam de forma nítida os quatro elementos do laço: **inicialização**, **condição de parada**, **corpo da repetição** e **atualização** (incremento/decremento/nova leitura).

---

### Bloco 1: Repetições com limites definidos (ideais para introdução ao laço com contador / `for`)


1. **Múltiplos de 5**
Construa um fluxograma que inicialize uma variável contadora e exiba na tela todos os múltiplos de 5 no intervalo de **5 a 50** (5, 10, 15, ..., 50), incrementando o valor a cada iteração.
2. **Cálculo de potência por multiplicações sucessivas**
Construa um fluxograma que leia um número base e exiba o resultado dele multiplicado sucessivamente por ele mesmo **3 vezes** (ou seja, execute um laço de 3 repetições acumulando o produto), mostrando o resultado final.
3. **Total de itens comprados**
Construa um fluxograma que inicialize uma variável acumuladora em zero, solicite o preço de **6 produtos** sucessivamente (um por vez dentro do laço) e, ao término das repetições, exiba o valor total da compra.
4. **Contagem de pessoas maiores de idade**
Construa um fluxograma que leia a idade de **8 pessoas**. A cada repetição, verifique se a pessoa tem 18 anos ou mais e incremente um contador de maiores. Ao final das 8 leituras, mostre a quantidade de pessoas maiores de idade encontradas.
5. **Exibição de sequência decrescente de 5 em 5**
Construa um fluxograma que inicie um contador em **50**, exiba o número na tela e subtraia 5 a cada passo, repetindo o processo enquanto o valor for maior ou igual a **0**.
6. **Média de temperatura semanal**
Construa um fluxograma que receba a temperatura medida ao longo de **7 dias** (uma leitura por iteração), some as temperaturas a cada passo e, após sair do laço, calcule e exiba a temperatura média da semana.

---

### Bloco 2: Repetições condicionadas a sentinela ou evento (ideais para o laço condicional / `while`)

7. **Validação de nota escolar**
Construa um fluxograma que solicite ao usuário uma nota entre **0 e 10**. Enquanto o valor digitado for menor que 0 ou maior que 10, o fluxograma deve exibir uma mensagem de erro e solicitar a leitura novamente. Quando o valor for válido, encerre exibindo a nota confirmada.
8. **Cofrinho: meta de economia**
Construa um fluxograma que inicialize o saldo de uma economia em **R$ 0,00** e defina a meta em **R$ 100,00**. O sistema deve solicitar sucessivos depósitos (valores informados pelo usuário) e somá-los ao saldo enquanto este for menor que 100. Ao atingir ou superar a meta, encerre e mostre o saldo final poupado.
9. **Multiplicador contínuo até sentinela negativa**
Construa um fluxograma que leia um número inicial. Enquanto o número informado for **maior ou igual a zero**, o fluxo deve exibir o dobro desse número e solicitar um novo número. O programa deve encerrar assim que um número negativo for digitado.
10. **Confirmação de saída por caractere**
Construa um fluxograma que execute a leitura de um valor qualquer e pergunte ao usuário: *"Deseja continuar? (S/N)"*. Enquanto a resposta for igual a **"S"** (ou **"s"**), o laço continua pedindo novos valores; caso contrário, encerra e exibe a mensagem **"Operação finalizada"**.