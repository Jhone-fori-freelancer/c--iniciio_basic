// ejercicio_Opercaciones_aritmeticas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


	using namespace std;

	int main() {
		int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

		cout << "Digite un numero: "; cin >>n1;
		cout << "Digite otro numero: "; cin >> n2;

		suma = n1 + n2;
		resta = n1 - n2;
		multiplicacion = n1 * n2;
		division = n1 / n2;

		cout << "\nla suma es:" << suma << endl;
		cout << "\nla resta es:" <<resta << endl;
		cout << "\nla la multiplicacion es:" <<multiplicacion << endl;
		division = static_cast<double>(n1) / n2;
		return 0;

	}

