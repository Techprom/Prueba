#include <iostream>
using namespace std;

#define N 121

int rut[N];
float sueldo[N];

int main() {
    // Supongamos que los arreglos rut y sueldo ya están inicializados

    // Inicializamos un arreglo para almacenar las bonificaciones
    float bonificaciones[N] = {0.0};

    // Encontramos el sueldo más bajo
    float sueldoMinimo = sueldo[0];
    for (int i = 0; i < N; i++) {
        if (sueldo[i] < sueldoMinimo) {
            sueldoMinimo = sueldo[i];
        }
    }

    // Encontramos a los empleados con el sueldo más bajo y calculamos sus bonificaciones
    int empleadosBeneficiados = 0;
    float costoTotalBonificaciones = 0.0;

    for (int i = 0; i < N; i++) {
        if (sueldo[i] == sueldoMinimo && empleadosBeneficiados < 25) {
            // Guardamos el RUT de los beneficiados
            rut[i] = 1;  // Supongamos que 1 es un valor de ejemplo para el RUT

            // Calculamos la bonificación (5% del sueldo)
            bonificaciones[i] = sueldo[i] * 0.05;

            // Actualizamos el costo total de bonificaciones
            costoTotalBonificaciones += bonificaciones[i];

            empleadosBeneficiados++;
        }
    }

    // Imprimimos la lista de RUT de los beneficiados
    cout << "RUT de los empleados beneficiados:" << endl;
    for (int i = 0; i < N; i++) {
        if (rut[i] == 1) {
            cout << "RUT: " << rut[i] << endl;
        }
    }

    // Imprimimos el costo total de bonificaciones
    cout << "Costo total de bonificaciones: $" << costoTotalBonificaciones << endl;

    return 0;
}

