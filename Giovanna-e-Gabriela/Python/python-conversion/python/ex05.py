"""
    Autor: Giovanna Cabral e Gabriela Onaga
    Data: 12/08/2026
    Descrição: Lê um número de 1 a 10 e exibe sua tabuada, validando a entrada.
"""

num = int(input("Digite um numero de 1 a 10: "))
contador = 1

while num < 1 or num > 10:
    num = int(input("Digite um numero de 1 a 10: "))

while contador <= 10:
    print(f"{num} x {contador} = {num * contador}")
    contador += 1
