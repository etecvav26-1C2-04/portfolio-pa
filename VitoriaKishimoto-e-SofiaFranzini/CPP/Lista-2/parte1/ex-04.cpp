/*
Data: 19/05/2026
Autores: Sofia Franzini e Vitória Kishimoto
Finalidade: Ler dois números inteiros e calcular:Adição, Subtração, Multiplicação e Divisão.
➡️ Criar uma função para cada operação.
*/

#include <iostream>
using namespace std;

int soma(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int multip(int n1, int n2)
{
    return n1 * n2;
}

// Como a função usa int, divisões com decimal perdem a parte depois da vírgula
int divisao(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Resultado da soma: "           << soma(num1, num2)   << endl;
    cout << "Resultado da subtracao: "      << sub(num1, num2)    << endl;
    cout << "Resultado da multiplicacao: "  << multip(num1, num2) << endl;
    cout << "Resultado da divisao: "        << divisao(num1, num2)<< endl;

    return 0;
}
