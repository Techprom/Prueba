/*Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en
pantalla*/

#include <iostream>
#include <stdlib.h>  // recuerda que es necesario para generar números aleatorios
using namespace std;
int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas: ";
   cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    
  // Crear una matriz a de tamaño filas x columnas
    int a[filas][columnas];
 // Crear una matriz b de tamaño filas x columnas
    int b[filas][columnas];

 //  números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            a[i][j] = rand();  // Generar un número aleatorio
        }
    }

 // Copia
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            b[i][j] = a[i][j];
        }
    }

 // Muestra
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;  
    }

    return 0;
}

