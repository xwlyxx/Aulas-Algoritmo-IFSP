 /*Escreva um fluxograma/programa para ler um vetor X de 10 elementos inteiros.
  Logo ap�s copie os elementos do vetor X para um vetor Y fazendo com que o 1� elemento de X seja copiado para o 10� de Y,
   o 2� de X para o 9� de Y e assim sucessivamente. 
   Ap�s o t�rmino da c�pia, imprimir o vetor Y. Utilize fun��es (opcional).
*/

#include <iostream>
#define max 10
int x[max], y[max], cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um n�mero: ";
		cin >> x[cont];
		y[9-cont] = x[cont];
	}
	
	system("cls");
	
	cout << "Vetor Y: \n\n";
	for(cont = 0; cont < max; cont++)	{
		cout << "Posi��o " << cont +1 << ": " << y[cont] << "\n";
	}
	
	return 0;
}
