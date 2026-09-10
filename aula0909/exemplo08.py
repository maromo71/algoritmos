'''
Elabore um fluxograma que solicite números 
ao usuário continuamente. A repetição
deverá continuar enquanto o número 
informado for diferente de zero. Ao final, 
apresente a soma de
todos os números informados, desconsiderando o zero
'''
numero = 1
soma = 0
while numero!=0:
    numero = int(input("Digite um numero, ou 0 para acabar:"))
    soma = soma + numero

print(f"A soma eh {soma}")
