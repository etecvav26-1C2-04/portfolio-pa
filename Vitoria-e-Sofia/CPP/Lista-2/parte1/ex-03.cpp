/* 
Data: 24/05/2026
Autores: Vitória Kishimoto e Sofia Franzini
Finalidade:Ler o sexo e a altura.
Calcular o peso ideal. Criar uma função para cada caso.
*/

#include <iostream>
using namespace std;

float pesoMasculino(float altura)
{
    return 72.7 * altura - 58;
}

float pesoFeminino(float altura)
{
    return 62.1 * altura - 44.7;
}

int main()
{
    float altura, peso;
    string sexo;

    cout << "Digite seu sexo: ";
    cin >> sexo;

    cout << "Digite sua altura: ";
    cin >> altura;

    if (sexo == "Masculino")
    {
        peso = pesoMasculino(altura);
    }
    else
    {
        peso = pesoFeminino(altura);
    }

    cout << "Peso ideal: " << peso << endl;

    return 0;
}
