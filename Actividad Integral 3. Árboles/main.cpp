#include <iostream>
#include <cstring>
#include "heap.h"
#include <fstream>
#include <sstream>


using namespace std;

template <class T>
bool leer(Heap<T> &mi_arbol, string nom_arch){
  ifstream inFile(nom_arch);
  if(!inFile){
    cout<<"No es posible abrir el archivo"<<endl;
    return false;
  }
  string val;
  while(getline(inFile, val)){
      if(val.size() > 0){
        mi_arbol.push(val);
		  }
  }
    cout<<"\n Datos obtenidos correctamente de archivo.txt\n"<<"\n";

  inFile.close();
  return true;
}

int main(){
int opcion;
Heap<string> mi_arbol;
bool archivo = leer(mi_arbol, "datos.csv");
string datcarta;

do {
    cout << "Datos obtenidos del archivo"<<endl;
		cout << "1. Desplegar datos\n";
    cout << "2. Agregar dato\n";
    cout << "3. Escribir datos en archivo\n";
		cout << "4. Buscar dato\n";
		cout << "5. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: mi_arbol.toString(); break;
      case 2:  break;
      case 3: mi_arbol.escribir("resultado.csv"); break;
      case 4: cout<<"Introduce el dato a verificar si está en el archivo"<<endl;
              cin>>datcarta;
              mi_arbol.find(datcarta); break;
      case 5 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 5);
	return 0;
}

