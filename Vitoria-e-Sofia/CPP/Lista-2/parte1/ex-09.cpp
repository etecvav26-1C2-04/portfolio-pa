#include <iostream>
using namespace std;

// Função que substitui vogais por '*'
string substituirVogais(string palavra) {
    for(int i = 0; i < palavra.length(); i++) {
        char c = tolower(palavra[i]);

        // Verificando se é vogal
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            palavra[i] = '*';
        }
    }
    return palavra;
}

int main() {
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Chamando a função
    cout << "Resultado: " << substituirVogais(palavra) << endl;

    return 0;
}
