/*
Data: 06/06/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: Leia 15 números em um vetor.
Exibir o índice:
Do menor valor
Do maior valor
*/

#include <iostream>

using namespace std;

int main(){
	
	//vetores
	int vetor[15];
    
	//leitura dos números do vetor
	for (int i = 0; i < 15; i++) {
    cout << "Digite um numero " << i+1<< ": ";
    cin >> vetor[i];
}

//variaveis
    int menorV = 0;
    int maiorV = 0;

//maior ou menor número
    for (int i = 1; i < 15; i++) {
        if (vetor[i] < vetor[menorV]) {
            menorV = i;
        }

        if (vetor[i] > vetor[maiorV]) {
		maiorV = i;
        }
    }
    
    
//Exibição do indice do menor e maior valor
    cout << "\nIndice do menor valor: " << menorV << "( "<< vetor[menorV] << ")" << "\n\n";
    cout << "Indice do maior valor: " << maiorV << "(" << vetor[maiorV] << ")" <<"\n\n";
    
return 0;
}

}
