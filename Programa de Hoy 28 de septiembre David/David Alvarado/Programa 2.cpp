/* Declare y llene por teclado un vector de 5 posiciones con n�meros decimales. 
imprima el total de los contenidos y promedios de esto*/
#include <iostream>
using namespace std;
int main() {
    double numeros[5];
    double suma = 0;
    
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el n�mero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i]; 
    }
    
    cout << "Los n�meros ingresados son: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    
    double promedio = suma / 5; 
    
    cout << "\n La suma de los n�meros es: " << suma << endl;
    cout << "El promedio de los n�meros es: " << promedio << endl;

    return 0;
}


