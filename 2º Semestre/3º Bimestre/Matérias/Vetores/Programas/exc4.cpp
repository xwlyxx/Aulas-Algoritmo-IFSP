#include <iostream>
#define max 6

using namespace std;
int a[max], x[max], m[max], cont;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*  Fa�a um fluxograma/programa que carregue dois vetores de 6 elementos num�ricos cada um,
	 e mostre um vetor resultante da multiplica��o desses dois vetores. 
	 Utilize fun��es (opcional). 
	*/
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe o primeiro n�mero inteiro da " << cont+1 << "� opera��o: ";
		cin >> a[cont];
		cout << "Informe o segundo n�mero da " << cont+1 << "� opera��o: ";
		cin >> x[cont];
		m[cont] = a[cont] * x[cont];
		system("cls");
	}
	
	for(cont = 0; cont < max; cont++){
		cout << "O resultado da " << cont+1 << "� opera��o �: " << m[cont] << "\n";
	}
	
	return 0;
}

