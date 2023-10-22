/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz
traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/
#include <iostream>
using namespace std;

void traspuesta(int matriz[3][3]){ // me salio weeee
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            swap (matriz[i][j], matriz[j][i]);// swap es decir que cambie la vaina , osea swap es cambiar de posición. 
        }
    }
}
int main() {
    int matriz[3][3] = {{6, 8, 3}, {9, 5, 6}, {12, 8, 14}};

    traspuesta(matriz);

    cout << "Matriz original: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz traspuesta: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
