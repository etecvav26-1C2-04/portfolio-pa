#include <iostream>
using namespace std;

int main() {
    int v[10];

    // 1) Ler os 10 números
    for (int i = 0; i < 10; i++) {
        cout << "Digite v[" << i << "]: ";
        cin  >> v[i];
    }

    // 2) Substituir negativos por zero
    for (int i = 0; i < 10; i++) {
        if (v[i] < 0)
            v[i] = 0;
    }

    // 3) Exibir o vetor
    cout << "\nVetor: ";
    for (int i = 0; i < 10; i++) {
        cout << v[i] << "  ";
    }
    cout << endl;

    return 0;
}
