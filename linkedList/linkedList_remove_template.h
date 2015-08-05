#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Node {
	T data;
	Node<T> *nextPtr;

	template <typename T> friend class LinkedList;
};

template <typename T>
class LinkedList {
public:
	LinkedList<T>();
	void addFront(const T& e);
	void removeFront();

private:
	Node<T> *head;
};

template <typename T>
LinkedList<T>::LinkedList() : head(NULL){}

template <typename T>
void LinkedList<T>::addFront(const T& e) {
	Node<T> *newNode = new Node < T > ;
	newNode->data = e;
	newNode->nextPtr = head;
	head = newNode;
	cout << head->data << endl;

}

template <typename T>
void LinkedList<T>::removeFront() {
	while (head != NULL) {
		Node<T> *old = head;
		head = old->nextPtr;
		delete old;
	}
}