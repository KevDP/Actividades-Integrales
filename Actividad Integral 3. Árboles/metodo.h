#ifndef METODO_H_
#define METODO_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "sorts.h"
#include "datosCarta.h"

using namespace std;

template <typename Carta>
class Metodo{

  public:
    void leer();
    void escribir();
    void buscarEnArbol();
    void agregar();
    Heap<Carta> arbol;  // Implementar el árbol Heap
};

string nombre, tipo;
int numCarta, atk, def;

template <class Carta>
void Metodo<Carta>::leer(){
  vector<Carta> cartaDuelista;
  ifstream inFile;
  inFile.open("datos.csv");
  if(!inFile.is_open()){
    cout<<"No es posible encontrar el archivo"<<"datos.csv"<<endl;
  } else { 
    while(inFile>>numCarta>>nombre>>tipo>>atk>>def)
	{
    cout<<numCarta<<" "<<nombre<<" "<<tipo<<" "<<atk<<" "<<def<<" "<<endl;

    Carta cartaDuelista(numCarta,nombre,tipo,atk,def);
    arbol.push(cartaDuelista);
  }
  inFile.close();
  ordenaMerge(cartaDuelista);
  for(int i = 0; i < cartaDuelista.size(); i++){
    cartaDuelista[i].ver();
  }
}
}

template <class Carta>
void Metodo<Carta>::escribir(){
vector<Carta> cartaDuelista;
ofstream outFile;
outFile.open("Resultado.csv");
if(outFile.is_open()){
  for(int i = 0; i < cartaDuelista.size(); i++){
      outFile <<cartaDuelista[i].getnumCarta()<<" "<<cartaDuelista[i].getNombre()<<" "<<cartaDuelista[i].gettipo()<<" "<<cartaDuelista[i].getatk()<<" "<<cartaDuelista[i].getdef()<<endl;
  }
}
outFile.close();
}

template <class Carta>
void Metodo<Carta>::buscarEnArbol(){
  vector<string> datos_csv;
  ifstream inFile;
  string line = "";
  inFile.open("resultado.csv");
  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_csv.push_back(line);
		  }
  }
 Carta val;
 cout<<"\n Escriba el dato que quiere buscar.\n\n ";
 cin>>val;
 arbol.find(val);
 inFile.close();
}

template <class Carta>
void Metodo<Carta>::agregar(){
 vector<string> datos_csv;
  ifstream inFile;
  string line = "";
  inFile.open("Archivo.csv");
  ofstream outFile;
  outFile.open("Resultado.csv");

  while(getline(inFile, line)){
      if(line.size() > 0){
        datos_csv.push_back(line);
		  }
    }
    
  for (int i = 0; i < datos_csv.size(); i++) {
    outFile << datos_csv[i] << "\n";
 }

 Carta val;
 cout<<"\n Escriba el dato que quiere agregar.\n\n ";
 cin>>val;
 arbol.add(val);
 cout<<"\n"<<val<<"\n";
 outFile.close();
}



#endif