/*
Data: 29/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Finalidade: Ler 10 números em um vetor.
Substituir números negativos por zero.
Exibir o vetor.
*/

#include <iostream>
using namespace std;

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite v[" << i << "]: ";
        cin  >> v[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (v[i] < 0)
            v[i] = 0;
    }

    cout << "\nVetor: ";
    for (int i = 0; i < 10; i++) {
        cout << v[i] << "  ";
    }
    cout << endl;

    return 0;
}
