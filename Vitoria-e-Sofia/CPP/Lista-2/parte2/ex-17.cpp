/*
Data: 06/06/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: Leia 10 números em um vetor.
Crie outro vetor com os sinais invertidos.
Exibir a soma dos valores positivos dos dois vetores.
*/

#include <iostream>

using namespace std;

int main(){
	
	//vetores e variaveis
	int vetor1[10];
	int vetor2[10];
	int soma=0;
	
	//Ler os números do vetor
		for (int i = 0; i < 10; i++) {
			cout << "Digite um numero " << i+1 << ": ";
			cin >> vetor1[i];
			
			   vetor2[i] = -vetor1[i];
		}
		
		//outro vetor
		   for (int i = 0; i < 10; i++) {
        if (vetor1[i] > 0) {
            soma += vetor1[i];
        }

        if (vetor2[i] > 0) {
            soma += vetor2[i];
        }
    }
    
    
//Exibir a soma positiva os vetores
    cout << "\nSoma dos valores positivos: " << soma << "\n\n";

    return 0;
}
		
		
		
