/*Escriba una funci�n llamada mult() y otra pedirdatos()
que acepte dos n�meros en punto flante como par�metros, multiplique
estos dos n�meros y despliegue el resultado.*/
#include<iostream>
using namespace std; 
void mult(float x, float y);
void pedirDatos();

float n1, n2;

int main(){
	pedirDatos();
	mult(n2,n1);
	

	return 0;
}
void pedirDatos(){
	cout <<"Digite 2 numeros: ";
	cin >> n1>>n2;
	
}
void mult (float x, float y){
	float multiplicacion = x*y;
	cout << "la multiplicacion es:" <<multiplicacion << endl;
}

