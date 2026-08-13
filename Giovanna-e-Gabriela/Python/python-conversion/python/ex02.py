"""
    Autor: Giovanna Cabral e Gabriela Onaga
    Data: 10/08/2026
    Descrição: Lê dois números inteiros e informa qual é o maior ou se são iguais.
"""

num1 = int(input("Digite o primeiro numero: "))
num2 = int(input("Digite o segundo numero: "))


if num1 > num2:
     print(f"O maior numero e: {num1}")
     
elif num2 > num1:
    print(f"O maior numero e: {num2}")

else:
    print(f"Os numeros sao iguais.")

