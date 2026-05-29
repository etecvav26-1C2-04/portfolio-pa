/*
Data: 28/05/2026
Autores: Vitória Kishimoto e Sofia Franzini 
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

    // aq leu os 15 números
    for (int i = 1; i < 15; i++) {
        cout << "Digite v[" << i +1<< "]: ";
        cin  >> v[i];
    }
