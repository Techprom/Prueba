/*llenar por teclado una matriz 3 filas y 4 columnas. Imprimir la matriz, la suma y el promedio de los elementos. Indicar la posición de cada uno. */

#include <iostream>
using namespace std;
int main() {
    int matriz[3][4], suma = 0;
    // Se recorre la matriz y se leen los valores ingresados por el usuario
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingresa un valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }
    // Se recorre la matriz y se imprimen los valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Se calcula la suma y el promedio de los elementos de la matriz
    float promedio = suma / 12.0;
    // Se imprimen la suma y el promedio
    cout << "La suma de los elementos de la matriz es: " << suma << endl;
    cout << "El promedio de los elementos de la matriz es: " << promedio << endl;
    return 0;
}
