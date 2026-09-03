"""
Desenvolva o fluxograma para um programa que leia o valor total de 
uma conta em um restaurante, calcule a taxa de serviço (10%) e exiba:
1. O valor da taxa de serviço;
2. O valor total final a ser pago.
"""
valor_conta = float(input("Digite o valor da conta do restaurante: "))
taxa_servico = valor_conta * 0.10
total_final = valor_conta + taxa_servico
print(f"A taxa de servico    R$ {taxa_servico:.2f}")
print(f"Total Final da Conta R$ {total_final:.2f}")
