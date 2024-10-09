#include <iostream>
#define max 6

using namespace std;
int a[max], x[max], m[max], cont;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*  Faça um fluxograma/programa que carregue dois vetores de 6 elementos numéricos cada um,
	 e mostre um vetor resultante da multiplicação desses dois vetores. 
	 Utilize funções (opcional). 
	*/
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe o primeiro número inteiro da " << cont+1 << "ª operação: ";
		cin >> a[cont];
		cout << "Informe o segundo número da " << cont+1 << "ª operação: ";
		cin >> x[cont];
		m[cont] = a[cont] * x[cont];
		system("cls");
	}
	
	for(cont = 0; cont < max; cont++){
		cout << "O resultado da " << cont+1 << "ª operação é: " << m[cont] << "\n";
	}
	
	return 0;
}

