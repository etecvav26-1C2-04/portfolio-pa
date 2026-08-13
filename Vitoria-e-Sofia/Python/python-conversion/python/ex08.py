"""
    Autor: Vitória Kishimoto e Sofia Franzini
    Data: 11/08/2026
    Descrição: Verifica se um número inteiro positivo é primo.
"""

numero = int(input("Digite um numero inteiro positivo: "))

if numero > 0:
    divisor = 1
    quantidadeDivisores = 0

    while divisor <= numero:

        if numero % divisor == 0:
            quantidadeDivisores += 1

        divisor += 1

    if quantidadeDivisores == 2:
        print("O numero e primo.")
    else:
        print("O numero nao e primo.")

else:
    print("Numero invalido.")
