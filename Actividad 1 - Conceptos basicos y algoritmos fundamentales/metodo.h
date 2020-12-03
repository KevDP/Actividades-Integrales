#ifndef METODO_H_
#define METODO_H_

#include <fstream>
#include <sstream>
#include "sorts.h"

using namespace std;

class Metodo{

  private:
    void leer();		// Leer archivo de texto
    void escribir();		// Escribir en un nuevo archivo
    void buscarxRangos();	// Buscar datos según un rango
};

vector<string> datos_txt;		// Utilizar un vector
Sorts<string> sorts;		// Utilizar un sort


void leer(){
 
  ifstream inFile;
  string line = "";
  inFile.open("archivo.txt");		// Abrir el archivo

  while(getline(inFile, line)){		// Leer cada dato por linea
      if(line.size() > 0){		// Guardar linea hasta que no quede ninguna en el archivo
        datos_txt.push_back(line);
		  }
  }

     for(int i = 0; i < datos_txt.size(); i++){		// Desplegar lo guardado en el vector
       cout<<datos_txt.at(i)<<"\n";
    }
    cout<<"\n Datos obtenidos correctamente de archivo.txt\n"<<"\n";

  inFile.close();		// Cerrar archivo

}


void escribir(){
ofstream outFile;
outFile.open("resultado.txt");

  sorts.ordenaMerge(datos_txt);	// Ordenar el vector mediante un merge sort
    
  for (int i = 0; i < datos_txt.size(); i++) {		// Guardar cada uno de los datos del vector ordenando en archivo
    outFile << datos_txt[i] << "\n";
  }
    
  for(int i = 0; i < datos_txt.size(); i++){		// Desplegar datos del vector
    cout<<datos_txt.at(i)<<"\n";
  }
  cout<<"\n Datos ordenados correctamente y guardados en resultado.txt \n"<<"\n";
  outFile.close();					// Cerrar archivo
}

void buscarxRangos(){
  int min, max;
  cout<<"\n Escriba el rango de datos que quiere buscar.\n\n ";
  cout<<"\n Buscar de: \n";
  cin>>min;
  cout<<"\n a: \n\n";
  cin>>max;
  if (min<0 || max>datos_txt.size()){				// Si está fuera de rango desplegar la respuesta
    cout<<"\n\n"<<"No es posible encontrar algunos datos"<<"\n";
  } else {
  for(int i = min; i <= max; i++){				// Desplegar los datos según el rango
       cout<<datos_txt.at(i)<<"\n";
  }
  }
}

#endif
