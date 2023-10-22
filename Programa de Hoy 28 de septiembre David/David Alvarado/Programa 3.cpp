/* Programa que introduzca a un vector por teclado 7 números, imprima solo los 
pares*/
#include <iostream>
using namespace std;

int main() {
    int numero[7];
    for (int i = 0; i < 7; i++) {
        cin >> numero[i];
    }
    
    cout << "Números pares introducidos: " << endl;
    
    for (int i = 0; i < 7; i++) {
        if (numero[i] % 2 == 0) {
            cout << numero[i] << endl;
        }
    }
    
    cout << endl;
    return 0;
}


