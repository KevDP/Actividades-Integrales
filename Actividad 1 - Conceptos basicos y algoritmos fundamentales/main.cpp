#include <iostream>
#include <fstream>
#include <sstream>
#include "metodo.h"
#include "sorts.h"

using namespace std;

void casosPrueba();

template <class T>
string arrayToString(const vector<T> &v) {	// funcion necesaria para correr los casos de prueba con formato de strings
	stringstream aux;

	aux << "[" << v[0];
	for (int i = 1; i < v.size(); i++) {
		aux << ", " << v[i];
	}
	aux << "]";
	return aux.str();
}

int main(){
int opcion;

do {
		cout << "1. Obtener datos\n";
		cout << "2. Ordenar y guardar datos\n";
		cout << "3. Buscar por rangos de entrada\n";
    cout << "4. Correr casos de prueba\n";
		cout << "5. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: leer(); break;			// función para obtener los datos del archivo (función en método.h)
      case 2: escribir(); break;		// función para escribir los datos en archivo nuevo (función en método.h)
      case 3: buscarxRangos(); return 0;	// función que permite buscar mediante un rango los datos de birlos que se necesiten (función en método.h)
      case 4: casosPrueba(); break;		// función para probar los casos de prueba (función en el main)

      case 5 : cout << "Saliendo..."; return 0;
	default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 6);
	return 0;
}

void casosPrueba(){
	int array1[] = {58, 92, 75, 5, 21, 92, 84, 91, 64, 54, 3, 28, 11, 61, 65, 4, 1, 8, 52, 78};
	vector<int> original1 (array1, array1 + sizeof(array1) / sizeof(int) );

	int array2[] = {900, 120, 10, 5, 897, 333, 68};
	vector<int> original2 (array2, array2 + sizeof(array2) / sizeof(int) );

	vector<int> prueba;
	Sorts<int> sorts;
	string resp1 = "[1, 3, 4, 5, 8, 11, 21, 28, 52, 54, 58, 61, 64, 65, 75, 78, 84, 91, 92, 92]";

	string resp2 = "[5, 10, 68, 120, 333, 897, 900]";

  	prueba = original1;
	sorts.ordenaMerge(prueba);
	cout << " 1 " <<	(!resp1.compare(arrayToString(prueba)) ? "success\n" : "fail\n");

	prueba = original2;
	sorts.ordenaMerge(prueba);
	cout << " 2 " <<	(!resp2.compare(arrayToString(prueba)) ? "success\n" : "fail\n");

	sorts.ordenaMerge(prueba);
  	cout << " 3 " <<	(5 == sorts.busqSecuencial(prueba, 897) ? "success\n" : "fail\n");

	cout << " 4 " <<	(2 == sorts.busqSecuencial(prueba, 68) ? "success\n" : "fail\n");

	cout << " 5 " <<	(4 == sorts.busqBinaria(prueba, 333) ? "success\n" : "fail\n");

	cout << " 6 " <<	(4 == sorts.busqBinaria(prueba, 197) ? "success\n" : "fail\n");

}
