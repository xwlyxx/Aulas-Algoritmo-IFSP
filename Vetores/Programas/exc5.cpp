#include <iostream>
#define max 5

using namespace std;
int x[max], cont, maior, menor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Fa�a um fluxograma/programa que carregue um vetor de 10 posi��es, calcule e mostre:

	maior elemento do vetor e em que posi��o esse elemento se encontra;
	menor elemento do vetor e em que posi��o esse elemento se encontra.
	Utilize fun��es (opcional).
	*/	
	
	for(cont = 0; cont < max; cont++){
		cout << "Informe um valor: ";
		cin >> x[cont];
		
		if(cont == 0){
			maior = cont;
			menor = cont;
		}
		else{
			if(x[cont] > maior){
				maior = cont;
			} 
			if(x[cont] < menor){
				menor = cont;
			}
		}
	}
	
	cout << "O maior n�mero �: " << x[maior] << "; E sua posi��o �: " << maior+1 << "\n";
	cout << "O menor n�mero �: " << x[menor] << "; E sua posi��o �: " << menor+1;
	
	return 0;
}

