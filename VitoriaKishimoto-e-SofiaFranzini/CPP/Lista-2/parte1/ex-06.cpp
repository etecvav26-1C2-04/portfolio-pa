#include <iostream>
using namespace std;

// Função que recebe um número e retorna o dia da semana
string diaSemana(int num) {
    switch(num) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terca-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sabado";
        default: return "Numero invalido";
    }
}

int main() {
    int numero;

    cout << "Digite um numero de 1 a 7: ";
    cin >> numero;

    // Chamando a função e mostrando o resultado
    cout << "Dia da semana: " << diaSemana(numero) << endl;

    return 0;
}
