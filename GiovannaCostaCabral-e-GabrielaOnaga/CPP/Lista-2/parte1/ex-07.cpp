/*
Data: 06/06/2026
Autores: Gabriela Onaga e Giovanna Costa
Descrição: 
*/


#include <iostream>
using namespace std;

// Função para verificar a ordem
string verificarOrdem(int v[]) {
    bool crescente = true;
    bool decrescente = true;

    // Verificando as condições
    for(int i = 0; i < 4; i++) {
        if(v[i] > v[i+1]) {
            crescente = false;
        }
        if(v[i] < v[i+1]) {
            decrescente = false;
        }
    }

    if(crescente) return "Crescente";
    else if(decrescente) return "Decrescente";
    else return "Nao ordenado";
}

int main() {
    int numeros[5];

    cout << "Digite 5 numeros:\n";
    for(int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    // Mostrando o resultado da função
    cout << verificarOrdem(numeros) << endl;

    return 0;
}