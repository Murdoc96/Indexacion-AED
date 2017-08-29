#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H


#include"node.h"

template<typename type>

class ListaSimple{

using Nodo = Node<type> *;

protected:
	Node<type> *head;
	Node<type> *last;
public:
	ListaSimple(){
		head = last = 0;
	}
	~ListaSimple(){}

	Node<type> *getHead(){return head;}
	Nodo getLast(){return last;}

	void push_front(type);
	void push_back(type);
	void pop_front();
	void pop_back();

	void print();
	Nodo getMayor();
	void delete_data_search(type);

	// con puntero doble

	bool find(Node<type>** &p,type d);
	bool add(type data);
	bool deleting(type data);


};







#include"listasimple.tpp"



#endif //LISTASIMPLE_Hs
