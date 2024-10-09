/*Elabore um fluxograma/programa que carregue um vetor de seis elementos num�ricos inteiros, calcule e mostre:

a quantidade de n�meros pares;
quais os n�meros pares;
a quantidade de n�meros �mpares;
quais os n�meros �mpares
*/

#include <iostream>
#define max 6
int vetor[max], parc, imparc, cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um n�mero: ";
		cin >> vetor[cont];
		if(vetor[cont]%2 == 0){
			parc++;
		}
		else{
			imparc++;
		}
	}
	
	cout << "A quantidade de n�meros pares � de: " << parc << "\n";
	cout << "Os n�meros pares s�o: ";
	for(cont = 0; cont < max; cont++){
		if(vetor[cont]%2 == 0){
			cout << vetor[cont] << " ";
		}
	}
	cout << "\nA quantidade de n�meros impares � de: " << imparc << "\n";
	cout << "Os n�meros impares s�o: ";
	for(cont = 0; cont < max; cont++){
		if(vetor[cont]%2 != 0){
			cout << vetor[cont] << " ";
		}
	}
	return 0;
}
