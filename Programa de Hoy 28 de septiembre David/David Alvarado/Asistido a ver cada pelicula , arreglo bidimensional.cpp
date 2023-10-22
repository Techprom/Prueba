#include <iostream>
using namespace std;

int main() {
    const int numSalas = 7;
    const int numPeliculas = 15;

    // Declarar un arreglo bidimensional para almacenar la información de asistencia.
    int asistencia[numSalas][numPeliculas];

    // Ingresar la información de asistencia para cada sala y película.
    for (int sala = 0; sala < numSalas; sala++) {
        cout << "Sala " << sala + 1 << ":" << endl;
        for (int pelicula = 0; pelicula < numPeliculas; pelicula++) {
            cout << "Asistencia para película " << pelicula + 1 << ": ";
            cin >> asistencia[sala][pelicula];
        }
    }

    // Inicializar variables para realizar un seguimiento de la película más vista y su asistencia.
    int maxAsistencia = 0;
    int salaMasVista = 0;
    int peliculaMasVista = 0;

    // Encontrar la mejor combinación sala-película y determinar la película más vista.
    for (int sala = 0; sala < numSalas; sala++) {
        for (int pelicula = 0; pelicula < numPeliculas; pelicula++) {
            if (asistencia[sala][pelicula] > maxAsistencia) {
                maxAsistencia = asistencia[sala][pelicula];
                salaMasVista = sala + 1;
                peliculaMasVista = pelicula + 1;
            }
        }
    }

    // Mostrar la mejor combinación sala-película y la película más vista.
    cout << "La mejor combinación sala-película es: Sala " << salaMasVista << ", Película " << peliculaMasVista << endl;
    cout << "La película más vista tuvo una asistencia de " << maxAsistencia << " personas." << endl;

    return 0;
}

