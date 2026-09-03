"""
Crie um fluxograma para calcular o Índice de Massa Corporal 
(IMC= peso / (altura ** 2)) e exibir a classificação do
indivíduo:
IMC < 18,5: Abaixo do peso
18,5 <= IMC < 25: Peso normal
25 <= IMC < 30: Sobrepeso
Acima ou igual a 30: Obesidade
"""
peso = float(input("Digite o peso da pessoa: "))
altura = float(input("Digite a altura da pessoa, ex. 1.67: "))
imc = peso / altura ** 2

print(f"Seu imc calculado foi: {imc:.2f}")
if imc < 18.5:
    print("Situacao: Abaixo do peso")
elif imc < 25:
    print("Situacao: Peso normal")
elif imc < 30:
    print("Situacao: sobrepeso")
else:
    print("Situacao: Obesidade")

