#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int pos, num1, num2, resultado;

	cout << "Ingrese la opcion deseada :3" << endl;
	cout << "1-. Suma" << endl;
	cout << "2-. Resta" << endl;
	cout << "3.- Multiplicacoin" << endl;
	cout << "4.- Division" << endl;
	cout << "5.- Raiz" << endl;
	cout << "6.- Potencia" << endl;

	cin >> pos;
	system("cls");
	switch (pos) {

	case 1:
		cout << "\n		Suma.	" << endl;
		cout << "Ingrese los numeros para  a sumar " << endl;
		cout << "Dame El Primer numero:";
		cin >> num1;
		cout << "Dame EL Segundo numero:";
		cin >> num2;

	

		resultado = num1 + num2;
		cout << "\n Resultado:" << resultado << endl;
		break;


	case 2:
		cout << "\n		Resta.	" << endl;
		cout << "Ingrese los numeros para restar " << endl;
		cout << "Dame el Primer numero:";
		cin >> num1;
		cout << "Dame el Segundo numero:";
		cin >> num2;

		

		resultado = num1 - num2;
		cout << "\n Resultado:" << resultado << endl;
		break;


	case 3:
		cout << "\n		Multiplicacion.	" << endl;
		cout << "Ingrese los numeros para  multiplcar " << endl;
		cout << "Dame el Primer numero:";
		cin >> num1;
		cout << "Dame el Segundo numero:";
		cin >> num2;

		

		resultado = num1 * num2;
		cout << "\n Resultado:" << resultado << endl;
		break;


	case 4:
		cout << "\n		Division.	" << endl;
		cout << "Ingrese los numeros para  dividir " << endl;
		cout << "Dame el Primer numero:";
		cin >> num1;
		cout << "Dame el Segundo numero:";
		cin >> num2;

		

		resultado = num1 / num2;
		cout << "\n Resultado:" << resultado << endl;

		break;


	case 5:
		cout << "\n		Riaz.	" << endl;
		cout << "Ingrese los numeros a sumar " << endl;
		cout << "Dame el Primer numero:";
		cin >> num1;
		cout << "Dame el Segundo numero:";
		cin >> num2;

		

		resultado = (sqrt(num1));
		cout << "\n Resultado:" << resultado << endl;
		break;

	case 6:
		cout << "\n		Potencia.	" << endl;
		cout << "Dame elIngrese los numeros a sumar " << endl;
		cout << "Primer numero:";
		cin >> num1;
		cout << "Dme el Segundo numero:";
		cin >> num2;

		

		resultado = (pow(num1, num2));
		cout << "\n Resultado:" << resultado << endl;
		break;



	default:
		cout << "\n Opcion no valida";

		break;
	}
	return 0;
}
