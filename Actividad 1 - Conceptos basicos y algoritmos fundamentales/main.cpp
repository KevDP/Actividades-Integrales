#include <iostream>
#include <fstream>
#include <sstream>
#include "metodo.h"

using namespace std;

int main(){
int opcion;

do {
		cout << "1. Obtener datos\n";
		cout << "2. Ordenar y guardar datos\n";
		cout << "3. Buscar por rangos de entrada\n";
		cout << "4. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: leer(); break;
      case 2: escribir(); break;
      case 3: buscarxRangos(); return 0;
      case 4 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 6);
	return 0;
}
