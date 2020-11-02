#ifndef DATOSCARTA_H_
#define DATOSCARTA_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

template <typename Carta>
class datosCarta{

  private:
    string nombre;
    int numCarta;
    string tipo;
    int atk;
    int def;

  public:
    datosCarta(int num, string n, string t, int patk, int pdef){
    numCarta = num;
    nombre = n;
    tipo = t;
    atk = patk;
    def = pdef;
  }
  /*
  int getnumCarta();
  string getnombre();
  string gettipo();
  int getpatk();
  int getpdef();
  */
  void ver(){
  cout<<numCarta<<" "<<nombre<<" "<<tipo<<" "<<atk<<" "<<def<<endl;
  }

  int getnumCarta(){
    return numCarta;
  }

  string getnombre(){
    return nombre;
  }

  string gettipo(){
    return tipo;
  }

  int getpatk(){
    return atk;
  }

  int getpdef(){
    return def;
  }

};

#endif