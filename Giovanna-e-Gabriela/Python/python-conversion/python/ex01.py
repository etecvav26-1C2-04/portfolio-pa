"""
    Autores: Gabriela Onaga e Giovanna Costa
    Data: 06/08/2026
    Descrição: Lê um número inteiro e informa se ele é positivo, negativo ou zero.
"""

num = int(input("Digite um número inteiro: "))

if num > 0:
    print("O número é positivo.")
elif num < 0:
    print("O número é negativo.")
else:
    print("O número é zero.")
