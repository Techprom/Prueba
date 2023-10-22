/* Diseña un programa que permita a un usuario llevar un registro de sus gastos personales semanales.
debe alamacenar el nombre de la compra y su cantidad. El programa debe imprimir una listas de gastos realizados con sus
respectivas cantidades al igual que la cantidad total que se gastó esa semana y el promedio de gasto semanl.*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> compras;
    vector<double> cantidades;

    while (true) {
        cout << "\nOpciones:" << endl;
        cout << "1. Agregar un gasto" << endl;
        cout << "2. Imprimir lista de gastos" << endl;
        cout << "3. Salir" << endl;

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                double cantidad;
                cout << "Ingrese el nombre de la compra: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese la cantidad gastada: ";
                cin >> cantidad;
                compras.push_back(nombre);
                cantidades.push_back(cantidad);
                break;
            }
            case 2: {
                cout << "\nLista de gastos realizados:" << endl;
                double total_semanal = 0;
                for (size_t i = 0; i < compras.size(); ++i) {
                    cout << compras[i] << ": $" << cantidades[i] << endl;
                    total_semanal += cantidades[i];
                }
                double promedio_semanal = compras.empty() ? 0 : total_semanal / compras.size();
                cout << "\nTotal gastado esta semana: $" << total_semanal << endl;
                cout << "Promedio de gasto semanal: $" << promedio_semanal << endl;
                break;
            }
            case 3:
                return 0;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
        }
    }

    return 0;
}

