"""
Uma empresa aplicará um reajuste salarial escalonado 
aos seus funcionários 
com base na tabela abaixo:
Faixa Salarial Atual Percentual de Reajuste
Até R$ 2.000,00   ==============>15%
De R$ 2.000,01 até R$ 5.000,00=> 10%
Acima de R$ 5.000,00 ============>5%
"""
salario = float(input("Digite o salario atual: "))
if salario <= 2000:
    reajuste = salario * 0.15
elif salario <= 5000:
    reajuste = salario * 0.10
else:
    reajuste = salario * 0.05

novo_sal = salario + reajuste

print(f"Novo salario R$ {novo_sal:.2f}")