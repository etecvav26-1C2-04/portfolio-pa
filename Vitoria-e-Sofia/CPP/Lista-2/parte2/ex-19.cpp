/*
Data: 08/06/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: Ler 10 números.
Separar:
Pares em um vetor
Ímpares em outro vetor
Ordenar os dois vetores.
Somar os elementos e armazenar em um terceiro vetor.
Exibir todos os vetores.
*/

#include <iostream>

using namespace std;

int main() {
	
	//Vetores e variaveis
	int num[10];
	int pares[10];
	int impares[10];
	int Vpares=0;
	int Vimpares=0;
	int soma[10];
	int Vsoma=0;
	int menor;
	
	
//Ler os 10 nums
for(int i = 0; i < 10; i++){
    cout << "Digite um numero " << i + 1 << ": ";
    cin >> num[i];
}

	
	//Separar os pares e impares
for(int i = 0; i < 10; i++){

    if(num[i] % 2 == 0){
        pares[Vpares] = num[i];
        Vpares++;
    }
    else{
        impares[Vimpares] = num[i];
        Vimpares++;
    }
}


//Ordenar os vetores
	for(int i = 0; i < Vpares; i++){
    soma[i] = pares[i] + impares[i];
    

if(Vpares < Vimpares)
    menor = Vpares;
else
    menor = Vimpares;
    
    
//Soma dos elementos pro terceiro vetor
for(int i = 0; i < menor; i++){
    soma[i] = pares[i] + impares[i];
}

Vsoma = menor;
}

//Exibindo os vetores
cout << "\n\nPares: ";

for(int i = 0; i < Vpares; i++){
    cout << pares[i] << " ";
}
cout << "\nImpares: ";
for(int i = 0; i < Vimpares; i++){
	cout << impares[i] <<" ";
}
cout << "\nSoma: ";
for(int i =0; i < Vsoma; i++){
	cout<< soma[i]<< " ";
}

return 0; 
}
