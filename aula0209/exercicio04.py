"""
Elabore um fluxograma que leia dois números distintos (A e B) 
e determine qual deles é o Maior, exibindo o resultado formatado.
"""
a = int(input("Digite o valor de a: "))
b = int(input("Digite outro valor para b: "))
maior = a
if b > maior:
    maior = b
print(f"O maior valor eh {maior}")