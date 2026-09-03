"""
Construa um fluxograma que receba um número inteiro qualquer e determine 
se ele é Par ou Ímpar (Dica: utilize a operação de resto da divisão 
inteira: numero % 2 == 0)
"""
numero = int(input("Digite um numero inteiro: "))
if numero % 2 == 0:
    print(f"Numero {numero} eh par")
else:
    print(f"Numero {numero} eh impar")
