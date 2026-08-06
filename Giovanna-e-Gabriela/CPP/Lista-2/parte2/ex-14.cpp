/*
Data: 31/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Finalidade:  Ler 10 nomes em um vetor.
Ordenar em ordem decrescente e exibir em ordem crescente
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nomes[10];
    string aux;
    
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Digite um nome: ";
        cin >> nomes[i];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(nomes[i] > nomes[j])
            {
                aux = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = aux;
            }
        }
    }

    cout << "\nNomes em ordem crescente:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << nomes[i] << endl;
    }

    return 0;
}
