#include <iostream>
#include <fstream>
#include <sstream>
#include "sorts.h"

using namespace std;

void leer();
void escribir();
void buscarxRangos();

int main(){
vector<string> datos_txt;
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
      case 3: buscarxRangos(); break;
      case 4 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 6);
	return 0;
}

void leer(){
  vector<string> datos_txt;
  ifstream inFile;
  string line = "";
  inFile.open("archivo.txt");

  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_txt.push_back(line);
		  }
    }

    
     for(int i = 0; i < datos_txt.size(); i++){
       cout<<datos_txt.at(i)<<"\n";
    }
    cout<<"\n Datos obtenidos correctamente de archivo.txt\n"<<"\n";

  inFile.close();

}


void escribir(){

Sorts<string> sorts;
vector<string> datos_txt;
ifstream inFile;
string line = "";
inFile.open("archivo.txt");
ofstream outFile;
outFile.open("resultado.txt");

  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_txt.push_back(line);
		  }
    }

  sorts.ordenaMerge(datos_txt);
    
  for (int i = 0; i < datos_txt.size(); i++) {
    outFile << datos_txt[i] << "\n";
  }
    
  for(int i = 0; i < datos_txt.size(); i++){
    cout<<datos_txt.at(i)<<"\n";
  }
  cout<<"\n Datos ordenados correctamente y guardados en resultado.txt \n"<<"\n";
  outFile.close();
}

void buscarxRangos(){
  vector<string> datos_txt;
  ifstream inFile;
  string line = "";
  inFile.open("resultado.txt");
  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_txt.push_back(line);
		  }
  }

  int min;
  int max;
  cout<<"\n Escriba el rango de datos que quiere buscar.\n\n ";
  cout<<"\n Buscar de: \n";
  cin>>min;
  cout<<"\n a: \n\n";
  cin>>max;
  for(int i = min; i <= max; i++){
       cout<<datos_txt.at(i)<<"\n";
      }
}
