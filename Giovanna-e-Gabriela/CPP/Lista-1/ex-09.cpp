/*
Data: 07/05/2026
Autores: Gabriela Onaga e Giovanna Costa
Descrição: Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número.
*/

#include <iostream>

using namespace std;

int main() {
    int limite;

    cout << "Digite um número entre 50 e 100: ";
    cin >> limite;

    if (limite < 50 || limite > 100) {
        cout << "Número inválido!" << "\n\n";
    } else {
        int numeroA = 0;
        int numeroB = 1;

        cout << "Sequência de Fibonacci:" << "\n\n";

        while (numeroA <= limite) {
            cout << numeroA << " ";

            int proximo = a + b;
            numeroA = numeroB;
            numeroB = proximo;
        }
    }

    return 0;
}
