"""
    Autores: Vitória Kishimoto e Sofia Franzini
    Data: 10/08/26
    Descrição: Lê um número inteiro positivo e exibe a contagem de 1 até esse número.
"""

numero= int(input("Digite um número inteiro positivo: "))
contador= 1

if numero > 0 :
    while contador <= numero:
        print (contador)
        contador += 1

else : 
    print ("Número inválido. Digite um valor positivo")
    
