"""
    Autor: Gabriela Onaga e Giovanna Costa 
    Data: 12/08/2026
    Descrição: Simula um sistema simples de senha com até 3 tentativas.
"""

senhaCorreta = 1234
tentativas = 1
limiteTentativas = 3

senha = int(input("Digite a senha: "))

while senha != senhaCorreta and tentativas < limiteTentativas:
    senha = int(input("Senha incorreta. Tente novamente: "))
    tentativas += 1

if senha == senhaCorreta:
    print("Acesso liberado.")
else:
    print("Acesso bloqueado.")
    
