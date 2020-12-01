#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include "list.h"
#include "sorts.h"
using namespace std;


void verDatosOrd();
void buscar();
void escribir();
void remover();
void ordenar();
void leer();
void casosPrueba();

vector<string> datos_txt;
vector<string> datosOrd;
List<string> datos;
List<string> datosActualizados;
Sorts<string> sorts;
int pos;
string pos2,filenameLoad;

int main(){

cout<<"Ingresa el nombre del archivo a cargar: \n"<<endl;  
cin>>filenameLoad;

leer();  

cout<<"\n Datos obtenidos correctamente de: " << filenameLoad << endl;
cout<<"\n Ordenando los datos del archivo de: " << filenameLoad << endl;

ordenar();

cout<<"\n Datos ordenados correctamente, elija una opción: \n\n";

int opcion;

do {
		cout << "1. Ver datos obtenidos y ordenados\n";
    cout << "2. Escribir datos en archivo\n";
    cout << "3. Buscar dato\n";
    cout << "4. Eliminar dato\n";
    cout << "5. Correr casos de prueba\n";
		cout << "6. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: verDatosOrd(); break;
      case 2: escribir(); break;
      case 3: buscar(); break;
      case 4: remover(); break;
      case 5: casosPrueba(); break;
      case 6 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 7);
	return 0;
}

void verDatosOrd(){
cout<<"\n A continuación se muestran los datos ordenados: \n\n";
  for(int i = 0; i < datosOrd.size(); i++){
    cout<<datosOrd.at(i)<<"\n";
  }
}

void escribir(){
vector<string> datosActualizados(datosOrd);
string filenameSave;

ofstream outFile;
cout << "\n Ingrese el nombre del archivo a guardar: \n"<<endl;
cin>>filenameSave;
outFile.open(filenameSave);
    
  for (int i = 0; i < datosOrd.size(); i++) {
    outFile << datosOrd[i] << "\n";
  }
  
  cout<<"\n Datos guardados correctamente en: " << filenameSave << endl;
  outFile.close();
}

void buscar(){
int cap;
int des_cap;
cout << "\n Ingrese el capítulo a buscar: \n"<<endl;
cin>>cap;
for (int i = 0; i < datosOrd.size(); i++) {
  if(i == cap){
  cout<<datosOrd[i-1]<<endl;;
  }
}
cout<< "\n   Capítulo encontrado correctamente. \n"<<endl;
}

void remover(){
int cap;
cout << "\n Ingrese el número del capitulo a eliminar: "<<endl;
cout << "\n (Asegúrese de que el capitulo exista en el archivo para poder removerlo)"<<endl;
cin>>cap;
datosActualizados.remove(cap);
cout<< "Dato removido correctamente"<<endl;
cout<< datosActualizados.toString() << endl;
}

void ordenar(){
datosOrd = sorts.ordenaMerge(datos_txt);
 for (int i = 0; i < datosOrd.size(); i++) {
    datosActualizados.add(datosOrd[i]);
  }
}

void leer(){
ifstream inFile(filenameLoad);
  string line = "";

  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_txt.push_back(line);
        datos.add(line);
		  }
  }
}

void casosPrueba(){
  List<int> lista_prueba;
	string respuesta;

	lista_prueba.add(1);
	respuesta = "[1]";
	cout << " 1 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");

	lista_prueba.add(4);
	lista_prueba.add(16);
	lista_prueba.add(100);
	respuesta = "[1, 4, 16, 100]";
	cout << " 2 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");

	cout << " 3 " <<	(3 == lista_prueba.find(100) ? "success\n" : "fail\n");

	cout << " 4 " <<	(0 == lista_prueba.find(1) ? "success\n" : "fail\n");

	lista_prueba.update(1,130);
	respuesta = "[1, 130, 16, 100]";
	cout << " 5 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");

	lista_prueba.update(2,32);
	respuesta ="[1, 130, 32, 100]";
	cout << " 6 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");

	lista_prueba.remove(1);
	respuesta = "[130, 32, 100]";
	cout << " 7 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");

	lista_prueba.remove(2);
	respuesta = "[130, 100]";
	cout << " 8 " <<	(!respuesta.compare(lista_prueba.toStringCases()) ? "success\n" : "fail\n");
}