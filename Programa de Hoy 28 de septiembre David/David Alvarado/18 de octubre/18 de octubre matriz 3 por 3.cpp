/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz*/
#include <iostream>
using namespace std;
int main() {
	  int matriz [3][3];
	
            
            for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cout << "ingrese el numero ["<<i <<"] ["<<j<<"]:";
            cin >> matriz[i][j];
			}
			}
			cout<< "\n imprimiendo la matriz: \n"<<endl;
            for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cout<< matriz[i][j];
			}
			cout << endl;
			}
            
            return 0;
			}
    
