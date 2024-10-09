/*
 	Faça um fluxograma/programa que leia uma matriz 10x10 de números reais. 
	A seguir, multiplique cada linha pelo elemento da diagonal principal daquela linha. 
	Mostre a matriz após as multiplicações. Utilize funções.
*/

#include <iostream>
#define max 3


using namespace std;
int element[max][max], diag[max], cont, cont2;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			cout << "Informe o número da " << cont+1 << "ª linha e da " << cont2+1 << "ª coluna: ";
			cin >> element[cont][cont2];
			if(cont == cont2){
					diag[cont] = element[cont][cont2];
			}
		}
	}
	
	cout << "Os números gerados foram: \n[ ";	
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			element[cont][cont2] = element[cont][cont2] * diag[cont];
			cout << element[cont][cont2] << " ";
			if(cont2 == max - 1 && cont != max - 1){
				cout << "\n  ";
			}
		}
	}
	cout << "]";
	
	return 0;
}
