#include <iostream>
using namespace std;
//�Prep�rate para una emocionante misi�n de programaci�n que desafiar� tus habilidades!
//Te enfrentas a una bomba del destino final, y la �nica manera de desactivarla es descifrar
//una secuencia de tres n�meros de dos d�gitos. Pero aqu� viene lo interesante: debes
//mostrar los n�meros en orden inverso, decodificando cada uno sum�ndole su �ltimo
//d�gito, y separarlos con un gui�n medio.
int main(int argc, char *argv[]) {
	int a,b,c,x;
	cout << "Ingrese los n�meros de la bomba:" << endl;
	cin >> a >> b >> c;
	a = a+(a%10);
	b = b+(b%10);
	c = c+(c%10);
	x = a;
	a = c;
	c = x ;
	cout << "El c�digo de desactivaci�n es: " << a <<"-"<< b << "-"<<c<<endl;
	
	return 0;
}

