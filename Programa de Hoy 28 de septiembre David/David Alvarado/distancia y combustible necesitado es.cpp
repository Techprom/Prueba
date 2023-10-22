#include <iostream>
using namespace std;

const int N = 100; // Cambia esto al tamaño máximo de ciudades que puedas tener
const double consumoPorKilometro = 0.08; // Cambia esto al consumo de tu vehículo en litros por kilómetro

int dist[N][N]; // Matriz de distancias
int ruta[N];   // Arreglo de rutas

int main() {
    int numCiudades; // Número de ciudades en la ruta
    cin >> numCiudades;

    // Leer las distancias entre ciudades
    for (int i = 0; i < numCiudades; i++) {
        for (int j = 0; j < numCiudades; j++) {
            cin >> dist[i][j];
        }
    }

    // Leer la ruta del conductor
    for (int i = 0; i < numCiudades; i++) {
        cin >> ruta[i];
    }

    double distanciaTotal = 0;

    // Calcular la distancia total de la ruta
    for (int i = 0; i < numCiudades - 1; i++) {
        distanciaTotal += dist[ruta[i]][ruta[i + 1]];
    }

    // Calcular la cantidad de combustible necesitada
    double combustibleNecesitado = distanciaTotal * consumoPorKilometro;

    cout << "La cantidad de combustible necesitada es: " << combustibleNecesitado << " litros" << endl;

    return 0;
}

