
#include <iostream>
using namespace std;

int main()
{
	int seleccion = 0;
	short numero1 = 0, numero2 = 0;
	short resultado;
	string salida;

	cout << "\nCalculadora\n";


	while (seleccion != 5)
	{
		cout << "\nSelecciona una opcion\n";
		cout << "\n1) Suma\n";
		cout << "2) Resta\n";
		cout << "3) Multiplicacion\n";
		cout << "4) Division\n";
		cout << "5) Salir\n";
		cin >> seleccion;

		switch (seleccion)
		{
		case 1:

			cout << "\nSuma seleccionda:\n";
			cout << "Ingresa el primero numeo\n";
			cin >> numero1;
			cout << "Ingresa el segundo numero\n";
			cin >> numero2;
			_asm
			{
				mov ax, numero1;
				mov bx, numero2;
				add ax, bx;
				mov resultado, ax;
			}
			cout << "Resultado : ";
			cout << resultado;
			cout << "\n";

			break;

		case 2:

			cout << "\nResta seleccionda:\n";
			cout << "Ingresa el primero numeo\n";
			cin >> numero1;
			cout << "Ingresa el segundo numero\n";
			cin >> numero2;
			_asm
			{
				mov ax, numero1;
				mov bx, numero2;
				sub ax, bx;
				mov resultado, ax;
			}
			cout << "Resultado : ";
			cout << resultado;
			cout << "\n";
			break;

		case 3:

			cout << "\nMultiplicacion seleccionda:\n";
			cout << "Ingresa el primero numeo\n";
			cin >> numero1;
			cout << "Ingresa el segundo numero\n";
			cin >> numero2;
			_asm
			{
				mov ax, numero1;
				mov bx, numero2;
				mul bx;
				mov resultado, ax;
			}
			cout << "Resultado : ";
			cout << resultado;
			cout << "\n";

			break;
		

		case 4:

			cout << "\nDivision seleccionda:\n";
			cout << "Ingresa el primero numeo\n";
			cin >> numero1;
			cout << "Ingresa el segundo numero\n";
			cin >> numero2;
			_asm
			{
				xor dx, dx;
				mov ax, numero1;
				mov bx, numero2;
				div bx;
				mov resultado, ax;
			}
			cout << "Resultado : ";
			cout << resultado;
			cout << "\n";

			break;

		case 5:

			cout << "Adios :)";
			cin >> salida ;
			break;

		default:
			cout << "Selecciona un numero valido";
			break;
		}

		
		if (salida != "") {
			break;
		}

	}

}
