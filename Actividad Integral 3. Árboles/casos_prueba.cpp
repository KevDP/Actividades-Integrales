/*
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include "heap.h"

using namespace std;


int main(int argc, char* argv[]) {
	Heap<int> heap(10);
	string ans;
	heap.push(99);
  heap.push(9);

  ans =	"[9 99]";
	cout << " Prueba #1 " <<	(!ans.compare(heap.toString()) ? "success\n" : "fail\n");

	heap.push(56);
	heap.push(7);
	ans ="[7 9 56 99]";
	cout << " Prueba #2 " <<	(!ans.compare(heap.toString()) ? "success\n" : "fail\n");

	heap.pop();
  heap.push(1);
	ans ="[1 9 56 99]";
	cout << " Prueba #3 " <<	(!ans.compare(heap.toString()) ? "success\n" : "fail\n");

	cout << " Prueba #4 " <<	((4 == heap.size()) ? "success\n" : "fail\n");

  heap.pop();
  heap.pop();
	ans ="[56 99]";
	cout << " Prueba #5 " <<	(!ans.compare(heap.toString()) ? "success\n" : "fail\n");

	cout << " Prueba #6 " <<	((2 == heap.size()) ? "success\n" : "fail\n");

	cout << " Prueba #7 " <<	((56 == heap.top()) ? "success\n" : "fail\n");

	cout << " Prueba #8 " <<	((0 == heap.empty()) ? "success\n" : "fail\n");

  heap.pop();

	cout << " Prueba #9 " <<	((99 == heap.top()) ? "success\n" : "fail\n");

	heap.pop();

	cout << " Prueba #10 " <<	((1 == heap.empty()) ? "success\n" : "fail\n");

}
*/