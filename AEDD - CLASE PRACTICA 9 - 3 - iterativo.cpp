#include <iostream>
using namespace std;

void calculo(int);

int main(int argc, char *argv[]) {
	int p;
	cout << "Ingres� el n�mero de provincias que quiere analizar:" << endl;
	cin >> p;
	calculo(p);
	
	return 0;
}

void calculo(int a){
	int suma = 0;
	for(int i=0; i<a;i++){
		int h,r;
		cout << "Ingres� el n�mero de hect�reas que tiene la provincia " << i+1 << ":" << endl;
		cin >> h;
		cout << "Ingres� el rendimiento esperado por hect�rea que tiene la provincia " << i+1 << ":" << endl;
		cin >> r;
		suma += h*r;
	}
	cout << "La producci�n total de ma�z en estas provincias es de: " << suma << endl;
}

