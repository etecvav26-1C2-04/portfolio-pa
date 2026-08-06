/*
Data: 19/05/2026
Autores: Sofia Franzini e Vitória Kishimoto
Finalidade:  Ler um número inteiro.
Exibir a soma dos números ímpares até o número lido.
Criar uma função que retorne verdadeiro para números ímpares.
*/

#include <iostream>
using namespace std;

bool impar (int n) {
    return n % 2 !=0;
    }
    
int main() {
    int numero, soma=0;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    for (int i=1; i <= numero; i++) {
        if (impar (i)) {
            soma += i;
        }
    }
   cout << "A soma dos numeros impares ate " << numero << endl <<"eh de: " << soma << endl;
   
   return 0;
}
