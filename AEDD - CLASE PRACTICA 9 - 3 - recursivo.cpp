#include <iostream>
using namespace std;

int calculo(int);

int main(int argc, char *argv[]) {
	int p;
	cout << "Ingres� el n�mero de provincias que quiere analizar:" << endl;
	cin >> p;
	cout << "La producci�n total de ma�z en estas provincias es de: " << calculo(p) << endl;
	
	return 0;
}

int calculo(int a){
	int suma = 0;
	if(a == 0){
		return 0;
	} else {
		int h,r;
		cout << "Ingres� el n�mero de hect�reas que tiene la provincia:" << endl;
		cin >> h;
		cout << "Ingres� el rendimiento esperado por hect�rea que tiene la provincia:" << endl;
		cin >> r;
		return h*r + calculo(a-1);
	}
}
