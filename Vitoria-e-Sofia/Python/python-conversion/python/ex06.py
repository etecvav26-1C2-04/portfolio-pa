"""
Autor: Vitória Kishimoto e Sofia Franzini
Data: 10/08/2026
Descrição: Calcula a média de notas válidas entre 0 e 10 usando while.
"""

nota = float(input("Digite uma nota entre 0 e 10: "))
soma = 0
quantidade = 0

while nota >= 0 and nota <= 10:
    soma = soma + nota
    quantidade += 1

    nota = float(input("Digite outra nota entre 0 e 10: "))

if quantidade > 0:
    print("Média das notas:", soma / quantidade)
else:
    print("Nenhuma nota válida foi digitada.")
