/* Fa�a um fluxograma/programa que carregue um vetor de 15 elementos inteiros
 e verifique a exist�ncia de elementos iguais a 30, 
 mostrando as posi��es em que esses elementos aparecem.
*/

#include <iostream>
#define max 2
int vetor[max], cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um n�mero: ";
		cin >> vetor[cont];
	}
	
	cout << "Os elementos iguais a 30 est�o localizados nestas posi��es: \n\n[ ";
	for(cont = 0; cont < max; cont++){
		if(vetor[cont] == 30){
			cout << cont+1 << " ";
		}
		
	}
	
	cout << "]";
	
	return 0;
}
