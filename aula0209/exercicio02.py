"""
Uma loja concede um desconto promocional de 15% apenas para compras 
cujo valor total seja superior a R$ 200,00. 
Construa um fluxograma que leia o valor da compra, 
aplique o desconto quando devido e apresente o
valor final a pagar
"""
valor_total = float(input("Digite o valor total da compra: "))
if valor_total > 200:
    desconto = valor_total * 0.15
    valor_final = valor_total - desconto
else:
    valor_final = valor_total

print(f"Valor total final R$ {valor_final:.2f}")