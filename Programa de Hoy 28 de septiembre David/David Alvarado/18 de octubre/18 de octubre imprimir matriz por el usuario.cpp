/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, Posteriormente mostrar la matriz en pantalla*/
#include <iostream>
using namespace std;
int main() {
	  int ncolumnas, nfilas;
	  
            cout << "Ingresa las columnas: ";cin>> ncolumnas;
            cout << "Ingresa las filas: ";cin >> nfilas;
           
            int numeros [ncolumnas][nfilas];
            
            for (int i = 0; i < ncolumnas; i++) {
        for (int j = 0; j < nfilas; j++) {
            cout << "ingrese el numero ["<<i <<"] ["<<j<<"]:";
            cin >> numeros[i][j];
			}
			}
			cout<< "\n imprimiendo la matriz: \n"<<endl;
            for (int i = 0; i < ncolumnas; i++) {
        for (int j = 0; j <nfilas; j++) {
            cout<< numeros[i][j];
			}
			cout << endl;
			}
            
            return 0;
			}
            
            
            
            
