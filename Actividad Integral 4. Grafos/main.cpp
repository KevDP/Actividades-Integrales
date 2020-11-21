#include <iostream>
#include <fstream>
#include <sstream>
#include "graph.h"
using namespace std;

void leerGrafo();
void imprimirGrafo();
void recorrerGrafo();
void guardarRespuesta();

int main(){
int opcion;

do {
		cout << "1. Leer Archivo\n";
    cout << "2. Imprimir datos del grafo\n";
    cout << "3. Camino más corto para recorrer el grafo\n";
		cout << "4. Guardar respuesta en archivo\n";
		cout << "5. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: leerGrafo(); break;
      case 2: imprimirGrafo(); break;
      case 3: recorrerGrafo(); break;
      case 4: guardarRespuesta(); break;
      case 5 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 5);
	return 0;
}

void leerGrafo(){
  Graph Grafo;
  string NomArchivo;
  cout<<"Inserte el nombre del archivo: \n"<<endl;
  cin>>NomArchivo;
  Grafo.loadGraphList(NomArchivo, 5, 5);
  if(false){
    cout<<"Archivo no encontrado"<<endl;
  } else {
  cout<<"\n Datos obtenidos correctamente del archivo\n"<<"\n";
  Grafo.printAdjList();
  }
}

void imprimirGrafo(){
  Graph Grafo;
  string NomArchivo;
  Grafo.loadGraphList(NomArchivo, 5, 5);
  if(false){
    cout<<"Archivo no encontrado"<<endl;
  } else {
  cout<<"\n El grafo seleccionado tiene los siguientes datos: \n"<<endl;
  Grafo.printAdjList();
  cout<<"\n Datos impresos correctamente\n"<<endl;
  }
}

void recorrerGrafo(){
  Graph Grafo;
  int init_vertx, target_vertx;
  string NomArchivo;
  Grafo.loadGraphList(NomArchivo, 5, 5);
  if(false){
    cout<<"Archivo no encontrado"<<endl;
  } else {
  cout<<"Inserte la coordenada para empezar el recorrido"<<endl;
  cout<<"Inicial: "<<endl;
  cin>>init_vertx;
  cout<<"Objetivo: "<<endl;
  cin>>target_vertx;
  }
}

void guardarRespuesta(){
  Graph Grafo;
  ifstream inFile;
  string filename, newfilename;
  cout<<"Ingresa el nombre del archivo que quiere guardar"<<endl;
  cin>>filename;
  inFile.open(filename);
	ofstream outFile;
  cout<<"Ingresa el nombre del archivo a guardar"<<endl;
  cin>>newfilename;
  outFile.open(newfilename);
	while(outFile.good()){
		Grafo.printAdjListAns();
		}
  outFile.close();
	}

