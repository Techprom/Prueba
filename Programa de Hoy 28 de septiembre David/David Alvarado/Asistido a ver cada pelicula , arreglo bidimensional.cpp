#include <iostream>
using namespace std;

int main() {
    const int numSalas = 7;
    const int numPeliculas = 15;

    // Declarar un arreglo bidimensional para almacenar la informaci�n de asistencia.
    int asistencia[numSalas][numPeliculas];

    // Ingresar la informaci�n de asistencia para cada sala y pel�cula.
    for (int sala = 0; sala < numSalas; sala++) {
        cout << "Sala " << sala + 1 << ":" << endl;
        for (int pelicula = 0; pelicula < numPeliculas; pelicula++) {
            cout << "Asistencia para pel�cula " << pelicula + 1 << ": ";
            cin >> asistencia[sala][pelicula];
        }
    }

    // Inicializar variables para realizar un seguimiento de la pel�cula m�s vista y su asistencia.
    int maxAsistencia = 0;
    int salaMasVista = 0;
    int peliculaMasVista = 0;

    // Encontrar la mejor combinaci�n sala-pel�cula y determinar la pel�cula m�s vista.
    for (int sala = 0; sala < numSalas; sala++) {
        for (int pelicula = 0; pelicula < numPeliculas; pelicula++) {
            if (asistencia[sala][pelicula] > maxAsistencia) {
                maxAsistencia = asistencia[sala][pelicula];
                salaMasVista = sala + 1;
                peliculaMasVista = pelicula + 1;
            }
        }
    }

    // Mostrar la mejor combinaci�n sala-pel�cula y la pel�cula m�s vista.
    cout << "La mejor combinaci�n sala-pel�cula es: Sala " << salaMasVista << ", Pel�cula " << peliculaMasVista << endl;
    cout << "La pel�cula m�s vista tuvo una asistencia de " << maxAsistencia << " personas." << endl;

    return 0;
}

