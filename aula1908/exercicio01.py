print("Digite 04 notas bimestrais")
n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))
n3 = float(input("Digite a terceira nota: "))
n4 = float(input("Digite a quarta nota: "))
media = (n1 + n2 + n3 + n4) / 4
if media >= 6:
    print("Aprovado com media: ", media)
else:
    print("Reprovado com media: ", media)