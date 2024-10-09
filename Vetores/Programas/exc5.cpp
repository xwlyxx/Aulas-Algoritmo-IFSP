#include <iostream>
#define max 5

using namespace std;
int x[max], cont, maior, menor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Faça um fluxograma/programa que carregue um vetor de 10 posições, calcule e mostre:

	maior elemento do vetor e em que posição esse elemento se encontra;
	menor elemento do vetor e em que posição esse elemento se encontra.
	Utilize funções (opcional).
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
	
	cout << "O maior número é: " << x[maior] << "; E sua posição é: " << maior+1 << "\n";
	cout << "O menor número é: " << x[menor] << "; E sua posição é: " << menor+1;
	
	return 0;
}

