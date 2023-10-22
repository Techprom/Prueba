/*Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo
su contenido hacia otra matriz.*/

#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2] = {{6, 2}, {10, 4}}; //no se porque demonios corre y no aparece nada. 
    int matriz2[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    return 0;
}

