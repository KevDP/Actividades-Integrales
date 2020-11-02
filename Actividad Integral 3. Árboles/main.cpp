#include <iostream>
#include <cstring>
#include "heap.h"
#include <fstream>
#include <sstream>
#include <vector>
#include "metodo.h"
#include "datosCarta.h"

using namespace std;

template<class Carta>
Heap<Carta> mi_arbol;
template<class Carta>
Metodo<Carta> mi_metodo;

int main(){

Heap<Carta> mi_arbol;
Metodo<Carta> mi_metodo;
int opcion;

do {
		cout << "1. Obtener datos\n";
    cout << "2. Agregar dato\n";
    cout << "3. Escribir datos en archivo\n";
		cout << "4. Buscar dato\n";
		cout << "5. Exit\n";
		cin >> opcion;
		cin.ignore();
    switch (opcion){
      case 1: mi_metodo.leer(); break;
      case 2: mi_metodo.agregar(); break;
      case 3: mi_metodo.escribir(); break;
      case 4: mi_metodo.buscarEnArbol(); break;
      case 5 : cout << "Saliendo..."; return 0;
			default: cout << "Opcion incorrecta\n"; break;
		}
		cout << "\n\n";
	} while (opcion != 5);
	return 0;
}

/*

int main(int argc, char* argv[]) {
	string in_ans = "", pre_ans = "";
	SplayTree<int> my_splay;
	bool found = 0;

	my_splay.add(15);
	in_ans =	"[15]";
	cout << " 1 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	
	my_splay.add(10);
	my_splay.add(17);
	
	my_splay.add(7);
	my_splay.add(13);
	
	my_splay.add(16);
	in_ans =	"[7 10 13 15 16 17]";
	pre_ans =	"[16 13 7 10 15 17]";
	cout << " 2 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	cout << " 2 " <<	(!pre_ans.compare(my_splay.preorder()) ? "success\n" : "fail\n");

	found = my_splay.find(15);
	in_ans =	"[7 10 13 15 16 17]";
	pre_ans =	"[15 13 7 10 16 17]";
	cout << " 3 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	cout << " 3 " <<	(!pre_ans.compare(my_splay.preorder()) ? "success\n" : "fail\n");
	cout << " 3 " <<	(found == 1 ? "success\n" : "fail\n");

	found = my_splay.find(17);
	in_ans =	"[7 10 13 15 16 17]";
	pre_ans =	"[17 16 15 13 7 10]";
	cout << " 4 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	cout << " 4 " <<	(!pre_ans.compare(my_splay.preorder()) ? "success\n" : "fail\n");
	cout << " 4 " <<	(found == 1 ? "success\n" : "fail\n");

	my_splay.remove(13);  //bottum up
	in_ans =	"[7 15 16 17]";
	pre_ans =	"[15 7 16 17]";
	cout << " 5 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	cout << " 5 " <<	(!pre_ans.compare(my_splay.preorder()) ? "success\n" : "fail\n");
	cout << " 5 " <<	(found == 1 ? "success\n" : "fail\n");

	my_splay.remove(16);  //bottum up
	in_ans =	"[7 15 17]";
	pre_ans =	"[15 7 17]";
	cout << " 6 " <<	(!in_ans.compare(my_splay.inorder()) ? "success\n" : "fail\n");
	cout << " 6 " <<	(!pre_ans.compare(my_splay.preorder()) ? "success\n" : "fail\n");
	cout << " 6 " <<	(found == 1 ? "success\n" : "fail\n");
	
}

*/
