#ifndef NODE_H
#define NODE_H

/*
	In this file node.h save us the template
	of NODO that will have  our main  element
*/
#include<iostream>

template<typename T>
class Node{
public:
	T data;
	Node<T> *next;
	
	Node(T data = 0, Node<T> *next = 0):data(data){
		next = next;
	}
	void setData(T data_info ){
		data = data_info;
	}
	T getData(){
		return data;
	}
	void setNext(Node<T> *next_info){
		next = next_info ;
	}
	Node<T> *getNext(){
		return next;
	}

};

#endif // NODE_H
