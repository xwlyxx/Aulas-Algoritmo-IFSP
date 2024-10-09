/*
	Faça um fluxograma/programa que leia uma matriz 20x15 de inteiros.
	Calcule e mostre a soma das linhas ímpares dessa matriz. 
	Use funções para resolver o programa.
*/

#include <iostream>
#define maxx 20
#define maxy 15

using namespace std;
int mat[maxx][maxy], soma, cont, cont2;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	soma = 0;
	
	for(cont = 0; cont < maxx; cont++){
		for(cont2 = 0; cont2 < maxy; cont2++){
			cout << "Informe o número da " << cont+1 << "ª linha e da " << cont2+1 << "ª coluna: ";
			cin >> mat[cont][cont2];
			if((cont+1)%2 != 0){
				soma = soma + mat[cont][cont2];
			}
		}
	}
	
	cout << "A soma dos elementos das linhas ímpares desta matriz é: " << soma;
	
	return 0;
}
