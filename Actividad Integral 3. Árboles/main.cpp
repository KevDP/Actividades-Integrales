#include <iostream>
#include <cstring>
#include "heap.h"
#include <fstream>
#include <sstream>
#include <vector>



using namespace std;

void leer();
void escribir();
void ordenar();
void buscar();
void desplegar();
void casosPrueba();

Heap<string> mi_arbol(60);		// Instanciar el arbol con 100 espacios, no sé ocuparán todos los espacios
vector<string> datos;			// Utilizar un vector
string filenameLoad;

int main(){
int opcion;

cout<<"\n Ingresa el nombre del archivo a cargar: ";  
cin>>filenameLoad;

leer();			// Leer archivo con los datos

cout<<"\n Datos obtenidos correctamente de: " << filenameLoad <<"\n"<< endl;

do {
   		 cout << "Datos obtenidos del archivo"<<endl;
		cout << "1. Desplegar cartas\n";
    		cout << "2. Escribir datos de cartas en archivo\n";
		cout << "3. Buscar carta\n";
   		 cout << "4. Probar casos de prueba\n";
		cout << "5. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: desplegar(); break;
      case 2: escribir(); break;
      case 3: buscar(); break;
      case 4: casosPrueba(); break;
      case 5 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 6);
	return 0;
}

void leer(){			// Leer el archivo con los datos
ifstream inFile(filenameLoad);
  string line = "";

  while(getline(inFile, line)){
    if(line.size() > 0){
      mi_arbol.push(line);
      datos.push_back(line);
    }
  }
}

void escribir(){			// Escribir el arbol en un nuevo archivo
  string filenameSave;

  ofstream outFile;
  cout << "\n Ingrese el nombre del archivo a guardar: \n"<<endl;
  cin>>filenameSave;
  outFile.open(filenameSave);
  outFile << mi_arbol.toString() <<endl;
  cout<<"\n Datos guardados correctamente en: " << filenameSave << endl;
  outFile.close();
}

void buscar(){				// Buscar los datos de la carta
int cart;
cout << "\n Ingrese el número de la carta a buscar: \n"<<endl;
cin>>cart;
for (int i = 0; i < mi_arbol.size(); i++) {
  if(i == cart){
   cout<<datos[i-1]<<endl;
   if(cart == 50){
     cout<<datos[50]<<endl;
   }
  }
}
cout<< "\n   Carta encontrada correctamente. \n"<<endl;
}

void desplegar(){			// Ver los datos del árbol
  cout<<mi_arbol.toString();
}

void casosPrueba(){			// Correr los casos de prueba
  Heap<int> heap(10);
	string ans;
	heap.push(99);
  heap.push(9);

  ans =	"[9 99]";
	cout << " Prueba #1 " <<	(!ans.compare(heap.toStringCases()) ? "success\n" : "fail\n");

	heap.push(56);
	heap.push(7);
	ans ="[7 9 56 99]";
	cout << " Prueba #2 " <<	(!ans.compare(heap.toStringCases()) ? "success\n" : "fail\n");

	heap.pop();
  heap.push(1);
	ans ="[1 9 56 99]";
	cout << " Prueba #3 " <<	(!ans.compare(heap.toStringCases()) ? "success\n" : "fail\n");

	cout << " Prueba #4 " <<	((4 == heap.size()) ? "success\n" : "fail\n");

  heap.pop();
  heap.pop();
	ans ="[56 99]";
	cout << " Prueba #5 " <<	(!ans.compare(heap.toStringCases()) ? "success\n" : "fail\n");

	cout << " Prueba #6 " <<	((2 == heap.size()) ? "success\n" : "fail\n");

	cout << " Prueba #7 " <<	((56 == heap.top()) ? "success\n" : "fail\n");

	cout << " Prueba #8 " <<	((0 == heap.empty()) ? "success\n" : "fail\n");

  heap.pop();

	cout << " Prueba #9 " <<	((99 == heap.top()) ? "success\n" : "fail\n");

	heap.pop();

	cout << " Prueba #10 " <<	((1 == heap.empty()) ? "success\n" : "fail\n");
}
