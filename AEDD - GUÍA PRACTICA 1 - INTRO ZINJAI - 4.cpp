#include <iostream>
using namespace std;
//Escribe un programa que solicite al usuario dos n�meros (a, b) y luego intercambie los valores de los dos n�meros. Mostrar los valores antes y despu�s del intercambio.
int main(int argc, char *argv[]) {
	int a,b,x;
	cin >> a >> b;
	cout << "Antes del intermcambio: a = " << a << ", b = " << b << endl;
	x = a;
	a = b;
	b = x;
	cout << "Despues del intermcambio: a = " << a << ", b = " << b << endl;
	
	return 0;
}

