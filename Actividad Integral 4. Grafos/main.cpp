#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include "graph.h"
using namespace std;

void leerGrafo();
void imprimirGrafo();
void recorrerGrafo();
void guardarRespuesta();
void casosPrueba();

Graph Grafo;
string filenameLoad;
int init_vertx, target_vertx;

int main(){
int opcion;

  cout<<"\n Ingresa el nombre del archivo a cargar: ";  
  cin>>filenameLoad;

  cout << "\n ¡¡Bienvenido!! ¿Qué deseas hacer? \n";

do {
		cout << "1. Leer Archivo\n";
    		cout << "2. Imprimir datos del grafo\n";
    		cout << "3. Camino más corto a recorrer\n";
		cout << "4. Guardar respuesta en archivo\n";
    		cout << "5. Probar casos de prueba\n";
		cout << "6. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: leerGrafo(); break;
      case 2: imprimirGrafo(); break;
      case 3: recorrerGrafo(); break;
      case 4: guardarRespuesta(); break;
      case 5: casosPrueba();
      case 6 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 7);
	return 0;
}

void leerGrafo(){			// Leer los datos del grafo de 13 x 13
  Grafo.loadGraphList(filenameLoad, 13, 13);
  cout<<"\n Datos obtenidos correctamente del archivo\n"<<"\n";
}

void imprimirGrafo(){			// Imprimir el grafo a la pantalla con las salas y sus conexiones
  cout<<"\n El grafo seleccionado tiene los siguientes datos: \n"<<endl;
  cout<<Grafo.printAdjListProy()<<endl;
  cout<<"\n Datos impresos correctamente\n"<<endl;
}


void recorrerGrafo(){			// Recorrer el grafo según la sala en donde se encuentra y hacia donde irá el usuario
  cout<<"\n Inserte la coordenada para empezar el recorrido \n"<<endl;
  cout<<"Inicial: ";
  cin>>init_vertx;
  cout<<"Objetivo: ";
  cin>>target_vertx;
  cout<<"\n Grafo recorrido: \n"<<endl;
  cout<<Grafo.DFS_path(init_vertx,target_vertx)<<endl;
}

void guardarRespuesta(){		// Guardar la respuesta del punto 3 en el archivo nuevo
string filenameSave;

ofstream outFile;
cout << "\n Ingrese el nombre del archivo a guardar: \n"<<endl;
cin>>filenameSave;
outFile.open(filenameSave);
  
  outFile<<"Inicial: "<<init_vertx<<"\n";
  outFile<<"Objetivo: "<<target_vertx<<"\n";
  outFile << Grafo.DFS_path(init_vertx, target_vertx);
  cout<<"\n Datos guardados correctamente en: " << filenameSave << endl;
  outFile.close();
}

  void casosPrueba(){			// Probar los casos de prueba
    Graph estrella;

    string estrella_resCorrecta1;
    string estrella_resCorrecta2;

    estrella.loadGraphList("caso_prueba.txt", 5, 5); 
	
    estrella_resCorrecta1="vertice 0 : 1 2 3 4 vertice 1 : 0 2 3 4 vertice 2 : 0 1 3 4 vertice 3 : 0 1 2 4 vertice 4 : 0 1 2 3 ";
    cout << " 2 " <<	(!estrella_resCorrecta1.compare(estrella.printAdjList()) ? "success\n" : "fail\n");
    estrella_resCorrecta1 = "visitados: 0 4 3 recorrido: 0 4 3";
    estrella_resCorrecta2 = "visitados: 0 1 2 3 recorrido: 0 1 2 3";
    cout << " 4 " <<	( (!estrella_resCorrecta1.compare(estrella.DFS(0,3)) || !estrella_resCorrecta2.compare(estrella.DFS(0,3)))? "success\n" : "fail\n");
    estrella_resCorrecta1 = "visitados: 0 1 2 3 recorrido: 0 3";
    estrella_resCorrecta2 = "visitados: 0 4 3 recorrido: 0 3";
    cout << " 6 " <<	((!estrella_resCorrecta1.compare(estrella.BFS(0,3)) || !estrella_resCorrecta2.compare(estrella.BFS(0,3))) ? "success\n" : "fail\n");
}

