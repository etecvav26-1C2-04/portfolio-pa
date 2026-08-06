#include <iostream>
using namespace std;

// Função que calcula a área do círculo
double areaCirculo(double raio) {
    return 3.14 * raio * raio; // fórmula: πr²
}

int main() {
    double raio, soma = 0;

    cout << "Digite o raio de 5 circulos:\n";

    for(int i = 0; i < 5; i++) {
        cin >> raio;

        // Somando as áreas usando a função
        soma += areaCirculo(raio);
    }

    cout << "Soma das areas: " << soma << endl;

    return 0;
}
