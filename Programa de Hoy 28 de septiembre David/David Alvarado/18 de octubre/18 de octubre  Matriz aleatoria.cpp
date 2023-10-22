/*Hacer una matriz preguntando al usuario el n�mero de filas y columnas, llenarla de
n�meros aleatorios, copiar el contenido a otra matriz y por �ltimo mostrarla en
pantalla*/

#include <iostream>
#include <stdlib.h>  // recuerda que es necesario para generar n�meros aleatorios
using namespace std;
int main() {
    int filas, columnas;
    cout << "Ingrese el n�mero de filas: ";
   cin >> filas;
    cout << "Ingrese el n�mero de columnas: ";
    cin >> columnas;
    
  // Crear una matriz a de tama�o filas x columnas
    int a[filas][columnas];
 // Crear una matriz b de tama�o filas x columnas
    int b[filas][columnas];

 //  n�meros aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            a[i][j] = rand();  // Generar un n�mero aleatorio
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

