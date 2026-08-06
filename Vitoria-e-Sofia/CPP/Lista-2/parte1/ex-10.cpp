#include <iostream>
using namespace std;

// Função para contar vogais
int contarVogais(string nome) {
    int cont = 0;

    for(int i = 0; i < nome.length(); i++) {
        char c = tolower(nome[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }

    return cont;
}

// Função para contar consoantes
int contarConsoantes(string nome) {
    int cont = 0;

    for(int i = 0; i < nome.length(); i++) {
        char c = tolower(nome[i]);

        // Verifica se é letra e não é vogal
        if((c >= 'a' && c <= 'z') &&
           !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            cont++;
        }
    }

    return cont;
}

int main() {
    string nome;

    cout << "Digite seu nome completo: ";
    getline(cin, nome); // pega nome com espaço

    cout << "Quantidade de vogais: " << contarVogais(nome) << endl;
    cout << "Quantidade de consoantes: " << contarConsoantes(nome) << endl;

    return 0;
}
