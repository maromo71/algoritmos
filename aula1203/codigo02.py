# Escreva um programa para calcular o estoque médio,
# onde Estoque Médio = (Quantidade Mínima + Quantidade
# Máxima) / 2.

qtd_maxima = int(input("Digite a quantidade maxima de pecas: "))
qtd_minima = int(input("Digite a quantidade minima de pecas: "))
est_medio = (qtd_maxima + qtd_minima) /2

print("Estoque medio da loja: ", est_medio)