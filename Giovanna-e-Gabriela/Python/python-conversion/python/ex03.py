"""
    Autor: Giovanna Cabral e Gabriela Onaga
    Data: 11/08/2026
    Descrição: Lê um número inteiro positivo e exibe a contagem de 1 até esse número.
"""

num = int(input("Digite um número inteiro positivo: "))
contador = 1

if num > 0:
    while contador <= num:
        print(contador)
        contador += 1

else: 
    print("Numero invalido. Digite um valor positivo.") 
