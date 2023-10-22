#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  cout << "Introduzca el primer número: ";
  cin >> num1;
  cout << "Introduzca el segundo número: ";
  cin >> num2;
  // Suma
  int suma = num1 + num2;
  cout << "La suma de los dos números es: " << suma << endl;
  // División
  int division = num1 / num2;
  cout << "La división de los dos números es: " << division << endl;
  // Multiplicación
  int multiplicacion = num1 * num2;
  cout << "La multiplicación de los dos números es: " << multiplicacion << endl;
  return 0;
}
