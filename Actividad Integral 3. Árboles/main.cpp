#include <iostream>
#include <cstring>
#include "heap.h"
#include <fstream>
#include <sstream>
#include <vector>
#include "sorts.h"



using namespace std;

void leer();
void escribir();
void ordenar();
void buscar();
void desplegar();
void casosPrueba();

Heap<string> mi_arbol(100);
vector<string> datOrdenados;
vector<string> datos;
string filenameLoad;
Sorts<string> sort;

int main(){
int opcion;

cout<<"\n Ingresa el nombre del archivo a cargar: ";  
cin>>filenameLoad;

leer();
ordenar();

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

void leer(){
ifstream inFile;
inFile.open(filenameLoad);
  string line = "";
  if(inFile.is_open()){
    while(getline(inFile, line)){
      mi_arbol.push(line);
      datos.push_back(line);
  }
}
inFile.close();
}

void escribir(){
  string filenameSave;

  ofstream outFile;
  cout << "\n Ingrese el nombre del archivo a guardar: \n"<<endl;
  cin>>filenameSave;
  outFile.open(filenameSave);
  for(int i = 0; i < mi_arbol.size(); i++){
  outFile << datOrdenados[i] <<endl;
  }
  cout<<"\n Datos guardados correctamente en: " << filenameSave << endl;
  outFile.close();
}

void buscar(){
int cart;
cout << "\n Ingrese el número de la carta a buscar: \n"<<endl;
cin>>cart;
for (int i = 0; i < mi_arbol.size(); i++) {
  if(i == cart){
   cout<<datOrdenados[i]<<endl;
   if(cart == 50){
     cout<<datOrdenados[50]<<endl;
   }
  }
}
cout<< "\n   Carta encontrada correctamente. \n"<<endl;
}

void desplegar(){
  for (int i = 0; i < mi_arbol.size(); i++) {
    mi_arbol.pop();
  }
  mi_arbol.printvector(datOrdenados);
}

void ordenar(){
  datOrdenados = sort.ordenaMerge(datos);
}

void casosPrueba(){
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

	cout << " Prueba #7 " <<	((0 == heap.empty()) ? "success\n" : "fail\n");

  heap.pop();
	heap.pop();

	cout << " Prueba #8 " <<	((1 == heap.empty()) ? "success\n" : "fail\n");
}
