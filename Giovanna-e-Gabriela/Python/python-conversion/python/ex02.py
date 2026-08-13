"""
    Autor: Giovanna Costa Cabral e Gabriela Onaga
    Data: 10/08/2026
    Descrição: Lê dois números inteiros e informa qual é o maior ou se são iguais.
"""

numero1 = float(input("Digite o primeiro numero: "))
numero2 = float(input("Digite o segundo numero: "))


if numero1 > numero2:
     print(f"O maior numero e: {numero1:g}")
     
elif numero2 > numero1:
    print(f"O maior numero e: {numero2:g}")

else:
    print(f"Os numeros sao iguais.")

