 /*Escreva um fluxograma/programa para ler um vetor X de 10 elementos inteiros.
  Logo após copie os elementos do vetor X para um vetor Y fazendo com que o 1º elemento de X seja copiado para o 10º de Y,
   o 2º de X para o 9º de Y e assim sucessivamente. 
   Após o término da cópia, imprimir o vetor Y. Utilize funções (opcional).
*/

#include <iostream>
#define max 10
int x[max], y[max], cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um número: ";
		cin >> x[cont];
		y[9-cont] = x[cont];
	}
	
	system("cls");
	
	cout << "Vetor Y: \n\n";
	for(cont = 0; cont < max; cont++)	{
		cout << "Posição " << cont +1 << ": " << y[cont] << "\n";
	}
	
	return 0;
}
