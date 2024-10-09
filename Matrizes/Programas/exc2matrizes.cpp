/*
	Elaborar um fluxograma/programa que l� uma matriz M(6,6) e um valor A e multiplica a matriz M
	pelo valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) 
	e escreve no final o vetor V. Utilize fun��es.
*/

#include <iostream>
#define max 6
#define maxv 36

using namespace std;
int m[max][max], a, v[maxv], cont, cont2;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			cout << "Informe o n�mero da " << cont+1 << "� linha e da " << cont2+1 << "� coluna: ";
			cin >> m[cont][cont2];
		}
	}
	
	cout << "Informe o valor de A: ";
	cin >> a;
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			v[cont * max + cont2] = m[cont][cont2] * a;
		}
	}
	
	cout << "Os valores gerados foram: [ ";
	for(cont = 0; cont < maxv; cont++){
		cout << v[cont] << " ";
	}
	cout << "]";
	
	return 0;
}
