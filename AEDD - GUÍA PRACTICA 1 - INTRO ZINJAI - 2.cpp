#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Escribe un programa que solicite al usuario que ingrese dos n�meros, y luego muestre la suma, la diferencia, el producto y el cociente de los dos n�meros.
	int a,b;
	cout << "Por favor ingrese dos n�meros" << endl;
	cin >> a >> b;
	cout << a+b << endl;
	cout << a-b << endl;
	cout << a*b << endl;
	cout << a/b << endl;
	
	return 0;
}

