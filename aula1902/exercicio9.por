//Cálculo do valor final de um produto com desconto
//o Solicite o preço original de um produto e o percentual de desconto
//aplicado.
//o Exiba o valor final após o desconto, usando a fórmula:

programa {
  funcao inicio() {
    real preco, percentual
    escreva("Digite o preco original do produto: ")
    leia(preco)
    escreva("Digite o percentual % sem colocar o sinal, ex: 5. para cinco porcento: ")
    leia(percentual)
    real valorFinal = preco - (preco * percentual/100)
    escreva("O valor com desconto é: ", valorFinal)  
  }
}
