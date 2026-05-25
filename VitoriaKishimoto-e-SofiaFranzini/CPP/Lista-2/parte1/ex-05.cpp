#include <iostream>
using namespace std;

bool palindromo(string palavra)
{
    int inicio = 0;
    int fim = palavra.length() - 1;
    
    while (inicio < fim)
    {
        if (palavra [inicio] != palavra [fim])
        {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() 
{
    string palavra;
    
    cout << "Digite uma palvra: ";
    cin >> palavra;
    
    if (palindromo (palavra))
    {
        cout << palavra << " é um palindromo." << endl;
    }
    else
    {
        cout << palavra << " nao é um palindromo." << endl;
    }

    return 0;
}
