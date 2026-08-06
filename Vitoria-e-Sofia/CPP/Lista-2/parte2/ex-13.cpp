/* Data: 08/06/2026
Autores: Vitória Kishimoto e Sofia Franzini
Finalidade: Ler 20 letras em um vetor.
Ler uma letra e contar quantas vezes ela aparece.
*/

#include <iostream>
using namespace std;

int main()
{
    char letras[20];
    char busca;
    int contador = 0;

    // Ler as 20 letras
    for(int i = 0; i < 20; i++)
    {
        cout << "Digite uma letra: ";
        cin >> letras[i];
    }

    // Ler a letra que será procurada
    cout << "Digite a letra que deseja contar: ";
    cin >> busca;

    // Contar quantas vezes a letra aparece
    for(int i = 0; i < 20; i++)
    {
        if(letras[i] == busca)
        {
            contador++;
        }
    }

    // Mostrar resultado
    cout << "A letra " << busca << " apareceu "
         << contador << " vezes.";

    return 0;
}
