/*
Data: 07/06/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: Leia 20 letras em um vetor.
Contar as vogais ( a, e, i, o, u)
Armazenar em um vetor de 5 posições e exibir.
*/

#include <iostream>

using namespace std;

int main() {
	
	
	//letras do vetor
	char letras[20];
	int vogais[5} = { 0}; //armazena 5 posições
	
	for(int i = 0; i < 20; i++){
    cout << "Digite uma letra " << i+1 << ": ";
    cin >> letras[i];
}

//vezes que a vogal apareceu

for(int i = 0; i < 20; i++){
    

if(letras[i] == 'a'){
    vogais[0]++;
}

if(letras [i]== 'e'){
	vogais[1]++;
	
}

if(letras[i] == 'i'){
    vogais[2]++;
}

if(letras[i] == 'o'){
    vogais[3]++;
}

if(letras[i] == 'u'){
    vogais[4]++;
}
}

//contagem das vezes que apareceu
cout << "a: " << vogais[0] << "\n\n";
cout << "e: " << vogais[1] << "\n\n";
cout << "i: " << vogais[2] << "\n\n";
cout << "o: " << vogais[3] << "\n\n";
cout << "u: " << vogais[4] << "\n\n";

return 0;
}
