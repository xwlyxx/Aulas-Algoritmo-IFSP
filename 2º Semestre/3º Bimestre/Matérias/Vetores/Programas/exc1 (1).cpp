/*Elabore um fluxograma/programa que carregue um vetor de seis elementos numéricos inteiros, calcule e mostre:

a quantidade de números pares;
quais os números pares;
a quantidade de números ímpares;
quais os números ímpares
*/

#include <iostream>
#define max 6
int vetor[max], parc, imparc, cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um número: ";
		cin >> vetor[cont];
		if(vetor[cont]%2 == 0){
			parc++;
		}
		else{
			imparc++;
		}
	}
	
	cout << "A quantidade de números pares é de: " << parc << "\n";
	cout << "Os números pares são: ";
	for(cont = 0; cont < max; cont++){
		if(vetor[cont]%2 == 0){
			cout << vetor[cont] << " ";
		}
	}
	cout << "\nA quantidade de números impares é de: " << imparc << "\n";
	cout << "Os números impares são: ";
	for(cont = 0; cont < max; cont++){
		if(vetor[cont]%2 != 0){
			cout << vetor[cont] << " ";
		}
	}
	return 0;
}
