"""
Autor: Vitória Kishimoto e Sofia Franzini
Data: 11/08/2026
Descrição: Descrição: Lê 10 números e conta quantos são positivos, negativos e zeros.
"""

contador = 1
positivo = 0
negativo = 0
zeros = 0

while contador <= 10:
    numero = int(input(f"Digite o {contador}º número: "))

    if numero > 0:
        positivo += 1
    elif numero < 0:
        negativo += 1
    else:
        zeros += 1

    contador += 1

print(f"Positivos: {positivo}")
print(f"Negativos: {negativo}")
print(f"Zeros: {zeros}")
