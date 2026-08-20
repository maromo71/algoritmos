print("Custo e Total Consumido de Combustível")
distancia = float(input("Digite a distancia a ser percorrida: "))
consumo = float(input("Digite o consumo medio do seu veiculo: "))
preco_litro = 3.61
total_litros = distancia / consumo 
custo = total_litros * preco_litro
print("Custo da viagem: ", custo, " Total de litros consumido: ", total_litros)

