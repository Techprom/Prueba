#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  cout << "Introduzca el primer n�mero: ";
  cin >> num1;
  cout << "Introduzca el segundo n�mero: ";
  cin >> num2;
  // Suma
  int suma = num1 + num2;
  cout << "La suma de los dos n�meros es: " << suma << endl;
  // Divisi�n
  int division = num1 / num2;
  cout << "La divisi�n de los dos n�meros es: " << division << endl;
  // Multiplicaci�n
  int multiplicacion = num1 * num2;
  cout << "La multiplicaci�n de los dos n�meros es: " << multiplicacion << endl;
  return 0;
}
