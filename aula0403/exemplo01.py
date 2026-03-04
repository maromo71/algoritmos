# float converte a entrada para numero real (casas decimais)
x = float(input("Digite o primeiro valor: "))
y = float(input("Digite o segundo valor: "))
z = float(input("Digite o terceiro valor: "))
media = (x + y + z) / 3
# {media:.2f}  a media sera apresentada em numero real com
# duas casas decimais
print(f"A média dos valores é: {media:.2f}")