#include<iostream>
using namespace std;
#include"listasimple.h"

using listas = ListaSimple<int> ;

/*
	- Número aleatorios entre 250 y 420:
	num=250+rand()%(421-250);
 */

int main(){


	listas *newlista = new ListaSimple<int>();
	cout << newlista << endl;
	int num;
	for(int e = 1 ; e < 8; e++){
		//num = 0 + rand() % (500 - 0);
		newlista->add(e);
	}
	newlista->print();
	int f; cout << "number add : " ; cin >> f;
	newlista->add(f);
	newlista->print();



	int n; cout << "number delete : "; cin >> n;
	//newlista->delete_data_search(n);
	newlista->deleting(n);
	newlista->print();

	delete newlista;

	return 0;
}
