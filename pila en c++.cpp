
#include <iostream>
#include<vector>
#include<string>

const int capacidad = 5;
using namespace std;

int ingresar_valores(vector <int>& elementos) {
	int CLAVE = -1;
	int cima = -1;
	int x = 0;
	while (x != CLAVE) {
		string entrada;
		cin >> entrada;
		// scanf("%s" ,&entrada );
		try {
			x = stoi(entrada); //Convertimos de cadena a entero (string to Integer)
			//cout << x <<endl;
			if (cima < capacidad - 1) {
				cima++;
				elementos[cima] = x;
			}
			else {
				cout << "La Pila esta llena" << endl;
				break;
			}
		}
		catch (const invalid_argument&) {
			cout << "Entrada no valida\n" << endl;
			//printf("Entrada no valida\n");
		}
	}
	return cima;
}

void imprimir_valores(vector<int>& elementos, int cima) {
	int xx = 0;
	if (cima >= 0) {
		cout << "Los elementos en la pila son : \n" << endl;
		while (cima >= 0) {
			xx = elementos[cima];
			cout << xx << endl;
			cima--;
		}
	}
	else {
		cout << "La pila esta vacia \n" << endl;
	}
}

int main()
{
	vector<int>elementos(capacidad);
	cout << "Ingrese el elemnto de la pila (-1 termina el codigo)\n" << endl;
	//printf("Ingrese el elemento de la pila (-1 termina el codigo)\n");
	int cima = ingresar_valores(elementos);
	cout << cima << endl;
	imprimir_valores(elementos, cima);
	return 0;
}