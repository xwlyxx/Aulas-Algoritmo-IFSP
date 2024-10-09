/*Escreva um fluxograma/programa para ler dois vetores (A e B), ambos com 5 elementos inteiros.
 Em seguida crie um vetor X com 10 elementos e copie os valores de A e B para esse vetor
  (uni�o de A com B). Utilize fun��es (opcional).
*/

#include <iostream>
#define max 5
#define maxx 10

int a[max], b[max], x[maxx], cont;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um n�mero para o conjunto A: ";
		cin >> a[cont];
		x[cont] = a[cont];
	}
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um n�mero para o conjunto B: ";
		cin >> b[cont];
		x[cont + 5] = b[cont];
	}
	
	system("cls");
	
	cout << "Os n�meros do conjunto A s�o: ";
	for(cont = 0; cont < max; cont++){
		cout << a[cont] << " ";
	}
	
	cout << "\nOs n�meros do conjunto B s�o: ";
	for(cont = 0; cont < max; cont++){
		cout << b[cont] << " ";
	}
	
	cout << "\nOs n�meros do conjunto X(Uni�o A e B) s�o: ";
	for(cont = 0; cont < maxx; cont++){
		cout << x[cont] << " ";
	}
	
	return 0;
}
