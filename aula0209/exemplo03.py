valor_pizza = 49.90
desconto = 0.10
valor_do_desconto = valor_pizza * desconto
valor_com_desconto = valor_pizza - valor_do_desconto

print(f"Valor da Pizza    R$ {valor_pizza:6.2f}")
print(f"Valor do Desconto R$ {valor_do_desconto:6.2f}")
print(f"Valor a Pagar     R$ {valor_com_desconto:6.2f}")