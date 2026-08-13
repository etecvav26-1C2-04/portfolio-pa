"""
    Autor: Giovanna Cabral e Gabriela Onaga
    Data: 12/08/2026
    Descrição: Calcula a soma dos números pares de 1 até um número informado.
"""

num = int(input("Digite um numero inteiro positivo: "))
contador = 1
soma = 0

if num > 0:
    while contador <= num:
        if contador % 2 == 0:
            soma = soma + contador
        contador += 1

    print(f"Soma dos pares: {soma}")
else:
    print("Número Inválido.")
