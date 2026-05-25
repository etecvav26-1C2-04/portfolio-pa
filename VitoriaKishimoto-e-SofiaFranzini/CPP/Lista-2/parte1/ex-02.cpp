/*
Data: 21/05/2026
Autores: Sofia Franzini e Vitória Kishimoto
Finalidade: Ler a base e o expoente; calcular a potência usando repetição;
Criar uma função para o cálculo.
*/

#include <iostream>
using namespace std;

int resultado (int base, int expoente) {
    
    int res=1;
    
    for (int i=1; i <= expoente;i++) {
        
    res = res * base;
    
    }
    return res;
}

int main() {
    int base, expoente;
    
    cout << "Digite a base: " << endl;
    cin >> base;
    
    cout << "Digite o expoente: " << endl;
    cin >> expoente;
    
    cout << "O valor da potencia eh " << resultado (base, expoente) << endl;

    return 0;
}
