#include <iostream>
#define max 4

using namespace std;
int a[max], x, m[max], cont;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Fa�a um fluxograma/programa para ler um vetor A de 10 elementos inteiros e um valor X tamb�m inteiro.
	Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. 
	Logo ap�s, imprimir o vetor M. Utilize fun��es (opcional).
	*/
	
	cout << "Informe o primeiro n�mero da opera��o: ";
	cin >> x;
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe o segundo n�mero inteiro da " << cont+1 << "� opera��o: ";
		cin >> a[cont];
		m[cont] = a[cont] * x;
	}
	
	for(cont = 0; cont < max; cont++){
		cout << "O resultado da " << cont+1 << "� opera��o �: " << m[cont] << "\n";
	}
	
	
	return 0;
}
