 /*
 	Escreva um fluxograma/programa que leia um número inteiro A e uma matriz V 30x30 de inteiros. 
	Crie uma função que retorne a contagem de quantos valores iguais a A estão na matriz. 
	Crie, a seguir, uma matriz X contendo todos os elementos de V diferentes de A. 
	Na matriz X, substitua os valores iguais a A por zero. 
	Mostre os resultados.
 
 */

#include <iostream>
#define max 2

using namespace std;
int v[max][max], a, cont, cont2, x[max][max], acont;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Informe um número inteiro A: ";
	cin >> a;
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			cout << "Informe o número da " << cont+1 << "ª linha e da " << cont2+1 << "ª coluna da matriz V: ";	
			cin >> v[cont][cont2];
			if(v[cont][cont2] == a){
				acont++;
			}
		}
	}
	
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			x[cont][cont2] = v[cont][cont2];
			if(v[cont][cont2] != a){
				x[cont][cont2] = 0;
			}
		}
	}
	
	cout << "\nO valor de A se repete na Matriz V " << acont << " vezes.\n\n";	
	
	cout << "Os valores da matriz V foram: [ ";
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			cout << v[cont][cont2] << " ";
		}
	}
	cout << "]";
	
	cout << "\n\nOs valores da matriz X foram: [ ";
	for(cont = 0; cont < max; cont++){
		for(cont2 = 0; cont2 < max; cont2++){
			cout << x[cont][cont2] << " ";
		}
	}
	cout << "]";
	
	return 0;
}
