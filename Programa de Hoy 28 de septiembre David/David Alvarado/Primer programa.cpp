/*programa que solicite el precio de un articulo, calcule sabiendo que el ITBM a aplicar es del  7%
 y que si el importe de la faactura es superior a 100 se debe realizar un descuento 4%
 aplique el itbm después del descuento en caso que se aplica, que sea en c++ y sea fácil.*/ 
#include <iostream>
using namespace std;

int main() {
    double precio;
    
    cout << "Ingrese el precio del artículo: $";
    cin >> precio;

    double descuento = 0.04 * precio; // 4% de descuento
    double subtotal = precio - descuento;
    double itbm = 0.07 * subtotal; // 7% de ITBM
    double total = subtotal + itbm;

    if (precio > 100) {
        cout << "Se aplicó un descuento del 4%." << endl;
        cout << "Subtotal: $" << subtotal << endl;
    } else {
        cout << "Subtotal: $" << precio << endl;
    }

    cout << "ITBM (7%): $" << itbm << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}

