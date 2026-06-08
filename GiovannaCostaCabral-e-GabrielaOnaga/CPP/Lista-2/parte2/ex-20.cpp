/*
Data: 08/06/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrião: Leia 10 números em um vetor.
Exibir o terceiro menor valor .
*/

#include <iostream>

using namespace std;

int main(){

//Define os vetores
int vetor[10];

// Lê o número
for(int i = 0; i < 10; i++){
	cout << "Digite um número " << i+1 << ": ";
	cin >> vetor[i];
	}

//Ordena para encontrar o menor valor de três números
   for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){

            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }

        }
    }

//Resultado          
        cout << "\n\nTerceiro menor valor: " << vetor[2];
        
        return 0;
        
    }
