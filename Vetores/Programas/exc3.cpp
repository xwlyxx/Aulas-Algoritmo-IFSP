#include <iostream>
#define max 4

using namespace std;
int a[max], x, m[max], cont;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Faça um fluxograma/programa para ler um vetor A de 10 elementos inteiros e um valor X também inteiro.
	Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. 
	Logo após, imprimir o vetor M. Utilize funções (opcional).
	*/
	
	cout << "Informe o primeiro número da operação: ";
	cin >> x;
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe o segundo número inteiro da " << cont+1 << "ª operação: ";
		cin >> a[cont];
		m[cont] = a[cont] * x;
	}
	
	for(cont = 0; cont < max; cont++){
		cout << "O resultado da " << cont+1 << "ª operação é: " << m[cont] << "\n";
	}
	
	
	return 0;
}
