#include <iostream>
#define maxx 10
#define maxy 5

using namespace std;

int a[maxx][maxy], maior = 0, cont, cont2, valor;

int pmaior(int num) {
    if (num > maior) {
        maior = num;
    }
}

int ler() {
    for (cont = 0; cont < maxx; cont++) {
        for (cont2 = 0; cont2 < maxy; cont2++) {
            cout << "Informe o número da " << cont + 1 << "ª linha e da " << cont2 + 1 << "ª coluna: ";
            cin >> a[cont][cont2];
            pmaior(a[cont][cont2]);
        }
    }
}

int imprimir() {
    cout << "A matriz ficou da seguinte forma: \n[ ";
    for (cont = 0; cont < maxx; cont++) {
        for (cont2 = 0; cont2 < maxy; cont2++) {
            cout << a[cont][cont2] << " ";
            if (cont2 == maxy - 1 && cont != maxx - 1) {
                cout << "\n  ";
            }
        }
    }
    cout << " ]" << endl;
}

int repeat(int rep[]) {
    for (int cont = 0; cont < maxx; cont++) {
        for (cont2 = 0; cont2 < maxy; cont2++) {
            valor = a[cont][cont2];
            rep[valor]++;
        }
    }
}

int repetidos() {
    int rep[maxx * maxy] = {0};
    repeat(rep);
    cout << "\n\nOs números repetidos foram: \n";
    for (valor = 0; valor <= maior; valor++) {
        if (rep[valor] > 1) {
            cout << "O número " << valor << " aparece " << rep[valor] << " vezes em A." << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    ler();
    imprimir();
    repetidos();
    
    return 0;
}

