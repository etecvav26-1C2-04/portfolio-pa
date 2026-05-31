/*
Data: 30/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Finalidade: Ler 15 números em um vetor.
Contar e exibir:
Quantidade de pares
Quantidade de ímpares
*/

#include <iostream>
using namespace std;

bool impar (int n) {
    return n % 2 !=0;
    }

int main() {
    int v[15];
    int qtdPares = 0, qtdImpares = 0;

    // aq leu os 15 números
    for (int i = 0; i < 15; i++) {
        cout << "Digite v[" << i +1<< "]: ";
        cin  >> v[i];
    }
    
    for (int i = 0; i < 15; i++) {
        if (impar(v[i]))
            qtdImpares++;
        else
            qtdPares++;
    }

    cout << "\nQuantidade de pares: "   << qtdPares    << endl;
    cout << "Quantidade de ímpares: " << qtdImpares  << endl;

    return 0;
}
